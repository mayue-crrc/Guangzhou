#include "crrcrecorder.h"
#include <QDebug>
#include <QFile>
#include <stdlib.h>
#include <QStringList>
#include <QString>

CrrcRecorder::CrrcRecorder()
{
}

bool CrrcRecorder::readFile(const QString &path)
{
    if (QFile::exists(path) == false)
    {
        qDebug() << "the file does not exist" << __FILE__ << __LINE__;

        return false;
    }

    QFile file(path);

    file.open(QIODevice::ReadOnly);

    QTextStream stream(&file);
    stream.setCodec("GBK");

    while (stream.atEnd() == false)
    {
        QString line = stream.readLine();
        QStringList stringList = line.split("--");

        if (stringList.size() == 11) // data by time
        {
            struct date_type data;

            int year = stringList.at(0).trimmed().toInt(),
                month = stringList.at(1).trimmed().toInt(),
                day = stringList.at(2).trimmed().toInt();

            if (QDate::isValid(year, month, day) == false)
            {
                qDebug() << "invalid date" << __FILE__ << __LINE__;

                continue;
            }

            data.mileage = stringList.at(3).trimmed().toUInt();
            data.compressor1 = stringList.at(4).trimmed().toUInt();
            data.compressor2 = stringList.at(5).trimmed().toUInt();
            data.total = stringList.at(6).trimmed().toInt();
            data.auxiliary = stringList.at(7).trimmed().toInt();
            data.traction = stringList.at(8).trimmed().toInt();
            data.brake = stringList.at(9).trimmed().toInt();
            data.regenerate = stringList.at(10).trimmed().toInt();

            this->recordDate.insert(QDate(year, month, day), data);
        }
        else if (stringList.size() == 8)    // data by mileage
        {
            struct mileage_type data;

            data.compressor1 = stringList.at(1).trimmed().toUInt();
            data.compressor2 = stringList.at(2).trimmed().toUInt();
            data.total = stringList.at(3).trimmed().toUInt();
            data.auxiliary = stringList.at(4).trimmed().toUInt();
            data.traction = stringList.at(5).trimmed().toUInt();
            data.brake = stringList.at(6).trimmed().toUInt();
            data.regenerate = stringList.at(7).trimmed().toUInt();

            this->recordMileage.insert(stringList.at(0).trimmed().toULong(), data);   // mileage and data
        }
    }

    file.close();

    return true;
}

int CrrcRecorder::getRecordDateSize() const
{
    return this->recordDate.size();
}

int CrrcRecorder::getRecordMileageSize() const
{
    return this->recordMileage.size();
}

void CrrcRecorder::insertRecordDate(QDate date, struct date_type data)
{
    if (this->getRecordDateSize() < 30)
    {
        this->recordDate.insert(date, data);
    }
    else if (this->recordDate.contains(date))
    {
        this->recordDate.insert(date, data);
    }
    else
    { 
        while (this->recordDate.size() > 30)
        {
             this->removeFirst(this->recordDate);
        }

        this->recordDate.insert(date, data);
    }
}

void CrrcRecorder::insertRecordMileage(quint64 mileage, struct mileage_type data)
{
    #define _TEMP (mileage / 10 * 10)

    if (this->recordMileage.size() < 100)
    {
        this->recordMileage.insert(_TEMP, data);
    }
    else if (this->recordMileage.contains(_TEMP))
    {
        this->recordMileage.insert(_TEMP, data);
    }
    else
    {   
        while (this->recordMileage.size() > 100)
        {
            this->removeFirst(this->recordMileage);
        }

        this->recordMileage.insert(_TEMP, data);
    }
}

void CrrcRecorder::removeFirst(QMap<QDate, struct date_type> &temp)
{
    if (temp.isEmpty())
    {
        return;
    }
    else
    {
        temp.remove(temp.keys().first());
    }
}

void CrrcRecorder::removeFirst(QMap<quint64, struct mileage_type> &temp)
{   
    if (temp.isEmpty())
    {
        return;
    }
    else
    {
        temp.remove(temp.keys().first());
    }
}

bool CrrcRecorder::saveRecord(QString filePath)
{
    QFile file(filePath);

    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QTextStream stream(&file);

    stream.setCodec("GBK");

    QString line;

    foreach (QDate date, this->recordDate.keys())
    {
        line.sprintf("%d -- %d -- %d -- %d -- %d -- %d -- %d -- %d -- %d -- %d -- %d\n",
                            date.year(), date.month(), date.day(), this->recordDate[date].mileage, this->recordDate[date].compressor1,
                                this->recordDate[date].compressor2, this->recordDate[date].total, this->recordDate[date].auxiliary,
                                    this->recordDate[date].traction, this->recordDate[date].brake, this->recordDate[date].regenerate);
        stream << line;
    }

    foreach (int mileage, this->recordMileage.keys())
    {
        line.sprintf("%d -- %d -- %d -- %d -- %d -- %d -- %d -- %d\n",
                            mileage, this->recordMileage[mileage].compressor1, this->recordMileage[mileage].compressor2,
                                this->recordMileage[mileage].total, this->recordMileage[mileage].auxiliary, this->recordMileage[mileage].traction,
                                    this->recordMileage[mileage].brake, this->recordMileage[mileage].regenerate);
        stream << line;
    }

    file.close();

    return true;
}

// there are two conditions, just one item
quint32 CrrcRecorder::getMileageByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].mileage - this->recordDate[date].mileage;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].mileage;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].mileage >= this->recordDate[date].mileage)
            {
                value = this->recordDate[QDate::currentDate()].mileage - this->recordDate[date].mileage;
            }
            else
            {
                value = this->recordDate[date].mileage;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getCompressor1ByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].compressor1 - this->recordDate[date].compressor1;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].compressor1;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].compressor1 >= this->recordDate[date].compressor1)
            {
                value = this->recordDate[QDate::currentDate()].compressor1 - this->recordDate[date].compressor1;
            }
            else
            {
                value = this->recordDate[date].compressor1;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getCompressor2ByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].compressor2 - this->recordDate[date].compressor2;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].compressor2;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].compressor2 >= this->recordDate[date].compressor2)
            {
                value = this->recordDate[QDate::currentDate()].compressor2 - this->recordDate[date].compressor2;
            }
            else
            {
                value = this->recordDate[date].compressor2;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getTractionByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].traction - this->recordDate[date].traction;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].traction;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].traction >= this->recordDate[date].traction)
            {
                value = this->recordDate[QDate::currentDate()].traction - this->recordDate[date].traction;
            }
            else
            {
                value = this->recordDate[date].traction;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getTotalByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].total - this->recordDate[date].total;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].total;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].total >= this->recordDate[date].total)
            {
                value = this->recordDate[QDate::currentDate()].total - this->recordDate[date].total;
            }
            else
            {
                value = this->recordDate[date].total;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getAuxiliaryByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].auxiliary - this->recordDate[date].auxiliary;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].auxiliary;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].auxiliary >= this->recordDate[date].auxiliary)
            {
                value = this->recordDate[QDate::currentDate()].auxiliary - this->recordDate[date].auxiliary;
            }
            else
            {
                value = this->recordDate[date].auxiliary;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getBrakeByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].brake - this->recordDate[date].brake;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].brake;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].brake >= this->recordDate[date].brake)
            {
                value = this->recordDate[QDate::currentDate()].brake - this->recordDate[date].brake;
            }
            else
            {
                value = this->recordDate[date].brake;
            }



            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getRegenerateByDay(int day)
{
    quint32 value = 0;

    foreach (QDate date, this->recordDate.keys())
    {
        // it means that in the days
        if (date.daysTo(QDate::currentDate()) == day)
        {
            value = this->recordDate[QDate::currentDate()].regenerate - this->recordDate[date].regenerate;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) == 0)
        {
            value = this->recordDate[QDate::currentDate()].regenerate;

            break;
        }
        else if (date.daysTo(QDate::currentDate()) < day)
        {
            // more than that
            if (this->recordDate[QDate::currentDate()].regenerate >= this->recordDate[date].regenerate)
            {
                value = this->recordDate[QDate::currentDate()].regenerate - this->recordDate[date].regenerate;
            }
            else
            {
                value = this->recordDate[date].regenerate;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getCompressor1ByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].compressor1 >= this->recordMileage[key].compressor1)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].compressor1 - this->recordMileage[key].compressor1;
            }
            else
            {
                value = this->recordMileage[key].compressor1;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getCompressor2ByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].compressor2 >= this->recordMileage[key].compressor2)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].compressor2 - this->recordMileage[key].compressor2;
            }
            else
            {
                value = this->recordMileage[key].compressor2;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getTotalByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].total >= this->recordMileage[key].total)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].total - this->recordMileage[key].total;
            }
            else
            {
                value = this->recordMileage[key].total;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getAuxiliaryByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].auxiliary >= this->recordMileage[key].auxiliary)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].auxiliary - this->recordMileage[key].auxiliary;
            }
            else
            {
                value = this->recordMileage[key].auxiliary;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getTractionByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].traction >= this->recordMileage[key].traction)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].traction - this->recordMileage[key].traction;
            }
            else
            {
                value = this->recordMileage[key].traction;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getBrakeByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].brake >= this->recordMileage[key].brake)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].brake - this->recordMileage[key].brake;
            }
            else
            {
                value = this->recordMileage[key].brake;
            }

            break;
        }
    }

    return value;
}

quint32 CrrcRecorder::getRegenerateByMileage(int mileage)
{
    quint32 value = 0;

    foreach (quint64 key, this->recordMileage.keys())
    {
        if (this->recordMileage.keys().last() - key <= mileage)
        {
            // more than that
            if (this->recordMileage[this->recordMileage.keys().last()].regenerate >= this->recordMileage[key].regenerate)
            {
                value = this->recordMileage[this->recordMileage.keys().last()].regenerate - this->recordMileage[key].regenerate;
            }
            else
            {
                value = this->recordMileage[key].regenerate;
            }

            break;
        }
    }

    return value;
}

void CrrcRecorder::clearAll()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].mileage = 0;
        this->recordDate[key].compressor1 = 0;
        this->recordDate[key].compressor2 = 0;
        this->recordDate[key].total = 0;
        this->recordDate[key].auxiliary = 0;
        this->recordDate[key].brake = 0;
        this->recordDate[key].traction = 0;
        this->recordDate[key].regenerate = 0;
    }

    this->recordMileage.clear();

    for (int i = 0; i < 100; i ++)
    {
        struct mileage_type mileage;

        this->recordMileage.insert(i, mileage);
    }
}

void CrrcRecorder::clearCompressor1()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].compressor1 = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].compressor1 = 0;
    }
}

void CrrcRecorder::clearCompressor2()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].compressor2 = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].compressor2 = 0;
    }
}

void CrrcRecorder::clearTotal()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].total = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].total = 0;
    }
}

void CrrcRecorder::clearAuxiliary()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].auxiliary = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].auxiliary = 0;
    }
}

void CrrcRecorder::clearBrake()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].brake = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].brake = 0;
    }
}

void CrrcRecorder::clearTraction()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].traction = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].traction = 0;
    }
}

void CrrcRecorder::clearRegenerate()
{
    foreach (QDate key, this->recordDate.keys())
    {
        this->recordDate[key].regenerate = 0;
    }

    foreach (quint64 key, this->recordMileage.keys())
    {
        this->recordMileage[key].regenerate = 0;
    }
}

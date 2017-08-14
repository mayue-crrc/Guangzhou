#ifndef CRRCRECORDER_H
#define CRRCRECORDER_H

#include <QString>
#include <QDate>
#include <QMap>

struct date_type
{
    quint32 mileage;
    quint32 compressor1, compressor2;
    quint32 total, auxiliary, traction;
    quint32 brake, regenerate;

    date_type()
    {
        this->mileage = 0;
        this->compressor1 = 0;
        this->compressor2 = 0;
        this->total = 0;
        this->auxiliary = 0;
        this->traction = 0;
        this->brake = 0;
        this->regenerate = 0;
    }
};

struct mileage_type
{
    quint32 compressor1, compressor2;
    quint32 total, auxiliary, traction;
    quint32 brake, regenerate;

    mileage_type()
    {
        this->compressor1 = 0;
        this->compressor2 = 0;
        this->total = 0;
        this->auxiliary = 0;
        this->traction = 0;
        this->brake = 0;
        this->regenerate = 0;
    }
};

class CrrcRecorder
{
public:
    CrrcRecorder();
    bool readFile(const QString &path);
    int getRecordDateSize() const;
    int getRecordMileageSize() const;
    void insertRecordDate(QDate date, struct date_type data);
    void insertRecordMileage(quint64 mileage, struct mileage_type data);
    quint32 getMileageByDay(int day);
    quint32 getCompressor1ByDay(int day);
    quint32 getCompressor2ByDay(int day);
    quint32 getTotalByDay(int day);
    quint32 getAuxiliaryByDay(int day);
    quint32 getBrakeByDay(int day);
    quint32 getRegenerateByDay(int day);
    quint32 getTractionByDay(int day);
    quint32 getCompressor1ByMileage(int mileage);
    quint32 getCompressor2ByMileage(int mileage);
    quint32 getTotalByMileage(int mileage);
    quint32 getAuxiliaryByMileage(int mileage);
    quint32 getBrakeByMileage(int mileage);
    quint32 getRegenerateByMileage(int mileage);
    quint32 getTractionByMileage(int mileage);
    void clearAll();
    void clearCompressor1();
    void clearCompressor2();
    void clearTotal();
    void clearAuxiliary();
    void clearBrake();
    void clearTraction();
    void clearRegenerate();
    bool saveRecord(QString filePath);

private:
    int day, mileage;
    int currentMileage;
    QMap<QDate, struct date_type> recordDate;
    QMap<quint64, struct mileage_type> recordMileage;
    void removeFirst(QMap<QDate, struct date_type> &temp);
    void removeFirst(QMap<quint64, struct mileage_type> &temp);
};

#endif // CRRCRECORDER_H

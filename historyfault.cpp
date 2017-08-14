#include "historyfault.h"
#include "ui_historyfault.h"
#include "crrcfault.h"
#include <QDebug>

#define _HISTORY_FAULT_MAX_ITEM 10

HistoryFault::HistoryFault(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::HistoryFault)
{
    ui->setupUi(this);

    this->line1 << ui->btnLine1Number << ui->btnLine1Level << ui->btnLine1Code << ui->btnLine1Name << ui->btnLine1Time << ui->btnLine1EndTime;
    this->line2 << ui->btnLine2Number << ui->btnLine2Level << ui->btnLine2Code << ui->btnLine2Name << ui->btnLine2Time << ui->btnLine2EndTime;
    this->line3 << ui->btnLine3Number << ui->btnLine3Level << ui->btnLine3Code << ui->btnLine3Name << ui->btnLine3Time << ui->btnLine3EndTime;
    this->line4 << ui->btnLine4Number << ui->btnLine4Level << ui->btnLine4Code << ui->btnLine4Name << ui->btnLine4Time << ui->btnLine4EndTime;
    this->line5 << ui->btnLine5Number << ui->btnLine5Level << ui->btnLine5Code << ui->btnLine5Name << ui->btnLine5Time << ui->btnLine5EndTime;
    this->line6 << ui->btnLine6Number << ui->btnLine6Level << ui->btnLine6Code << ui->btnLine6Name << ui->btnLine6Time << ui->btnLine6EndTime;
    this->line7 << ui->btnLine7Number << ui->btnLine7Level << ui->btnLine7Code << ui->btnLine7Name << ui->btnLine7Time << ui->btnLine7EndTime;
    this->line8 << ui->btnLine8Number << ui->btnLine8Level << ui->btnLine8Code << ui->btnLine8Name << ui->btnLine8Time << ui->btnLine8EndTime;
    this->line9 << ui->btnLine9Number << ui->btnLine9Level << ui->btnLine9Code << ui->btnLine9Name << ui->btnLine9Time << ui->btnLine9EndTime;
    this->line10 << ui->btnLine10Number << ui->btnLine10Level << ui->btnLine10Code << ui->btnLine10Name << ui->btnLine10Time << ui->btnLine10EndTime;

    this->page = 1;

    this->clearLine(this->line1);
    this->clearLine(this->line2);
    this->clearLine(this->line3);
    this->clearLine(this->line4);
    this->clearLine(this->line5);
    this->clearLine(this->line6);
    this->clearLine(this->line7);
    this->clearLine(this->line8);
    this->clearLine(this->line9);
    this->clearLine(this->line10);
}

HistoryFault::~HistoryFault()
{
    delete ui;
}

void HistoryFault::updatePage()
{
    if (this->crrcFault->getHistoryFaultListSize() % _HISTORY_FAULT_MAX_ITEM == 0)
    {
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(this->crrcFault->getHistoryFaultListSize() / _HISTORY_FAULT_MAX_ITEM));
    }
    else
    {
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(this->crrcFault->getHistoryFaultListSize() / _HISTORY_FAULT_MAX_ITEM + 1));
    }

    this->clearLine(this->line1);
    this->clearLine(this->line2);
    this->clearLine(this->line3);
    this->clearLine(this->line4);
    this->clearLine(this->line5);
    this->clearLine(this->line6);
    this->clearLine(this->line7);
    this->clearLine(this->line8);
    this->clearLine(this->line9);
    this->clearLine(this->line10);

    for (int i = 0; i < this->crrcFault->getHistoryFaultListSize(); i ++)
    {
        if (this->page * _HISTORY_FAULT_MAX_ITEM > i && (this->page - 1) * _HISTORY_FAULT_MAX_ITEM <= i)
        {
            QList<QString> content;

            if (this->crrcFault->getHistoryFaultPosition(i).size() != 0)
            {
                content << QString::number(i + 1)
                        << QString::number(this->crrcFault->getHistoryFaultLevel(i))
                        << this->crrcFault->getHistoryFaultCode(i)
                        << (this->crrcFault->getHistoryFaultPosition(i) + QString("车 ") +  this->crrcFault->getHistoryFaultDevice(i) + QString(" ") + this->crrcFault->getHistoryFaultName(i))
                        << (this->crrcFault->getHistoryFaultStartDate(i) + QString("\n") + this->crrcFault->getHistoryFaultStartTime(i))
                        << (this->crrcFault->getHistoryFaultEndDate(i) + QString("\n") + this->crrcFault->getHistoryFaultEndTime(i));
            }
            else
            {
                content << QString::number(i + 1)
                        << QString::number(this->crrcFault->getHistoryFaultLevel(i))
                        << this->crrcFault->getHistoryFaultCode(i)
                        << (this->crrcFault->getHistoryFaultPosition(i) + QString("") +  this->crrcFault->getHistoryFaultDevice(i) + QString(" ") + this->crrcFault->getHistoryFaultName(i))
                        << (this->crrcFault->getHistoryFaultStartDate(i) + QString("\n") + this->crrcFault->getHistoryFaultStartTime(i))
                        << (this->crrcFault->getHistoryFaultEndDate(i) + QString("\n") + this->crrcFault->getHistoryFaultEndTime(i));
            }

            this->fillTable(i % 10, content);
        }
    }
}

void HistoryFault::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void HistoryFault::installCrrcFault(CrrcFault *crrcFault)
{
    this->crrcFault = crrcFault;
}

void HistoryFault::on_btnNextPage_clicked()
{
    if (this->crrcFault->getHistoryFaultListSize() / _HISTORY_FAULT_MAX_ITEM > this->page)
    {
        this->page ++;
    }
    else if (this->crrcFault->getHistoryFaultListSize() / _HISTORY_FAULT_MAX_ITEM == this->page
                && this->crrcFault->getHistoryFaultListSize() % _HISTORY_FAULT_MAX_ITEM != 0)
    {
        this->page ++;
    }
}

void HistoryFault::on_btnPreviousPage_clicked()
{
    if (this->page > 1)
    {
        this->page --;
    }
}

void HistoryFault::fillLine(QList<QPushButton *> &line, QList<QString> &content)
{
    if (content.size() != 6)
    {
        _LOG << "the size of the fault item is not 6, please check it";

        return;
    }
    else if (line.size() != 6)
    {
        _LOG << "the size of the line item is not 6, please check it";

        return;
    }

    for (int i = 0; i < line.size(); i ++)
    {
        line.at(i)->setText(content.at(i));
    }
}

void HistoryFault::clearLine(QList<QPushButton *> &line)
{
    if (line.size() != 6)
    {
        _LOG << "the size of the line item is not 5, please check it";

        return;
    }

    foreach (QPushButton *button, line)
    {
        button->setText("");
    }
}


void HistoryFault::fillTable(int i, QList<QString> &content)
{
    switch (i)
    {
    case 0:
        this->fillLine(this->line1, content);
        break;
    case 1:
        this->fillLine(this->line2, content);
        break;
    case 2:
        this->fillLine(this->line3, content);
        break;
    case 3:
        this->fillLine(this->line4, content);
        break;
    case 4:
        this->fillLine(this->line5, content);
        break;
    case 5:
        this->fillLine(this->line6, content);
        break;
    case 6:
        this->fillLine(this->line7, content);
        break;
    case 7:
        this->fillLine(this->line8, content);
        break;
    case 8:
        this->fillLine(this->line9, content);
        break;
    case 9:
        this->fillLine(this->line10, content);
        break;
    }
}

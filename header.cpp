#include "header.h"
#include "ui_header.h"
#include <QTimer>
#include <QDateTime>
#include <QLabel>
#include <QPushButton>
#include "global.h"
#include <QDebug>

Header::Header(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Header)
{
    ui->setupUi(this);
}

Header::~Header()
{
    delete ui;
}

void Header::updatePage()
{
    ui->lblTime->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));
    ui->lblDate->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd"));

    this->setDirection();
    this->setNetVoltage();
    this->setSpeed();
    this->setRunningMode();
    this->setHandleLevel();
    this->setStation();
    this->setCommunicationState(this->database->ccuOnline);
}

void Header::setCommunicationState(bool state)
{
    if (state)
    {
        ui->lblNoCommunication->hide();
    }
    else
    {
        static unsigned char temp = 0;

        temp ++;

        if (temp % 3 == 0)
        {
            ui->lblNoCommunication->hide();
        }
        else
        {
            ui->lblNoCommunication->show();
        }

        if (temp > 200)
        {
            temp = 0;
        }

    }
}

void Header::setDirection()
{
    if (this->database->ccuDirectionForward)
    {
        ui->lblDirection->setText(QString("向前 ▶"));
    }
    else if (this->database->ccuDirectionBackward)
    {
        ui->lblDirection->setText(QString("向后 ◀"));
    }
    else
    {
        ui->lblDirection->setText(QString(""));
    }
}

void Header::setNetVoltage()
{
    unsigned short int voltage[] = {
                                        this->database->inputVoltageSivA1, this->database->inputVoltageSivC1,
                                        this->database->inputVoltageSivC2, this->database->inputVoltageSivA2,
                                   };

    for (int i = 1; i < sizeof voltage / sizeof(unsigned short int); i ++)
    {
        for (int j = 0; j < sizeof voltage / sizeof(signed short int) - i; j ++)
        {
            if (voltage[j] > voltage[j + 1])
            {
                unsigned short int temp = voltage[j];

                voltage[j] = voltage[j + 1];
                voltage[j + 1] = temp;
            }
        }
    }

    ui->lblVoltage->setText(QString::number(voltage[sizeof voltage / sizeof(unsigned short int) - 1]) + QString("V"));
}

void Header::setSpeed()
{
    QString temp;

    temp.sprintf("%.0fkm/h", this->database->ccuVehicleSpeed);
    ui->lblSpeed->setText(temp);
}

void Header::setPageName(QString name)
{
    ui->lblPageTitle->setText(name);
}

void Header::on_btnHelp_clicked()
{
    if (uVehicleStatePage == MyBase::currentPage)
    {
        emit this->changePage(uVehicleStateHelpPage);
    }
    else if (uVehicleParameterPage == MyBase::currentPage)
    {
        emit this->changePage(uVehicleParameterHelpPage);
    }
    else if (uAirConditionerPage == MyBase::currentPage)
    {
        emit this->changePage(uVehicleAirconditionerHelpPage);
    }
    else if (uVehicleStateHelpPage == MyBase::currentPage)
    {
        emit this->changePage(uVehicleStatePage);
    }
    else if (uVehicleParameterHelpPage == MyBase::currentPage)
    {
        emit this->changePage(uVehicleParameterPage);
    }
    else if (uVehicleAirconditionerHelpPage == MyBase::currentPage)
    {
        emit this->changePage(uAirConditionerPage);
    }
}

void Header::setHandleLevel()
{    
    if (this->database->ccuVehicleBrake)
    {
        ui->lblTractionPercent->setText(QString("制动-") + QString::number(this->database->ccuHandleLevel) + QString("%"));
    }
    else if (this->database->ccuVehicleTraction)
    {
        ui->lblTractionPercent->setText(QString("牵引-") + QString::number(this->database->ccuHandleLevel) + QString("%"));
    }
    else
    {
        ui->lblTractionPercent->setText(QString::number(this->database->ccuHandleLevel) + QString("%"));
    }
}

void Header::setRunningMode()
{
    if (this->database->atcRmf1Mode || this->database->atcRmf2Mode || this->database->atcRmrMode)
    {
        ui->lblRunningMode->setText(QString("RM模式"));
    }
    else if (this->database->atcPmMode)
    {
        ui->lblRunningMode->setText(QString("ATP模式"));
    }
    else if (this->database->atcAmMode || this->database->atcAtbMode)
    {
        ui->lblRunningMode->setText(QString("ATO模式"));
    }
    else if ((this->database->ATCCutOffA1 && this->database->hmiPosition == 1)
                || (this->database->ATCCutOffA2 && this->database->hmiPosition == 2))
    {
        ui->lblRunningMode->setText(QString("人工模式"));
    }
    else if ((this->database->washingModeA1 && this->database->hmiPosition == 1)
                || (this->database->washingModeA2 && this->database->hmiPosition == 2))
    {
        ui->lblRunningMode->setText(QString("洗车模式"));
    }
    else
    {
        ui->lblRunningMode->setText(QString(""));
    }
}

void Header::setStation()
{
//    QStringList stations;

//    if (this->database->atcCurrentStation < stations.size())
//    {
//        ui->lblCurrentStation->setText(QString("当前站：") + stations.at(this->database->atcCurrentStation - 1));
//    }
//    else
    {
        ui->lblCurrentStation->setText(QString("当前站：") + QString("--"));
    }

//    if (this->database->atcNextStation < stations.size())
//    {
//        ui->lblNextStation->setText(QString("下一站：") + stations.at(this->database->atcNextStation - 1));
//    }
//    else
    {
        ui->lblNextStation->setText(QString("下一站：") + QString("--"));
    }
}

#include "firealarm.h"
#include "ui_firealarm.h"
#include <QDebug>
#include "firealarmreset.h"
#include <QTimer>

#define _FIRE_NORMAL ("border-image: url(:/images/fireAlarmOk.png);")
#define _FIRE_ALARM ("border-image: url(:/images/fireAlarmWarning.png);")
#define _FIRE_ERROR ("border-image: url(:/images/fireAlarmError.png);")
#define _FIRE_OFFLINE ("border-image: url(:/images/fireAlarmOffLine.png);")

FireAlarm::FireAlarm(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::FireAlarm)
{
    ui->setupUi(this);

    this->fireAlarmReset = new FireAlarmReset(this);
    this->fireAlarmReset->setGeometry(300, 250, this->fireAlarmReset->width(), this->fireAlarmReset->height());
    connect(fireAlarmReset, SIGNAL(reset(bool)), this, SLOT(reset(bool)));
    this->fireAlarmReset->hide();

    this->timer = new QTimer();
    this->timer->stop();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetFlag()));
}

FireAlarm::~FireAlarm()
{
    delete ui;
}

void FireAlarm::updatePage()
{
    _NO_DATABASE_WARNING

    // A1
    if (false == this->database->fau1Online)
    {
        ui->lblfireAlarmA1->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1MasterErrorA1 && this->database->fau2MasterErrorA1)
    {
        ui->lblfireAlarmA1->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmA1)
    {
        ui->lblfireAlarmA1->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmA1->setStyleSheet(_FIRE_NORMAL);
    }

    // A2
    if (false == this->database->fau2Online)
    {
        ui->lblfireAlarmA2->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1MasterErrorA2 && this->database->fau2MasterErrorA2)
    {
        ui->lblfireAlarmA2->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmA2)
    {
        ui->lblfireAlarmA2->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmA2->setStyleSheet(_FIRE_NORMAL);
    }

    // B1
    if (false == this->database->fau1Online && false == this->database->fau2Online)
    {
        ui->lblfireAlarmB1->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1SlaveErrorB1 && this->database->fau2SlaveErrorB1)
    {
        ui->lblfireAlarmB1->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmB1)
    {
        ui->lblfireAlarmB1->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmB1->setStyleSheet(_FIRE_NORMAL);
    }

    // C1
    if (false == this->database->fau1Online && false == this->database->fau2Online)
    {
        ui->lblfireAlarmC1->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1SlaveErrorC1 && this->database->fau2SlaveErrorC1)
    {
        ui->lblfireAlarmC1->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmC1)
    {
        ui->lblfireAlarmC1->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmC1->setStyleSheet(_FIRE_NORMAL);
    }

    // D1
    if (false == this->database->fau1Online && false == this->database->fau2Online)
    {
        ui->lblfireAlarmD1->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1SlaveErrorD1 && this->database->fau2SlaveErrorD1)
    {
        ui->lblfireAlarmD1->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmD1)
    {
        ui->lblfireAlarmD1->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmD1->setStyleSheet(_FIRE_NORMAL);
    }

    // D2
    if (false == this->database->fau1Online && false == this->database->fau2Online)
    {
        ui->lblfireAlarmD2->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1SlaveErrorD2 && this->database->fau2SlaveErrorD2)
    {
        ui->lblfireAlarmD2->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmD2)
    {
        ui->lblfireAlarmD2->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmD2->setStyleSheet(_FIRE_NORMAL);
    }

    // C2
    if (false == this->database->fau1Online && false == this->database->fau2Online)
    {
        ui->lblfireAlarmC2->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1SlaveErrorC2 && this->database->fau2SlaveErrorC2)
    {
        ui->lblfireAlarmC2->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmC2)
    {
        ui->lblfireAlarmC2->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmC2->setStyleSheet(_FIRE_NORMAL);
    }

    // B2
    if (false == this->database->fau1Online && false == this->database->fau2Online)
    {
        ui->lblfireAlarmB2->setStyleSheet(_FIRE_OFFLINE);
    }
    else if (this->database->fau1SlaveErrorB2 && this->database->fau2SlaveErrorB2)
    {
        ui->lblfireAlarmB2->setStyleSheet(_FIRE_ERROR);
    }
    else if (this->database->hmiFireAlarmB2)
    {
        ui->lblfireAlarmB2->setStyleSheet(_FIRE_ALARM);
    }
    else
    {
        ui->lblfireAlarmB2->setStyleSheet(_FIRE_NORMAL);
    }
}

void FireAlarm::showEvent(QShowEvent *)
{
    ui->lblVehicleNumberA1->setText(QString("A") + this->database->vehicleNumberA1);
    ui->lblVehicleNumberB1->setText(QString("B") + this->database->vehicleNumberB1);
    ui->lblVehicleNumberC1->setText(QString("C") + this->database->vehicleNumberC1);
    ui->lblVehicleNumberD1->setText(QString("D") + this->database->vehicleNumberD1);
    ui->lblVehicleNumberD2->setText(QString("D") + this->database->vehicleNumberD2);
    ui->lblVehicleNumberC2->setText(QString("C") + this->database->vehicleNumberC2);
    ui->lblVehicleNumberB2->setText(QString("B") + this->database->vehicleNumberB2);
    ui->lblVehicleNumberA2->setText(QString("A") + this->database->vehicleNumberA2);

    ui->lblTip->hide();
}

void FireAlarm::on_btnSetting_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        ui->lblTip->show();

        return;
    }

    ui->lblTip->hide();
    this->fireAlarmReset->show();
}

void FireAlarm::reset(bool reset)
{
    if (reset)
    {
        this->database->hmiFireAlarmResetCommand = true;
        this->database->hmiSecurityCode = 0xAA;
        this->timer->start(5000);

        _LOG << "reset the fire alarm";
    }
    else
    {
        this->database->hmiFireAlarmResetCommand = false;
        this->database->hmiSecurityCode = 0x55;
        this->timer->stop();
    }
}

void FireAlarm::resetFlag()
{
    this->timer->stop();
    this->database->hmiFireAlarmResetCommand = false;
    this->database->hmiSecurityCode = 0x55;
}

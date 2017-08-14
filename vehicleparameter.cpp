#include "vehicleparameter.h"
#include "ui_vehicleparameter.h"
#include <QLabel>
#include <QPushButton>
#include <QDebug>
#include "vehiclelogo.h"

#define POWER_PLUG_ACTIVE ("border: 0px; border-image: url(:/images/garagePowerRun.png);")
#define POWER_PLUG_UNACTIVE ("border: 0px; border-image: url(:/images/garagePowerStop.png);")

VehicleParameter::VehicleParameter(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleParameter)
{
    ui->setupUi(this);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(150, 12, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();
}

VehicleParameter::~VehicleParameter()
{
    delete ui;
}

void VehicleParameter::updatePage()
{
    _NO_DATABASE_WARNING

    // is there a key or not
    this->vehicleLogo->setLeftHeadState(this->database->cabPossessionDI1A1 || this->database->cabPossessionDI2A1);
    this->vehicleLogo->setRightHeadState(this->database->cabPossessionDI1A2 || this->database->cabPossessionDI2A2);

    // it is a special signal that use other side signal
    this->setPowerPlugState(ui->lblPowerPlugB1, this->database->otherSidePowerAccessB2);
    this->setPowerPlugState(ui->lblPowerPlugB2, this->database->otherSidePowerAccessB1);

    // the siv middle voltage
    ui->lblSivVoltage1->setText(QString::number(this->database->sivGeneratrixUvVoltageA1) + QString("V"));
    ui->lblSivVoltage3->setText(QString::number(this->database->sivGeneratrixUvVoltageC1) + QString("V"));
    ui->lblSivVoltage6->setText(QString::number(this->database->sivGeneratrixUvVoltageC2) + QString("V"));
    ui->lblSivVoltage8->setText(QString::number(this->database->sivGeneratrixUvVoltageA2) + QString("V"));

    // the dcu middle voltage
    ui->lblMiddleVoltage2->setText(QString::number(this->database->middleVoltageB1) + QString("V"));
    ui->lblMiddleVoltage3->setText(QString::number(this->database->middleVoltageC1) + QString("V"));
    ui->lblMiddleVoltage4->setText(QString::number(this->database->middleVoltageD1) + QString("V"));
    ui->lblMiddleVoltage5->setText(QString::number(this->database->middleVoltageD2) + QString("V"));
    ui->lblMiddleVoltage6->setText(QString::number(this->database->middleVoltageC2) + QString("V"));
    ui->lblMiddleVoltage7->setText(QString::number(this->database->middleVoltageB2) + QString("V"));

    // the dcu middle current
    ui->lblMiddleCurrent2->setText(QString::number(this->database->middleCurrentB1) + QString("A"));
    ui->lblMiddleCurrent3->setText(QString::number(this->database->middleCurrentC1) + QString("A"));
    ui->lblMiddleCurrent4->setText(QString::number(this->database->middleCurrentD1) + QString("A"));
    ui->lblMiddleCurrent5->setText(QString::number(this->database->middleCurrentD2) + QString("A"));
    ui->lblMiddleCurrent6->setText(QString::number(this->database->middleCurrentC2) + QString("A"));
    ui->lblMiddleCurrent7->setText(QString::number(this->database->middleCurrentB2) + QString("A"));

    // the dcu traction and brake power and total value
    if (this->database->ccuVehicleTraction)
    {
        ui->lblBrakePower2->setText(QString::number(this->database->dcuRealTractionPowerB1 / 1000) + QString("KN"));
        ui->lblBrakePower3->setText(QString::number(this->database->dcuRealTractionPowerC1 / 1000) + QString("KN"));
        ui->lblBrakePower4->setText(QString::number(this->database->dcuRealTractionPowerD1 / 1000) + QString("KN"));
        ui->lblBrakePower5->setText(QString::number(this->database->dcuRealTractionPowerD2 / 1000) + QString("KN"));
        ui->lblBrakePower6->setText(QString::number(this->database->dcuRealTractionPowerC2 / 1000) + QString("KN"));
        ui->lblBrakePower7->setText(QString::number(this->database->dcuRealTractionPowerB2 / 1000) + QString("KN"));

        unsigned long int totalPower = this->database->dcuRealTractionPowerB1 / 1000 + this->database->dcuRealTractionPowerC1 / 1000
                                            + this->database->dcuRealTractionPowerD1 / 1000 + this->database->dcuRealTractionPowerD2 / 1000
                                            + this->database->dcuRealTractionPowerC2 / 1000 + this->database->dcuRealTractionPowerB2 / 1000;
        ui->lblTotalPower->setText(QString::number(totalPower) + QString("KN"));
    }
    else if (this->database->ccuVehicleBrake)
    {
        ui->lblBrakePower2->setText(QString::number(this->database->dcuRealBrakePowerB1 / 1000) + QString("KN"));
        ui->lblBrakePower3->setText(QString::number(this->database->dcuRealBrakePowerC1 / 1000) + QString("KN"));
        ui->lblBrakePower4->setText(QString::number(this->database->dcuRealBrakePowerD1 / 1000) + QString("KN"));
        ui->lblBrakePower5->setText(QString::number(this->database->dcuRealBrakePowerD2 / 1000) + QString("KN"));
        ui->lblBrakePower6->setText(QString::number(this->database->dcuRealBrakePowerC2 / 1000) + QString("KN"));
        ui->lblBrakePower7->setText(QString::number(this->database->dcuRealBrakePowerB2 / 1000) + QString("KN"));

        unsigned long int totalPower = this->database->dcuRealBrakePowerB1 / 1000 + this->database->dcuRealBrakePowerC1 / 1000
                                            + this->database->dcuRealBrakePowerD1 / 1000 + this->database->dcuRealBrakePowerD2 / 1000
                                            + this->database->dcuRealBrakePowerC2 / 1000 + this->database->dcuRealBrakePowerB2 / 1000;
        ui->lblTotalPower->setText(QString::number(totalPower) + QString("KN"));
    }
    else
    {
        ui->lblBrakePower2->setText(QString("0KN"));
        ui->lblBrakePower3->setText(QString("0KN"));
        ui->lblBrakePower4->setText(QString("0KN"));
        ui->lblBrakePower5->setText(QString("0KN"));
        ui->lblBrakePower6->setText(QString("0KN"));
        ui->lblBrakePower7->setText(QString("0KN"));

        ui->lblTotalPower->setText(QString("0KN"));
    }

    // the bcu total pressure
    QString totalPressure;

    ui->lblTotalPressureA1->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureA1));
    // ui->lblTotalPressureB1->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureB1));
    ui->lblTotalPressureC1->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureC1));
    ui->lblTotalPressureD1->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureD1));
    ui->lblTotalPressureD2->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureD2));
    ui->lblTotalPressureC2->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureC2));
    // ui->lblTotalPressureB2->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureB2));
    ui->lblTotalPressureA2->setText(totalPressure.sprintf("%.1f", this->database->hmiTotalPressureA2));

    // the bcu air spring pressure
    QString airSpringPressure;

    ui->lblSpringPressure1A1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureA1));
    ui->lblSpringPressure2A1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureA1));
    ui->lblSpringPressure1B1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureB1));
    ui->lblSpringPressure2B1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureB1));
    ui->lblSpringPressure1C1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureC1));
    ui->lblSpringPressure2C1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureC1));
    ui->lblSpringPressure1D1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureD1));
    ui->lblSpringPressure2D1->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureD1));
    ui->lblSpringPressure2D2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureD2));
    ui->lblSpringPressure1D2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureD2));
    ui->lblSpringPressure2C2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureC2));
    ui->lblSpringPressure1C2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureC2));
    ui->lblSpringPressure2B2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureB2));
    ui->lblSpringPressure1B2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureB2));
    ui->lblSpringPressure2A2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie2AirSpringPressureA2));
    ui->lblSpringPressure1A2->setText(airSpringPressure.sprintf("%.1f", this->database->hmiBogie1AirSpringPressureA2));

    // the bcu brake cylinder pressure
    QString brakeCylingderPressure;

    ui->lblBrakeCylinderPressure1A1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureA1));
    ui->lblBrakeCylinderPressure2A1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureA1));
    ui->lblBrakeCylinderPressure1B1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureB1));
    ui->lblBrakeCylinderPressure2B1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureB1));
    ui->lblBrakeCylinderPressure1C1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureC1));
    ui->lblBrakeCylinderPressure2C1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureC1));
    ui->lblBrakeCylinderPressure1D1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureD1));
    ui->lblBrakeCylinderPressure2D1->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureD1));
    ui->lblBrakeCylinderPressure2D2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureD2));
    ui->lblBrakeCylinderPressure1D2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureD2));
    ui->lblBrakeCylinderPressure2C2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureC2));
    ui->lblBrakeCylinderPressure1C2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureC2));
    ui->lblBrakeCylinderPressure2B2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureB2));
    ui->lblBrakeCylinderPressure1B2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureB2));
    ui->lblBrakeCylinderPressure2A2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie2BrakeCylinderPressureA2));
    ui->lblBrakeCylinderPressure1A2->setText(brakeCylingderPressure.sprintf("%.1f", this->database->hmiBogie1BrakeCylinderPressureA2));

    // the bcu load
    QString load;

    ui->lblLoadA1->setText(load.sprintf("%dt", this->database->hmiBogie1LoadA1 + this->database->hmiBogie2LoadA1));
    ui->lblLoadB1->setText(load.sprintf("%dt", this->database->hmiBogie1LoadB1 + this->database->hmiBogie2LoadB1));
    ui->lblLoadC1->setText(load.sprintf("%dt", this->database->hmiBogie1LoadC1 + this->database->hmiBogie2LoadC1));
    ui->lblLoadD1->setText(load.sprintf("%dt", this->database->hmiBogie1LoadD1 + this->database->hmiBogie2LoadD1));
    ui->lblLoadD2->setText(load.sprintf("%dt", this->database->hmiBogie2LoadD2 + this->database->hmiBogie1LoadD2));
    ui->lblLoadC2->setText(load.sprintf("%dt", this->database->hmiBogie2LoadC2 + this->database->hmiBogie1LoadC2));
    ui->lblLoadB2->setText(load.sprintf("%dt", this->database->hmiBogie2LoadB2 + this->database->hmiBogie1LoadB2));
    ui->lblLoadA2->setText(load.sprintf("%dt", this->database->hmiBogie2LoadA2 + this->database->hmiBogie1LoadA2));

    unsigned long int totalLoad = this->database->hmiBogie1LoadA1 + this->database->hmiBogie2LoadA1 + this->database->hmiBogie1LoadB1 +
                                  this->database->hmiBogie2LoadB1 + this->database->hmiBogie1LoadC1 + this->database->hmiBogie2LoadC1 +
                                  this->database->hmiBogie1LoadD1 + this->database->hmiBogie2LoadD1 + this->database->hmiBogie2LoadD2 +
                                  this->database->hmiBogie1LoadD2 + this->database->hmiBogie2LoadC2 + this->database->hmiBogie1LoadC2 +
                                  this->database->hmiBogie2LoadB2 + this->database->hmiBogie1LoadB2 + this->database->hmiBogie2LoadA2 +
                                  this->database->hmiBogie1LoadA2;

    ui->lblTotalLoad->setText(load.sprintf("%ldt", totalLoad));

    // the dcdc temperature
    QString temperature;

    ui->lblBatteryTemperatureA1->setText(temperature.sprintf("%d", this->database->dcdcBatteryTemperatureA1) + QString("℃"));
    ui->lblBatteryTemperatureA2->setText(temperature.sprintf("%d", this->database->dcdcBatteryTemperatureA2) + QString("℃"));

    // the dcdc battery input current
    ui->lblBarreryCurrentA1->setText(QString::number(this->database->dcdcChargeCurrentA1) + QString("A"));
    ui->lblBatteryCurrentA2->setText(QString::number(this->database->dcdcChargeCurrentA2) + QString("A"));
}

void VehicleParameter::showEvent(QShowEvent *)
{
    this->vehicleLogo->setA1Number(QString("A") + this->database->vehicleNumberA1);
    this->vehicleLogo->setB1Number(QString("B") + this->database->vehicleNumberB1);
    this->vehicleLogo->setC1Number(QString("C") + this->database->vehicleNumberC1);
    this->vehicleLogo->setD1Number(QString("D") + this->database->vehicleNumberD1);
    this->vehicleLogo->setD2Number(QString("D") + this->database->vehicleNumberD2);
    this->vehicleLogo->setC2Number(QString("C") + this->database->vehicleNumberC2);
    this->vehicleLogo->setB2Number(QString("B") + this->database->vehicleNumberB2);
    this->vehicleLogo->setA2Number(QString("A") + this->database->vehicleNumberA2);
}

void VehicleParameter::setPowerPlugState(QLabel *label, bool state)
{
    if (state)
    {
        label->setStyleSheet(POWER_PLUG_ACTIVE);
    }
    else
    {
        label->setStyleSheet(POWER_PLUG_UNACTIVE);
    }
}

#include "airconditioner.h"
#include "ui_airconditioner.h"
#include "global.h"
#include <QPalette>
#include "vehiclelogo.h"
#include <QDebug>
#include <QTimer>

enum vehicle_flag
{
    uA1, uB1, uC1, uD1, uD2, uC2, uB2, uA2, uAll
};

enum setting_mode
{
    uTemperatureMode, uWorkMode
};

enum airconditioner_mode
{
    uAutoCoolMode, uManualCoolMode, uExitPreCoolMode, uEmergencyMode, uAutoMode, uFireMode, uStopMode
};

#define _AIR_CONDITIONER_OFFLINE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")
#define _AIR_CONDITIONER_MAJOR_ERROR ("border: 0px; border-image: url(:/images/airConditionerMajorError.png);")
#define _AIR_CONDITIONER_MINOR_ERROR ("border: 0px; border-image: url(:/images/airConditionerMinorError.png);")
#define _AIR_CONDITIONER_EMERGENCY ("border: 0px; border-image: url(:/images/airConditionerVentilate.png);")
#define _AIR_CONDITIONER_STOP ("border: 0px; border-image: url(:/images/airConditionerStop.png);")
#define _AIR_CONDITIONER_COOL ("border: 0px; border-image: url(:/images/airConditionerCool.png);")
#define _AIR_CONDITIONER_RUNNING ("border: 0px; border-image: url(:/images/airConditionerRun.png);")
#define _AIR_CONDITIONER_UNKNOWN_STATE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")

#define _COMPRESSOR_OFFLINE ("background-color: yellow; color: black; font: 16px, \"微软雅黑\";")
#define _COMPRESSOR_ERROR ("background-color: red; color: black; font: 16px, \"微软雅黑\";")
#define _COMPRESSOR_RUN ("background-color: rgb(0, 255, 0); color: black; font: 16px, \"微软雅黑\";")
#define _COMPRESSOR_STOP ("background-color: gray; color: black; font: 16px, \"微软雅黑\";")

#define _SET_BUTTON_DOWN ("font: 18px, \"微软雅黑\"; color: black; background-color: blue; border:1px solid white;")
#define _SET_BUTTON_UP ("font: 18px, \"微软雅黑\"; color: white; background-color: black; border:1px solid white;")

#define _AIR_CONDITIIONER_START 01
#define _AIR_CONDITIIONER_INVALID 00
#define _AIR_CONDITIIONER_VENT 02
#define _AIR_CONDITIIONER_MANUAL_COOL 03
#define _AIR_CONDITIIONER_AUTO_COOL 05
#define _AIR_CONDITIIONER_EMERGENCY 13
#define _AIR_CONDITIIONER_AUTO 15

AirConditioner::AirConditioner(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::AirConditioner)
{
    ui->setupUi(this);

    this->on_btnTemperatureSet_clicked();

    this->temperature = 23;

    connect(ui->btnTemperatureDown, SIGNAL(clicked()), this, SLOT(temperatureSet()));
    connect(ui->btnTemperatureUp, SIGNAL(clicked()), this, SLOT(temperatureSet()));

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(125, 12, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();

    this->timer = new QTimer();
    this->timer->stop();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetFlag()));

    this->selectedVehicle = uA1;

    // initial signals which would be sent
    this->database->hmiTemperatureSetFlagCommandA1 = false;
    this->database->hmiTemperatureSetFlagCommandB1 = false;
    this->database->hmiTemperatureSetFlagCommandC1 = false;
    this->database->hmiTemperatureSetFlagCommandD1 = false;
    this->database->hmiTemperatureSetFlagCommandD2 = false;
    this->database->hmiTemperatureSetFlagCommandC2 = false;
    this->database->hmiTemperatureSetFlagCommandB2 = false;
    this->database->hmiTemperatureSetFlagCommandA2 = false;

    this->database->hmiTemperatureCommandA1 = 18;
    this->database->hmiTemperatureCommandB1 = 18;
    this->database->hmiTemperatureCommandC1 = 18;
    this->database->hmiTemperatureCommandD1 = 18;
    this->database->hmiTemperatureCommandD2 = 18;
    this->database->hmiTemperatureCommandC2 = 18;
    this->database->hmiTemperatureCommandB2 = 18;
    this->database->hmiTemperatureCommandA2 = 18;

    this->database->hmiAirConditionerStopCommandA1 = true;
    this->database->hmiAirConditionerStopCommandB1 = true;
    this->database->hmiAirConditionerStopCommandC1 = true;
    this->database->hmiAirConditionerStopCommandD2 = true;
    this->database->hmiAirConditionerStopCommandC2 = true;
    this->database->hmiAirConditionerStopCommandB2 = true;
    this->database->hmiAirConditionerStopCommandA2 = true;

    this->database->hmiAirConditonerStartCommandA1 = false;
    this->database->hmiAirConditonerStartCommandB1 = false;
    this->database->hmiAirConditonerStartCommandC1 = false;
    this->database->hmiAirConditonerStartCommandD1 = false;
    this->database->hmiAirConditonerStartCommandD2 = false;
    this->database->hmiAirConditonerStartCommandC2 = false;
    this->database->hmiAirConditonerStartCommandB2 = false;
    this->database->hmiAirConditonerStartCommandA2 = false;

    this->database->hmiVentilationCommandA1 = false;
    this->database->hmiVentilationCommandB1 = false;
    this->database->hmiVentilationCommandC1 = false;
    this->database->hmiVentilationCommandD1 = false;
    this->database->hmiVentilationCommandD2 = false;
    this->database->hmiVentilationCommandC2 = false;
    this->database->hmiVentilationCommandB2 = false;
    this->database->hmiVentilationCommandA2 = false;

    this->database->hmiManualCoolCommandA1 = false;
    this->database->hmiManualCoolCommandB1 = false;
    this->database->hmiManualCoolCommandC1 = false;
    this->database->hmiManualCoolCommandD1 = false;
    this->database->hmiManualCoolCommandD2 = false;
    this->database->hmiManualCoolCommandC2 = false;
    this->database->hmiManualCoolCommandB2 = false;
    this->database->hmiManualCoolCommandA2 = false;

    this->database->hmiAutoCoolCommandA1 = false;
    this->database->hmiAutoCoolCommandB1 = false;
    this->database->hmiAutoCoolCommandC1 = false;
    this->database->hmiAutoCoolCommandD1 = false;
    this->database->hmiAutoCoolCommandD2 = false;
    this->database->hmiAutoCoolCommandC2 = false;
    this->database->hmiAutoCoolCommandB2 = false;
    this->database->hmiAutoCoolCommandA2 = false;

    this->database->hmiExitPreCoolCommandA1 = false;
    this->database->hmiExitPreCoolCommandB1 = false;
    this->database->hmiExitPreCoolCommandC1 = false;
    this->database->hmiExitPreCoolCommandD1 = false;
    this->database->hmiExitPreCoolCommandD2 = false;
    this->database->hmiExitPreCoolCommandC2 = false;
    this->database->hmiExitPreCoolCommandB2 = false;
    this->database->hmiExitPreCoolCommandA2 = false;

    this->database->hmiEmergencyCommandA1 = false;
    this->database->hmiEmergencyCommandB1 = false;
    this->database->hmiEmergencyCommandC1 = false;
    this->database->hmiEmergencyCommandD1 = false;
    this->database->hmiEmergencyCommandD2 = false;
    this->database->hmiEmergencyCommandC2 = false;
    this->database->hmiEmergencyCommandB2 = false;
    this->database->hmiEmergencyCommandA2 = false;

    this->database->hmiAutoCommandA1 = false;
    this->database->hmiAutoCommandB1 = false;
    this->database->hmiAutoCommandC1 = false;
    this->database->hmiAutoCommandD1 = false;
    this->database->hmiAutoCommandD2 = false;
    this->database->hmiAutoCommandC2 = false;
    this->database->hmiAutoCommandB2 = false;
    this->database->hmiAutoCommandA2 = false;

    this->database->hmiFireModeCommandA1 = false;
    this->database->hmiFireModeCommandB1 = false;
    this->database->hmiFireModeCommandC1 = false;
    this->database->hmiFireModeCommandD1 = false;
    this->database->hmiFireModeCommandD2 = false;
    this->database->hmiFireModeCommandC2 = false;
    this->database->hmiFireModeCommandB2 = false;
    this->database->hmiFireModeCommandA2 = false;

    this->database->hmiTemperatureSetFlagCommandA1 = false;
    this->database->hmiTemperatureSetFlagCommandB1 = false;
    this->database->hmiTemperatureSetFlagCommandC1 = false;
    this->database->hmiTemperatureSetFlagCommandD1 = false;
    this->database->hmiTemperatureSetFlagCommandD2 = false;
    this->database->hmiTemperatureSetFlagCommandC2 = false;
    this->database->hmiTemperatureSetFlagCommandB2 = false;
    this->database->hmiTemperatureSetFlagCommandA2 = false;

    this->settingMode = uTemperatureMode;
}

AirConditioner::~AirConditioner()
{
    delete ui;
}

void AirConditioner::updatePage()
{
    _NO_DATABASE_WARNING

    // is there a key or not
    this->vehicleLogo->setLeftHeadState(this->database->cabPossessionDI1A1 || this->database->cabPossessionDI2A1);
    this->vehicleLogo->setRightHeadState(this->database->cabPossessionDI1A2 || this->database->cabPossessionDI2A2);

    // the temperature
    ui->lblIndoorTemperatureA1->setText(QString::number(this->database->acuIndoorTemperatureA1) + QString("℃"));
    ui->lblIndoorTemperatureB1->setText(QString::number(this->database->acuIndoorTemperatureB1) + QString("℃"));
    ui->lblIndoorTemperatureC1->setText(QString::number(this->database->acuIndoorTemperatureC1) + QString("℃"));
    ui->lblIndoorTemperatureD1->setText(QString::number(this->database->acuIndoorTemperatureD1) + QString("℃"));
    ui->lblIndoorTemperatureD2->setText(QString::number(this->database->acuIndoorTemperatureD2) + QString("℃"));
    ui->lblIndoorTemperatureC2->setText(QString::number(this->database->acuIndoorTemperatureC2) + QString("℃"));
    ui->lblIndoorTemperatureB2->setText(QString::number(this->database->acuIndoorTemperatureB2) + QString("℃"));
    ui->lblIndoorTemperatureA2->setText(QString::number(this->database->acuIndoorTemperatureA2) + QString("℃"));

    ui->lblOutdoorTemperatureA1->setText(QString::number(this->database->acuOutdoorTemperatureA1) + QString("℃"));
    ui->lblOutdoorTemperatureB1->setText(QString::number(this->database->acuOutdoorTemperatureB1) + QString("℃"));
    ui->lblOutdoorTemperatureC1->setText(QString::number(this->database->acuOutdoorTemperatureC1) + QString("℃"));
    ui->lblOutdoorTemperatureD1->setText(QString::number(this->database->acuOutdoorTemperatureD1) + QString("℃"));
    ui->lblOutdoorTemperatureD2->setText(QString::number(this->database->acuOutdoorTemperatureD2) + QString("℃"));
    ui->lblOutdoorTemperatureC2->setText(QString::number(this->database->acuOutdoorTemperatureC2) + QString("℃"));
    ui->lblOutdoorTemperatureB2->setText(QString::number(this->database->acuOutdoorTemperatureB2) + QString("℃"));
    ui->lblOutdoorTemperatureA2->setText(QString::number(this->database->acuOutdoorTemperatureA2) + QString("℃"));

    ui->lblTargetTemperatureA1->setText(QString::number(this->database->acuTargetTemperatureA1) + QString("℃"));
    ui->lblTargetTemperatureB1->setText(QString::number(this->database->acuTargetTemperatureB1) + QString("℃"));
    ui->lblTargetTemperatureC1->setText(QString::number(this->database->acuTargetTemperatureC1) + QString("℃"));
    ui->lblTargetTemperatureD1->setText(QString::number(this->database->acuTargetTemperatureD1) + QString("℃"));
    ui->lblTargetTemperatureD2->setText(QString::number(this->database->acuTargetTemperatureD2) + QString("℃"));
    ui->lblTargetTemperatureC2->setText(QString::number(this->database->acuTargetTemperatureC2) + QString("℃"));
    ui->lblTargetTemperatureB2->setText(QString::number(this->database->acuTargetTemperatureB2) + QString("℃"));
    ui->lblTargetTemperatureA2->setText(QString::number(this->database->acuTargetTemperatureA2) + QString("℃"));

    // the air conditioner state
    QList<bool> airConditioner;

    airConditioner.clear();
    airConditioner << this->database->hvac1Online << this->database->acuMajorErrorA1 << this->database->acuMinorErrorA1
                   << (this->database->acuEmergencyA1 || this->database->acuFireModeA1) << this->database->acuStopA1
                   << (this->database->acuAutoCoolA1 || this->database->acuManualCoolA1 || this->database->acuPreCoolA1 || this->database->acuAutoA1)
                   << (this->database->acuVentilateA1);
    this->setAirConditonerState(ui->lblAirconditionerA1, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac2Online << this->database->acuMajorErrorB1 << this->database->acuMinorErrorB1
                   << (this->database->acuEmergencyB1 || this->database->acuFireModeB1) << this->database->acuStopB1
                   << (this->database->acuAutoCoolB1 || this->database->acuManualCoolB1 || this->database->acuPreCoolB1 || this->database->acuAutoB1)
                   << (this->database->acuVentilateB1);
    this->setAirConditonerState(ui->lblAirconditionerB1, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac3Online << this->database->acuMajorErrorC1 << this->database->acuMinorErrorC1
                   << (this->database->acuEmergencyC1 || this->database->acuFireModeC1) << this->database->acuStopC1
                   << (this->database->acuAutoCoolC1 || this->database->acuManualCoolC1 || this->database->acuPreCoolC1 || this->database->acuAutoC1)
                   << (this->database->acuVentilateC1);
    this->setAirConditonerState(ui->lblAirconditionerC1, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac4Online << this->database->acuMajorErrorD1 << this->database->acuMinorErrorD1
                   << (this->database->acuEmergencyD1 || this->database->acuFireModeD1) << this->database->acuStopD1
                   << (this->database->acuAutoCoolD1 || this->database->acuManualCoolD1 || this->database->acuPreCoolD1 || this->database->acuAutoD1)
                   << (this->database->acuVentilateD1);
    this->setAirConditonerState(ui->lblAirconditionerD1, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac5Online << this->database->acuMajorErrorD2 << this->database->acuMinorErrorD2
                   << (this->database->acuEmergencyD2 || this->database->acuFireModeD2) << this->database->acuStopD2
                   << (this->database->acuAutoCoolD2 || this->database->acuManualCoolD2 || this->database->acuPreCoolD2 || this->database->acuAutoD2)
                   << (this->database->acuVentilateD2);
    this->setAirConditonerState(ui->lblAirconditionerD2, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac6Online << this->database->acuMajorErrorC2 << this->database->acuMinorErrorC2
                   << (this->database->acuEmergencyC2 || this->database->acuFireModeC2) << this->database->acuStopC2
                   << (this->database->acuAutoCoolC2 || this->database->acuManualCoolC2 || this->database->acuPreCoolC2 || this->database->acuAutoC2)
                   << (this->database->acuVentilateC2);
    this->setAirConditonerState(ui->lblAirconditionerC2, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac7Online << this->database->acuMajorErrorB2 << this->database->acuMinorErrorB2
                   << (this->database->acuEmergencyB2 || this->database->acuFireModeB2) << this->database->acuStopB2
                   << (this->database->acuAutoCoolB2 || this->database->acuManualCoolB2 || this->database->acuPreCoolB2 || this->database->acuAutoB2)
                   << (this->database->acuVentilateB2);
    this->setAirConditonerState(ui->lblAirconditionerB2, airConditioner);

    airConditioner.clear();
    airConditioner << this->database->hvac8Online << this->database->acuMajorErrorA2 << this->database->acuMinorErrorA2
                   << (this->database->acuEmergencyA2 || this->database->acuFireModeA2) << this->database->acuStopA2
                   << (this->database->acuAutoCoolA2 || this->database->acuManualCoolA2 || this->database->acuPreCoolA2 || this->database->acuAutoA2)
                   << (this->database->acuVentilateA2);
    this->setAirConditonerState(ui->lblAirconditionerA2, airConditioner);

    QList<bool> compressor;

    // A1
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorA1 || this->database->acuSet1Compressor1OverLoadA1 ||
                   this->database->acuSet1Compressor1HighVoltageErrorA1 || this->database->acuSet1Compressor1LowVoltageErrorA1)
               << this->database->acuSet1Compressor1RunA1;
    this->setCompressorState(ui->lblCompressor1A1, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorA1 || this->database->acuSet1Compressor2OverLoadA1 ||
                   this->database->acuSet1Compressor2HighVoltageErrorA1 || this->database->acuSet1Compressor2LowVoltageErrorA1)
               << this->database->acuSet1Compressor2RunA1;
    this->setCompressorState(ui->lblCompressor2A1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorA1 || this->database->acuSet2Compressor1OverLoadA1 ||
                   this->database->acuSet2Compressor1HighVoltageErrorA1 || this->database->acuSet2Compressor1LowVoltageErrorA1)
               << this->database->acuSet2Compressor1RunA1;
    this->setCompressorState(ui->lblCompressor3A1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorA1 || this->database->acuSet2Compressor2OverLoadA1 ||
                   this->database->acuSet2Compressor2HighVoltageErrorA1 || this->database->acuSet2Compressor2LowVoltageErrorA1)
               << this->database->acuSet2Compressor2RunA1;
    this->setCompressorState(ui->lblCompressor4A1, compressor);

    // B1
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorB1 || this->database->acuSet1Compressor1OverLoadB1 ||
                   this->database->acuSet1Compressor1HighVoltageErrorB1 || this->database->acuSet1Compressor1LowVoltageErrorB1)
               << this->database->acuSet1Compressor1RunB1;
    this->setCompressorState(ui->lblCompressor1B1, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorB1 || this->database->acuSet1Compressor2OverLoadB1 ||
                   this->database->acuSet1Compressor2HighVoltageErrorB1 || this->database->acuSet1Compressor2LowVoltageErrorB1)
               << this->database->acuSet1Compressor2RunB1;
    this->setCompressorState(ui->lblCompressor2B1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorB1 || this->database->acuSet2Compressor1OverLoadB1 ||
                   this->database->acuSet2Compressor1HighVoltageErrorB1 || this->database->acuSet2Compressor1LowVoltageErrorB1)
               << this->database->acuSet2Compressor1RunB1;
    this->setCompressorState(ui->lblCompressor3B1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorB1 || this->database->acuSet2Compressor2OverLoadB1 ||
                   this->database->acuSet2Compressor2HighVoltageErrorB1 || this->database->acuSet2Compressor2LowVoltageErrorB1)
               << this->database->acuSet2Compressor2RunB1;
    this->setCompressorState(ui->lblCompressor4B1, compressor);

    // C1
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorC1 || this->database->acuSet1Compressor1OverLoadC1 ||
                   this->database->acuSet1Compressor1HighVoltageErrorC1 || this->database->acuSet1Compressor1LowVoltageErrorC1)
               << this->database->acuSet1Compressor1RunC1;
    this->setCompressorState(ui->lblCompressor1C1, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorC1 || this->database->acuSet1Compressor2OverLoadC1 ||
                   this->database->acuSet1Compressor2HighVoltageErrorC1 || this->database->acuSet1Compressor2LowVoltageErrorC1)
               << this->database->acuSet1Compressor2RunC1;
    this->setCompressorState(ui->lblCompressor2C1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorC1 || this->database->acuSet2Compressor1OverLoadC1 ||
                   this->database->acuSet2Compressor1HighVoltageErrorC1 || this->database->acuSet2Compressor1LowVoltageErrorC1)
               << this->database->acuSet2Compressor1RunC1;
    this->setCompressorState(ui->lblCompressor3C1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorC1 || this->database->acuSet2Compressor2OverLoadC1 ||
                   this->database->acuSet2Compressor2HighVoltageErrorC1 || this->database->acuSet2Compressor2LowVoltageErrorC1)
               << this->database->acuSet2Compressor2RunC1;
    this->setCompressorState(ui->lblCompressor4C1, compressor);

    // D1
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorD1 || this->database->acuSet1Compressor1OverLoadD1 ||
                   this->database->acuSet1Compressor1HighVoltageErrorD1 || this->database->acuSet1Compressor1LowVoltageErrorD1)
               << this->database->acuSet1Compressor1RunD1;
    this->setCompressorState(ui->lblCompressor1D1, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorD1 || this->database->acuSet1Compressor2OverLoadD1 ||
                   this->database->acuSet1Compressor2HighVoltageErrorD1 || this->database->acuSet1Compressor2LowVoltageErrorD1)
               << this->database->acuSet1Compressor2RunD1;
    this->setCompressorState(ui->lblCompressor2D1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorD1 || this->database->acuSet2Compressor1OverLoadD1 ||
                   this->database->acuSet2Compressor1HighVoltageErrorD1 || this->database->acuSet2Compressor1LowVoltageErrorD1)
               << this->database->acuSet2Compressor1RunD1;
    this->setCompressorState(ui->lblCompressor3D1, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorD1 || this->database->acuSet2Compressor2OverLoadD1 ||
                   this->database->acuSet2Compressor2HighVoltageErrorD1 || this->database->acuSet2Compressor2LowVoltageErrorD1)
               << this->database->acuSet2Compressor2RunD1;
    this->setCompressorState(ui->lblCompressor4D1, compressor);

    // D2
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorD2 || this->database->acuSet1Compressor1OverLoadD2 ||
                   this->database->acuSet1Compressor1HighVoltageErrorD2 || this->database->acuSet1Compressor1LowVoltageErrorD2)
               << this->database->acuSet1Compressor1RunD2;
    this->setCompressorState(ui->lblCompressor1D2, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorD2 || this->database->acuSet1Compressor2OverLoadD2 ||
                   this->database->acuSet1Compressor2HighVoltageErrorD2 || this->database->acuSet1Compressor2LowVoltageErrorD2)
               << this->database->acuSet1Compressor2RunD2;
    this->setCompressorState(ui->lblCompressor2D2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorD2 || this->database->acuSet2Compressor1OverLoadD2 ||
                   this->database->acuSet2Compressor1HighVoltageErrorD2 || this->database->acuSet2Compressor1LowVoltageErrorD2)
               << this->database->acuSet2Compressor1RunD2;
    this->setCompressorState(ui->lblCompressor3D2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorD2 || this->database->acuSet2Compressor2OverLoadD2 ||
                   this->database->acuSet2Compressor2HighVoltageErrorD2 || this->database->acuSet2Compressor2LowVoltageErrorD2)
               << this->database->acuSet2Compressor2RunD2;
    this->setCompressorState(ui->lblCompressor4D2, compressor);

    // C2
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorC2 || this->database->acuSet1Compressor1OverLoadC2 ||
                   this->database->acuSet1Compressor1HighVoltageErrorC2 || this->database->acuSet1Compressor1LowVoltageErrorC2)
               << this->database->acuSet1Compressor1RunC2;
    this->setCompressorState(ui->lblCompressor1C2, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorC2 || this->database->acuSet1Compressor2OverLoadC2 ||
                   this->database->acuSet1Compressor2HighVoltageErrorC2 || this->database->acuSet1Compressor2LowVoltageErrorC2)
               << this->database->acuSet1Compressor2RunC2;
    this->setCompressorState(ui->lblCompressor2C2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorC2 || this->database->acuSet2Compressor1OverLoadC2 ||
                   this->database->acuSet2Compressor1HighVoltageErrorC2 || this->database->acuSet2Compressor1LowVoltageErrorC2)
               << this->database->acuSet2Compressor1RunC2;
    this->setCompressorState(ui->lblCompressor3C2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorC2 || this->database->acuSet2Compressor2OverLoadC2 ||
                   this->database->acuSet2Compressor2HighVoltageErrorC2 || this->database->acuSet2Compressor2LowVoltageErrorC2)
               << this->database->acuSet2Compressor2RunC2;
    this->setCompressorState(ui->lblCompressor4C2, compressor);

    // B2
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorB2 || this->database->acuSet1Compressor1OverLoadB2 ||
                   this->database->acuSet1Compressor1HighVoltageErrorB2 || this->database->acuSet1Compressor1LowVoltageErrorB2)
               << this->database->acuSet1Compressor1RunB2;
    this->setCompressorState(ui->lblCompressor1B2, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorB2 || this->database->acuSet1Compressor2OverLoadB2 ||
                   this->database->acuSet1Compressor2HighVoltageErrorB2 || this->database->acuSet1Compressor2LowVoltageErrorB2)
               << this->database->acuSet1Compressor2RunB2;
    this->setCompressorState(ui->lblCompressor2B2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorB2 || this->database->acuSet2Compressor1OverLoadB2 ||
                   this->database->acuSet2Compressor1HighVoltageErrorB2 || this->database->acuSet2Compressor1LowVoltageErrorB2)
               << this->database->acuSet2Compressor1RunB2;
    this->setCompressorState(ui->lblCompressor3B2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorB2 || this->database->acuSet2Compressor2OverLoadB2 ||
                   this->database->acuSet2Compressor2HighVoltageErrorB2 || this->database->acuSet2Compressor2LowVoltageErrorB2)
               << this->database->acuSet2Compressor2RunB2;
    this->setCompressorState(ui->lblCompressor4B2, compressor);

    // A2
    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor1ConverterErrorA2 || this->database->acuSet1Compressor1OverLoadA2 ||
                   this->database->acuSet1Compressor1HighVoltageErrorA2 || this->database->acuSet1Compressor1LowVoltageErrorA2)
               << this->database->acuSet1Compressor1RunA2;
    this->setCompressorState(ui->lblCompressor1A2, compressor);

    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet1Compressor2ConverterErrorA2 || this->database->acuSet1Compressor2OverLoadA2 ||
                   this->database->acuSet1Compressor2HighVoltageErrorA2 || this->database->acuSet1Compressor2LowVoltageErrorA2)
               << this->database->acuSet1Compressor2RunA2;
    this->setCompressorState(ui->lblCompressor2A2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor1ConverterErrorA2 || this->database->acuSet2Compressor1OverLoadA2 ||
                   this->database->acuSet2Compressor1HighVoltageErrorA2 || this->database->acuSet2Compressor1LowVoltageErrorA2)
               << this->database->acuSet2Compressor1RunA2;
    this->setCompressorState(ui->lblCompressor3A2, compressor);


    compressor.clear();
    compressor << this->database->hvac1Online
               << (this->database->acuSet2Compressor2ConverterErrorA2 || this->database->acuSet2Compressor2OverLoadA2 ||
                   this->database->acuSet2Compressor2HighVoltageErrorA2 || this->database->acuSet2Compressor2LowVoltageErrorA2)
               << this->database->acuSet2Compressor2RunA2;
    this->setCompressorState(ui->lblCompressor4A2, compressor);
}

void AirConditioner::on_btnTemperatureSet_clicked()
{
    ui->btnModeSet->setStyleSheet(BUTTON_UP);
    ui->btnTemperatureSet->setStyleSheet(BUTTON_DOWN);

    // hide buttons
    ui->btnAuto->hide();
    ui->btnAutoCool->hide();
    ui->btnManualCool->hide();
    ui->btnExitPreCool->hide();
    ui->btnEmergency->hide();
    ui->btnFireMode->hide();
    ui->btnVentilate->hide();

    // show buttons
    ui->lblSettedTemperature->show();
    ui->btnTemperatureUp->show();
    ui->btnTemperatureDown->show();

    this->settingMode = uTemperatureMode;
}

void AirConditioner::on_btnModeSet_clicked()
{
    ui->btnModeSet->setStyleSheet(BUTTON_DOWN);
    ui->btnTemperatureSet->setStyleSheet(BUTTON_UP);

    // hide buttons
    ui->lblSettedTemperature->hide();
    ui->btnTemperatureUp->hide();
    ui->btnTemperatureDown->hide();

    // show buttons
    ui->btnAuto->show();
    ui->btnAutoCool->show();
    ui->btnManualCool->show();
    ui->btnExitPreCool->show();
    ui->btnEmergency->show();
    ui->btnFireMode->show();
    ui->btnVentilate->show();

    this->settingMode = uWorkMode;
}

void AirConditioner::temperatureSet()
{
    if (this->sender() == ui->btnTemperatureUp)
    {
        if (this->temperature < 27)
        {
            this->temperature ++;
            ui->lblSettedTemperature->setText(QString::number(this->temperature));
        }
    }
    else if (sender() == ui->btnTemperatureDown)
    {
        if (this->temperature > 19)
        {
            this->temperature --;
            ui->lblSettedTemperature->setText(QString::number(this->temperature));
        }
    }
}

void AirConditioner::setButtonState(int vehicle)
{
    QList<QPushButton *> buttons;

    buttons.append(ui->btnA001);
    buttons.append(ui->btnB001);
    buttons.append(ui->btnC001);
    buttons.append(ui->btnD001);
    buttons.append(ui->btnD002);
    buttons.append(ui->btnC002);
    buttons.append(ui->btnB002);
    buttons.append(ui->btnA002);
    buttons.append(ui->btnAll);

    if (uAll == vehicle)
    {
        foreach (QPushButton *button, buttons)
        {
            button->setStyleSheet(BUTTON_DOWN);
        }
    }
    else
    {
        for (int i = 0; i < buttons.size(); i ++)
        {
            if (i == vehicle)
            {
                buttons.at(i)->setStyleSheet(BUTTON_DOWN);
            }
            else
            {
                buttons.at(i)->setStyleSheet(BUTTON_UP);
            }
        }
    }
}

void AirConditioner::setModeButtonState(QPushButton *mode)
{
    QList<QPushButton *> buttons;

    buttons << ui->btnAuto << ui->btnAutoCool << ui->btnManualCool
            << ui->btnEmergency << ui->btnVentilate;

    foreach (QPushButton *button, buttons)
    {
        if (mode == button)
        {
            button->setStyleSheet(BUTTON_DOWN);
        }
        else
        {
            button->setStyleSheet(BUTTON_UP);
        }
    }
}

void AirConditioner::showEvent(QShowEvent *)
{
    this->firstShow();

    this->vehicleLogo->setA1Number(QString("A") + this->database->vehicleNumberA1);
    this->vehicleLogo->setB1Number(QString("B") + this->database->vehicleNumberB1);
    this->vehicleLogo->setC1Number(QString("C") + this->database->vehicleNumberC1);
    this->vehicleLogo->setD1Number(QString("D") + this->database->vehicleNumberD1);
    this->vehicleLogo->setD2Number(QString("D") + this->database->vehicleNumberD2);
    this->vehicleLogo->setC2Number(QString("C") + this->database->vehicleNumberC2);
    this->vehicleLogo->setB2Number(QString("B") + this->database->vehicleNumberB2);
    this->vehicleLogo->setA2Number(QString("A") + this->database->vehicleNumberA2);

    this->database->hmiAirConditionerModeA1 = this->database->ccuAirConditionerModeA1;
    this->database->hmiAirConditionerModeB1 = this->database->ccuAirConditionerModeB1;
    this->database->hmiAirConditionerModeC1 = this->database->ccuAirConditionerModeC1;
    this->database->hmiAirConditionerModeD1 = this->database->ccuAirConditionerModeD1;
    this->database->hmiAirConditionerModeD2 = this->database->ccuAirConditionerModeD2;
    this->database->hmiAirConditionerModeC2 = this->database->ccuAirConditionerModeC2;
    this->database->hmiAirConditionerModeB2 = this->database->ccuAirConditionerModeB2;
    this->database->hmiAirConditionerModeA2 = this->database->ccuAirConditionerModeA2;

    this->database->hmiAirConditionerTemperatureA1 = this->database->ccuAirConditionerTemperatureA1;
    this->database->hmiAirConditionerTemperatureB1 = this->database->ccuAirConditionerTemperatureB1;
    this->database->hmiAirConditionerTemperatureC1 = this->database->ccuAirConditionerTemperatureC1;
    this->database->hmiAirConditionerTemperatureD1 = this->database->ccuAirConditionerTemperatureD1;
    this->database->hmiAirConditionerTemperatureD2 = this->database->ccuAirConditionerTemperatureD2;
    this->database->hmiAirConditionerTemperatureC2 = this->database->ccuAirConditionerTemperatureC2;
    this->database->hmiAirConditionerTemperatureB2 = this->database->ccuAirConditionerTemperatureB2;
    this->database->hmiAirConditionerTemperatureA2 = this->database->ccuAirConditionerTemperatureA2;

    if (true == this->database->hmiAirConditionerPreCoolMode)
    {
        ui->btnExitPreCool->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnExitPreCool->setStyleSheet(BUTTON_UP);
    }

    if (true == this->database->hmiAirConditionerFireMode)
    {
        ui->btnFireMode->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnFireMode->setStyleSheet(BUTTON_UP);
    }
}

void AirConditioner::firstShow()
{
    static bool flag = true;

    if (flag)
    {
        this->on_btnAll_clicked();
        this->temperature = this->database->ccuAirConditionerTemperatureA1;
        this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeA1);

        flag = false;
    }
}

void AirConditioner::setAirConditonerState(QLabel *label, QList<bool> &state)
{
    if (state.size() != 7)
    {
        _LOG << "the size of air conditioner state is not 7, please check it";

        return;
    }

    // 0: offline, 1: major error, 2: minor error, 3: emergency, 4: stop, 5: cool, 6: running
    if (false == state.at(0))
    {
        label->setStyleSheet(_AIR_CONDITIONER_OFFLINE);
    }
    else if (state.at(1))
    {
        label->setStyleSheet(_AIR_CONDITIONER_MAJOR_ERROR);
    }
    else if (state.at(2))
    {
        label->setStyleSheet(_AIR_CONDITIONER_MINOR_ERROR);
    }
    else if (state.at(3))
    {
        label->setStyleSheet(_AIR_CONDITIONER_EMERGENCY);
    }
    else if (state.at(4))
    {
        label->setStyleSheet(_AIR_CONDITIONER_STOP);
    }
    else if (state.at(5))
    {
        label->setStyleSheet(_AIR_CONDITIONER_COOL);
    }
    else if (state.at(6))
    {
        label->setStyleSheet(_AIR_CONDITIONER_RUNNING);
    }
    else
    {
        label->setStyleSheet(_AIR_CONDITIONER_UNKNOWN_STATE);
    }
}

void AirConditioner::setCompressorState(QLabel *label, QList<bool> &state)
{
    if (state.size() != 3)
    {
        _LOG << "the size of compressor state is not 3, please check it";

        return;
    }

    if (false == state.at(0))
    {
        label->setStyleSheet(_COMPRESSOR_OFFLINE);
    }
    else if (state.at(1))
    {
        label->setStyleSheet(_COMPRESSOR_ERROR);
    }
    else if (true == state.at(2))
    {
        label->setStyleSheet(_COMPRESSOR_RUN);
    }
    else
    {
        label->setStyleSheet(_COMPRESSOR_STOP);
    }
}

void AirConditioner::resetFlag()
{
    this->database->hmiSetAirConditionerTemperatureCommandA1 = false;
    this->database->hmiSetAirConditionerTemperatureCommandB1 = false;
    this->database->hmiSetAirConditionerTemperatureCommandC1 = false;
    this->database->hmiSetAirConditionerTemperatureCommandD1 = false;
    this->database->hmiSetAirConditionerTemperatureCommandD2 = false;
    this->database->hmiSetAirConditionerTemperatureCommandC2 = false;
    this->database->hmiSetAirConditionerTemperatureCommandB2 = false;
    this->database->hmiSetAirConditionerTemperatureCommandA2 = false;

    this->database->hmiSetAirConditionerModeCommandA1 = false;
    this->database->hmiSetAirConditionerModeCommandB1 = false;
    this->database->hmiSetAirConditionerModeCommandC1 = false;
    this->database->hmiSetAirConditionerModeCommandD1 = false;
    this->database->hmiSetAirConditionerModeCommandD2 = false;
    this->database->hmiSetAirConditionerModeCommandC2 = false;
    this->database->hmiSetAirConditionerModeCommandB2 = false;
    this->database->hmiSetAirConditionerModeCommandA2 = false;

    this->database->hmiSecurityCode = 0x55;

    this->timer->stop();
    ui->btnSetting->setStyleSheet(_SET_BUTTON_UP);
}

void AirConditioner::setAirConditonerMoodeState(unsigned char mode)
{
    if (2 == mode)
    {
        this->setModeButtonState(ui->btnVentilate);
    }
    else if (3 == mode)
    {
        this->setModeButtonState(ui->btnManualCool);
    }
    else if (5 == mode)
    {
        this->setModeButtonState(ui->btnAutoCool);
    }
    else if (0x13 == mode)
    {
        this->setModeButtonState(ui->btnEmergency);
    }
    else if (0x15 == mode)
    {
        this->setModeButtonState(ui->btnAuto);
    }
    else
    {
        this->setModeButtonState(NULL);
    }
}

void AirConditioner::on_btnA001_clicked()
{
    this->selectedVehicle = uA1;

    this->temperature = this->database->ccuAirConditionerTemperatureA1;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uA1);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeA1);
}

void AirConditioner::on_btnB001_clicked()
{
    this->selectedVehicle = uB1;

    this->temperature = this->database->ccuAirConditionerTemperatureB1;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uB1);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeB1);
}

void AirConditioner::on_btnC001_clicked()
{
    this->selectedVehicle = uC1;

    this->temperature = this->database->ccuAirConditionerTemperatureC1;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uC1);

this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeC1);
}

void AirConditioner::on_btnD001_clicked()
{
    this->selectedVehicle = uD1;

    this->temperature = this->database->ccuAirConditionerTemperatureD1;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uD1);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeD1);
}

void AirConditioner::on_btnD002_clicked()
{
    this->selectedVehicle = uD2;

    this->temperature = this->database->ccuAirConditionerTemperatureD2;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uD2);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeD2);
}

void AirConditioner::on_btnC002_clicked()
{
    this->selectedVehicle = uC2;

    this->temperature = this->database->ccuAirConditionerTemperatureC2;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uC2);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeC2);
}

void AirConditioner::on_btnB002_clicked()
{
    this->selectedVehicle = uB2;

    this->temperature = this->database->ccuAirConditionerTemperatureB2;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uB2);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeB2);
}

void AirConditioner::on_btnA002_clicked()
{
    this->selectedVehicle = uA2;

    this->temperature = this->database->ccuAirConditionerTemperatureA2;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uA2);

    this->setAirConditonerMoodeState(this->database->ccuAirConditionerModeA2);
}

void AirConditioner::on_btnAll_clicked()
{
    this->selectedVehicle = uAll;

    this->temperature = this->database->hmiAirConditionerTemperatureA1;
    ui->lblSettedTemperature->setText(QString::number(this->temperature));
    this->setButtonState(uAll);

    // if select all, the temperature of A1 would be shown in the box
    ui->lblSettedTemperature->setText(QString::number(this->database->ccuAirConditionerTemperatureA1));
}

void AirConditioner::on_btnSetting_clicked()
{
    if (uTemperatureMode == this->settingMode)
    {
        switch (this->selectedVehicle)
        {
        case uA1:
            this->database->hmiAirConditionerTemperatureA1 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandA1 = true;
            break;
        case uB1:
            this->database->hmiAirConditionerTemperatureB1 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandB1 = true;
            break;
        case uC1:
            this->database->hmiAirConditionerTemperatureC1 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandC1 = true;
            break;
        case uD1:
            this->database->hmiAirConditionerTemperatureD1 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandD1 = true;
            break;
        case uD2:
            this->database->hmiAirConditionerTemperatureD2 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandD2 = true;
            break;
        case uC2:
            this->database->hmiAirConditionerTemperatureC2 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandC2 = true;
            break;
        case uB2:
            this->database->hmiAirConditionerTemperatureB2 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandB2 = true;
            break;
        case uA2:
            this->database->hmiAirConditionerTemperatureA2 = this->temperature;
            this->database->hmiSetAirConditionerTemperatureCommandA2 = true;
            break;
        case uAll:
            this->database->hmiAirConditionerTemperatureA1 = this->temperature;
            this->database->hmiAirConditionerTemperatureB1 = this->temperature;
            this->database->hmiAirConditionerTemperatureC1 = this->temperature;
            this->database->hmiAirConditionerTemperatureD1 = this->temperature;
            this->database->hmiAirConditionerTemperatureD2 = this->temperature;
            this->database->hmiAirConditionerTemperatureC2 = this->temperature;
            this->database->hmiAirConditionerTemperatureB2 = this->temperature;
            this->database->hmiAirConditionerTemperatureA2 = this->temperature;

            this->database->hmiSetAirConditionerTemperatureCommandA1 = true;
            this->database->hmiSetAirConditionerTemperatureCommandB1 = true;
            this->database->hmiSetAirConditionerTemperatureCommandC1 = true;
            this->database->hmiSetAirConditionerTemperatureCommandD1 = true;
            this->database->hmiSetAirConditionerTemperatureCommandD2 = true;
            this->database->hmiSetAirConditionerTemperatureCommandC2 = true;
            this->database->hmiSetAirConditionerTemperatureCommandB2 = true;
            this->database->hmiSetAirConditionerTemperatureCommandA2 = true;
            break;
        }
    }
    else if (uWorkMode == this->settingMode)
    {
        switch (this->selectedVehicle)
        {
        case uA1:
            this->database->hmiAirConditionerModeA1 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandA1 = true;
            break;
        case uB1:
            this->database->hmiAirConditionerModeB1 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandB1 = true;
            break;
        case uC1:
            this->database->hmiAirConditionerModeC1 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandC1 = true;
            break;
        case uD1:
            this->database->hmiAirConditionerModeD1 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandD1 = true;
            break;
        case uD2:
            this->database->hmiAirConditionerModeD2 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandD2 = true;
            break;
        case uC2:
            this->database->hmiAirConditionerModeC2 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandC2 = true;
            break;
        case uB2:
            this->database->hmiAirConditionerModeB2 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandB2 = true;
            break;
        case uA2:
            this->database->hmiAirConditionerModeA2 = this->airConditionerMode;
            this->database->hmiSetAirConditionerModeCommandA2 = true;
            break;
        case uAll:
            this->database->hmiAirConditionerModeA1 = this->airConditionerMode;
            this->database->hmiAirConditionerModeB1 = this->airConditionerMode;
            this->database->hmiAirConditionerModeC1 = this->airConditionerMode;
            this->database->hmiAirConditionerModeD1 = this->airConditionerMode;
            this->database->hmiAirConditionerModeD2 = this->airConditionerMode;
            this->database->hmiAirConditionerModeC2 = this->airConditionerMode;
            this->database->hmiAirConditionerModeB2 = this->airConditionerMode;
            this->database->hmiAirConditionerModeA2 = this->airConditionerMode;

            this->database->hmiSetAirConditionerModeCommandA1 = true;
            this->database->hmiSetAirConditionerModeCommandB1 = true;
            this->database->hmiSetAirConditionerModeCommandC1 = true;
            this->database->hmiSetAirConditionerModeCommandD1 = true;
            this->database->hmiSetAirConditionerModeCommandD2 = true;
            this->database->hmiSetAirConditionerModeCommandC2 = true;
            this->database->hmiSetAirConditionerModeCommandB2 = true;
            this->database->hmiSetAirConditionerModeCommandA2 = true;
            break;
        }
    }

    if (this->timer->isActive())
    {
        _LOG << "the previous command is not finished, please check it";

        return;
    }
    else
    {
        this->database->hmiSecurityCode = 0xAA;
        ui->btnSetting->setStyleSheet(_SET_BUTTON_DOWN);
        this->timer->start(5000);
    }
}

void AirConditioner::on_btnAutoCool_clicked()
{
    this->setModeButtonState(ui->btnAutoCool);
    this->airConditionerMode = _AIR_CONDITIIONER_AUTO_COOL;
}

void AirConditioner::on_btnManualCool_clicked()
{
    this->setModeButtonState(ui->btnManualCool);
    this->airConditionerMode = _AIR_CONDITIIONER_MANUAL_COOL;
}

void AirConditioner::on_btnEmergency_clicked()
{
    this->setModeButtonState(ui->btnEmergency);
    this->airConditionerMode = _AIR_CONDITIIONER_EMERGENCY;
}

void AirConditioner::on_btnAuto_clicked()
{
    this->setModeButtonState(ui->btnAuto);
    this->airConditionerMode = _AIR_CONDITIIONER_AUTO;
}

void AirConditioner::on_btnVentilate_clicked()
{
    this->setModeButtonState(ui->btnVentilate);
    this->airConditionerMode = _AIR_CONDITIIONER_VENT;
}

void AirConditioner::on_btnExitPreCool_pressed()
{
    if (true == this->database->hmiAirConditionerPreCoolMode)
    {
        ui->btnExitPreCool->setStyleSheet(BUTTON_UP);
        this->database->hmiAirConditionerPreCoolMode = false;
    }
    else
    {
        ui->btnExitPreCool->setStyleSheet(BUTTON_DOWN);
        this->database->hmiAirConditionerPreCoolMode = true;
    }
}

void AirConditioner::on_btnFireMode_clicked()
{
    if (true == this->database->hmiAirConditionerFireMode)
    {
        ui->btnFireMode->setStyleSheet(BUTTON_UP);
        this->database->hmiAirConditionerFireMode = false;
    }
    else
    {
        ui->btnFireMode->setStyleSheet(BUTTON_DOWN);
        this->database->hmiAirConditionerFireMode = true;
    }
}

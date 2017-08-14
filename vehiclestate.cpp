#include "vehiclestate.h"
#include "ui_vehiclestate.h"
#include <stdlib.h>
#include <QTimer>
#include <QLabel>
#include <QPushButton>
#include <QPainter>
#include <QDebug>
#include "global.h"
#include "crrcfault.h"

#define _DOOR_EMERGENCY ("font: 13px, \"微软雅黑\"; color: transparent; border-image: url(:/images/doorEmergency.png);")
#define _DOOR_OFFLINE ("font: 13px, \"微软雅黑\"; color: black; background-color: white;")
#define _DOOR_CUTOUT ("font: 13px, \"微软雅黑\"; color: transparent; border-image: url(:/images/brakeCutout.png);")
#define _DOOR_BLOCK ("font: 13px, \"微软雅黑\"; color: transparent; border-image: url(:/images/doorBlock.png);")
#define _DOOR_OPEN_FAULT_UP ("font: 13px, \"微软雅黑\"; color: transparent; border-image: url(:/images/doorOpenFaulUp.png);")
#define _DOOR_OPEN_FAULT_DOWN ("font: 13px, \"微软雅黑\"; color: transparent; border-image: url(:/images/doorOpenFaultDown.png);")
#define _DOOR_CLOSE_FAULT ("font: 13px, \"微软雅黑\"; color: black; background-color: red;")
#define _DOOR_OPEN ("font: 13px, \"微软雅黑\"; color: black; background-color: yellow;")
#define _DOOR_CLOSE ("font: 13px, \"微软雅黑\"; color: black; background-color: gray;")

#define _CABIN_ACTIVE ("border-width: 0px; background-color: green; color: white; font: 30px, \"微软雅黑\";")
#define _CABIN_UNACTIVE ("border-width: 0px; background-color: rgb(83, 83, 83); color: white; font: 30px, \"微软雅黑\";")

#define _CABIN_DOOR_OPEN ("border-width: 0px; background-color: yellow; border-radius: 10px;")
#define _CABIN_DOOR_CLOSE ("border-width: 0px; background-color: rgb(160, 160, 160); border-radius: 10px;")

#define _CABIN_EMERGENCY_DOOR_OPEN ("border-width: 0px; background-color: yellow;")
#define _CABIN_EMERGENCY_DOOR_CLOSE ("border-width: 0px; background-color: gray;")

#define _CABIN_AISLE_DOOR_OPEN ("border-width: 0px; background-color: yellow;")
#define _CABIN_AISLE_DOOR_CLOSE ("border-width: 0px; background-color: gray;")

#define _PANTOGRAPH_DOWN ("background-color: transparent; border-width: 0px; border-image: url(:/images/pantoDown.png);")
#define _PANTOGRAPH_UP ("background-color: transparent; border-width: 0px; border-image: url(:/images/pantoUp.png);")
#define _PANTOGRAPH_CUTOUT ("background-color: transparent; border-width: 0px; border-image: url(:/images/pantoCutout.png);")
#define _PANTOGRAPH_DOWN_ERROR ("background-color: transparent; border-width: 0px; border-image: url(:/images/pantoDownError.png);")
#define _PANTOGRAPH_UP_ERROR ("background-color: transparent; border-width: 0px; border-image: url(:/images/pantoUpError.png);")
#define _PANTOGRAPH_UNKNOWN_STATE ("background-color: transparent; border-width: 0px; border-image: url(:/images/pantoUnknown.png);")

#define _TRACTION_RUN ("border: 0px; border-image: url(:/images/motorRun.png);")
#define _TRACTION_MAJOR_ERROR ("border: 0px; border-image: url(:/images/motorMajorError.png);")
#define _TRACTION_STOP ("border: 0px; border-image: url(:/images/motorStop.png);")
#define _TRACTION_MINOR_ERROR ("border: 0px; border-image: url(:/images/motorMinorError.png);")
#define _TRACTION_CUTOUT ("border: 0px; border-image: url(:/images/pantoCutout.png);")
#define _TRACTION_UNKNOWN_STATE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")

#define _GENERATRIX_BRAKER_OFFLINE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")
#define _GENERATRIX_BRAKER_ON ("border: 0px; border-image: url(:/images/generatrixOn.png);")
#define _GENERATRIX_BRAKER_OFF ("border: 0px; border-image: url(:/images/generatrixOff.png);")

#define _SIV_UNKNOWN_STATE ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/airConditionerNoPower.png);")
#define _SIV_ON ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/auxiliaryRun.png);")
#define _SIV_OFF ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/auxiliaryStop.png);")
#define _SIV_MAJOR_ERROR ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/auxiliaryMajorError.png);")
#define _SIV_MINOR_ERROR ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/auxiliaryMinorError.png);")

#define _DCDC_UNKNOWN_STATE ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/airConditionerNoPower.png);")
#define _DCDC_ON ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/dcdcRunRun.png);")
#define _DCDC_OFF ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/dcdcStop.png);")
#define _DCDC_MAJOR_ERROR ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/dcdcMajorError.png);")
#define _DCDC_MINOR_ERROR ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/dcdcMinorError.png);")

#define _COMPRESSOR_OFFLINE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")
#define _COMPRESSOR_ON ("border: 0px; border-image: url(:/images/compressorRun.png);")
#define _COMPRESSOR_OFF ("border: 0px; border-image: url(:/images/compressorStop.png);")
#define _COMPRESSOR_WARNING ("border: 0px; border-image: url(:/images/compressorWarning.png);")

#define _MAIN_BREAKER_OFFLINE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")
#define _MAIN_BREAKER_ON ("border: 0px; border-image: url(:/images/breakerTurnOn.png);")
#define _MAIN_BREAKER_OFF ("border: 0px; border-image: url(:/images/breakerTurnOff.png);")

#define _PARKING_BRAKE_APPLY ("background-color: transparent; border-width: 0px; color: white; border-image: url(:/images/brakeParkingApply.png);")
#define _PARKING_BRAKE_OFFLINE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")

#define _AIR_BRAKE_OFFLINE ("border: 0px; border-image: url(:/images/airConditionerNoPower.png);")
#define _AIR_BRAKE_ERROR_APPLY ("border: 0px; border-image: url(:/images/brakeApplyMajorError.png);")
#define _AIR_BRAKE_ERROR_RELEASE ("border: 0px; border-image: url(:/images/brakeReleaseMajorError.png);")
#define _AIR_BRAKE_APPLY ("border: 0px; border-image: url(:/images/brakeApply.png);")
#define _AIR_BRAKE_RELEASE ("border: 0px; border-image: url(:/images/brakeRelease.png);")
#define _AIR_BRAKE_ISOLATE ("border: 0px; border-image: url(:/images/brakeCutout.png);")

#define _DOOR_SAFTY_LINE_CLOSE ("background-color: rgb(0, 255, 0); border-width: 0px;")
#define _DOOR_SAFTY_LINE_OPEN ("background-color: yellow; border-width: 0px;")

VehicleState::VehicleState(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleState)
{
    ui->setupUi(this);

    ui->lblTip1->hide();
    ui->lblTip2->hide();
    ui->lblTip3->hide();
    ui->lblTip4->hide();
    ui->lblTip5->hide();
}

VehicleState::~VehicleState()
{
    delete ui;
}

void VehicleState::installCrrcFault(CrrcFault *crrcFault)
{
    this->crrcFault = crrcFault;
}

void VehicleState::showEvent(QShowEvent *)
{
    ui->lblVehicleNumberA1->setText(QString("13A") + this->database->vehicleNumberA1);
    ui->lblVehicleNumberB1->setText(QString("13B") + this->database->vehicleNumberB1);
    ui->lblVehicleNumberC1->setText(QString("13C") + this->database->vehicleNumberC1);
    ui->lblVehicleNumberD1->setText(QString("13D") + this->database->vehicleNumberD1);
    ui->lblVehicleNumberD2->setText(QString("13D") + this->database->vehicleNumberD2);
    ui->lblVehicleNumberC2->setText(QString("13C") + this->database->vehicleNumberC2);
    ui->lblVehicleNumberB2->setText(QString("13B") + this->database->vehicleNumberB2);
    ui->lblVehicleNumberA2->setText(QString("13A") + this->database->vehicleNumberA2);
}

void VehicleState::updatePage()
{
    _NO_DATABASE_WARNING

    // just a timer
    this->timer = (this->timer ++) % 100;

    // update it every time for it is a mvb signal
    ui->lblVehicleNumberA1->setText(QString("13A") + this->database->vehicleNumberA1);

    this->setCoupleState();
    this->setCabinState();
    this->setPantographState();
    this->setGeneratrixState();
    this->setSivState();
    this->setDcdcState();
    this->setFireAlarmState();
    this->setCompressorState();
    this->setParkingBrakeState();
    this->setLimitedSpeed(this->database->ccuLimitedSpeed);
    this->setConfirmFault();

    // main breakers' state
    this->setMainBreakerState(ui->lblMainBreakerB1, this->database->tcu1Online, this->database->dcuMainBreakerStateB1);
    this->setMainBreakerState(ui->lblMainBreakerC1, this->database->tcu2Online, this->database->dcuMainBreakerStateC1);
    this->setMainBreakerState(ui->lblMainBreakerD1, this->database->tcu3Online, this->database->dcuMainBreakerStateD1);
    this->setMainBreakerState(ui->lblMainBreakerD2, this->database->tcu4Online, this->database->dcuMainBreakerStateD2);
    this->setMainBreakerState(ui->lblMainBreakerC2, this->database->tcu5Online, this->database->dcuMainBreakerStateC2);
    this->setMainBreakerState(ui->lblMainBreakerB2, this->database->tcu6Online, this->database->dcuMainBreakerStateB2);

    // door safty loop line
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2A1, this->database->edcuDoor2SaftyLoop1A1 && this->database->edcuDoor4SaftyLoop1A1
//                                    && this->database->edcuDoor6SaftyLoop1A1 && this->database->edcuDoor8SaftyLoop1A1 && this->database->edcuDoor10SaftyLoop1A1
//                                    && this->database->edcuDoor2SaftyLoop2A1 && this->database->edcuDoor4SaftyLoop2A1
//                                    && this->database->edcuDoor6SaftyLoop2A1 && this->database->edcuDoor8SaftyLoop2A1 && this->database->edcuDoor10SaftyLoop2A1);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1A1, this->database->edcuDoor1SaftyLoop1A1 && this->database->edcuDoor3SaftyLoop1A1
//                                    && this->database->edcuDoor5SaftyLoop1A1 && this->database->edcuDoor7SaftyLoop1A1 && this->database->edcuDoor9SaftyLoop1A1
//                                    && this->database->edcuDoor1SaftyLoop2A1 && this->database->edcuDoor3SaftyLoop2A1
//                                    && this->database->edcuDoor5SaftyLoop2A1 && this->database->edcuDoor7SaftyLoop2A1 && this->database->edcuDoor9SaftyLoop2A1);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2B1, this->database->edcuDoor2SaftyLoop1B1 && this->database->edcuDoor4SaftyLoop1B1
//                                    && this->database->edcuDoor6SaftyLoop1B1 && this->database->edcuDoor8SaftyLoop1B1 && this->database->edcuDoor10SaftyLoop1B1
//                                    && this->database->edcuDoor2SaftyLoop2B1 && this->database->edcuDoor4SaftyLoop2B1
//                                    && this->database->edcuDoor6SaftyLoop2B1 && this->database->edcuDoor8SaftyLoop2B1 && this->database->edcuDoor10SaftyLoop2B1);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1B1, this->database->edcuDoor1SaftyLoop1B1 && this->database->edcuDoor3SaftyLoop1B1
//                                    && this->database->edcuDoor5SaftyLoop1B1 && this->database->edcuDoor7SaftyLoop1B1 && this->database->edcuDoor9SaftyLoop1B1
//                                    && this->database->edcuDoor1SaftyLoop2B1 && this->database->edcuDoor3SaftyLoop2B1
//                                    && this->database->edcuDoor5SaftyLoop2B1 && this->database->edcuDoor7SaftyLoop2B1 && this->database->edcuDoor9SaftyLoop2B1);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2C1, this->database->edcuDoor2SaftyLoop1C1 && this->database->edcuDoor4SaftyLoop1C1
//                                    && this->database->edcuDoor6SaftyLoop1C1 && this->database->edcuDoor8SaftyLoop1C1 && this->database->edcuDoor10SaftyLoop1C1
//                                    && this->database->edcuDoor2SaftyLoop2C1 && this->database->edcuDoor4SaftyLoop2C1
//                                    && this->database->edcuDoor6SaftyLoop2C1 && this->database->edcuDoor8SaftyLoop2C1 && this->database->edcuDoor10SaftyLoop2C1);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1C1, this->database->edcuDoor1SaftyLoop1C1 && this->database->edcuDoor3SaftyLoop1C1
//                                    && this->database->edcuDoor5SaftyLoop1C1 && this->database->edcuDoor7SaftyLoop1C1 && this->database->edcuDoor9SaftyLoop1C1
//                                    && this->database->edcuDoor1SaftyLoop2C1 && this->database->edcuDoor3SaftyLoop2C1
//                                    && this->database->edcuDoor5SaftyLoop2C1 && this->database->edcuDoor7SaftyLoop2C1 && this->database->edcuDoor9SaftyLoop2C1);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2D1, this->database->edcuDoor2SaftyLoop1D1 && this->database->edcuDoor4SaftyLoop1D1
//                                    && this->database->edcuDoor6SaftyLoop1D1 && this->database->edcuDoor8SaftyLoop1D1 && this->database->edcuDoor10SaftyLoop1D1
//                                    && this->database->edcuDoor2SaftyLoop2D1 && this->database->edcuDoor4SaftyLoop2D1
//                                    && this->database->edcuDoor6SaftyLoop2D1 && this->database->edcuDoor8SaftyLoop2D1 && this->database->edcuDoor10SaftyLoop2D1);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1D1, this->database->edcuDoor1SaftyLoop1D1 && this->database->edcuDoor3SaftyLoop1D1
//                                    && this->database->edcuDoor5SaftyLoop1D1 && this->database->edcuDoor7SaftyLoop1D1 && this->database->edcuDoor9SaftyLoop1D1
//                                    && this->database->edcuDoor1SaftyLoop2D1 && this->database->edcuDoor3SaftyLoop2D1
//                                    && this->database->edcuDoor5SaftyLoop2D1 && this->database->edcuDoor7SaftyLoop2D1 && this->database->edcuDoor9SaftyLoop2D1);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2D2, this->database->edcuDoor2SaftyLoop1D2 && this->database->edcuDoor4SaftyLoop1D2
//                                    && this->database->edcuDoor6SaftyLoop1D2 && this->database->edcuDoor8SaftyLoop1D2 && this->database->edcuDoor10SaftyLoop1D2
//                                    && this->database->edcuDoor2SaftyLoop2D2 && this->database->edcuDoor4SaftyLoop2D2
//                                    && this->database->edcuDoor6SaftyLoop2D2 && this->database->edcuDoor8SaftyLoop2D2 && this->database->edcuDoor10SaftyLoop2D2);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1D2, this->database->edcuDoor1SaftyLoop1D2 && this->database->edcuDoor3SaftyLoop1D2
//                                    && this->database->edcuDoor5SaftyLoop1D2 && this->database->edcuDoor7SaftyLoop1D2 && this->database->edcuDoor9SaftyLoop1D2
//                                    && this->database->edcuDoor1SaftyLoop2D2 && this->database->edcuDoor3SaftyLoop2D2
//                                    && this->database->edcuDoor5SaftyLoop2D2 && this->database->edcuDoor7SaftyLoop2D2 && this->database->edcuDoor9SaftyLoop2D2);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2C2, this->database->edcuDoor2SaftyLoop1C2 && this->database->edcuDoor4SaftyLoop1C2
//                                    && this->database->edcuDoor6SaftyLoop1C2 && this->database->edcuDoor8SaftyLoop1C2 && this->database->edcuDoor10SaftyLoop1C2
//                                    && this->database->edcuDoor2SaftyLoop2C2 && this->database->edcuDoor4SaftyLoop2C2
//                                    && this->database->edcuDoor6SaftyLoop2C2 && this->database->edcuDoor8SaftyLoop2C2 && this->database->edcuDoor10SaftyLoop2C2);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1C2, this->database->edcuDoor1SaftyLoop1C2 && this->database->edcuDoor3SaftyLoop1C2
//                                    && this->database->edcuDoor5SaftyLoop1C2 && this->database->edcuDoor7SaftyLoop1C2 && this->database->edcuDoor9SaftyLoop1C2
//                                    && this->database->edcuDoor1SaftyLoop2C2 && this->database->edcuDoor3SaftyLoop2C2
//                                    && this->database->edcuDoor5SaftyLoop2C2 && this->database->edcuDoor7SaftyLoop2C2 && this->database->edcuDoor9SaftyLoop2C2);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2B2, this->database->edcuDoor2SaftyLoop1B2 && this->database->edcuDoor4SaftyLoop1B2
//                                    && this->database->edcuDoor6SaftyLoop1B2 && this->database->edcuDoor8SaftyLoop1B2 && this->database->edcuDoor10SaftyLoop1B2
//                                    && this->database->edcuDoor2SaftyLoop2B2 && this->database->edcuDoor4SaftyLoop2B2
//                                    && this->database->edcuDoor6SaftyLoop2B2 && this->database->edcuDoor8SaftyLoop2B2 && this->database->edcuDoor10SaftyLoop2B2);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1B2, this->database->edcuDoor1SaftyLoop1B2 && this->database->edcuDoor3SaftyLoop1B2
//                                    && this->database->edcuDoor5SaftyLoop1B2 && this->database->edcuDoor7SaftyLoop1B2 && this->database->edcuDoor9SaftyLoop1B2
//                                    && this->database->edcuDoor1SaftyLoop2B2 && this->database->edcuDoor3SaftyLoop2B2
//                                    && this->database->edcuDoor5SaftyLoop2B2 && this->database->edcuDoor7SaftyLoop2B2 && this->database->edcuDoor9SaftyLoop2B2);

//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2A2, this->database->edcuDoor2SaftyLoop1A2 && this->database->edcuDoor4SaftyLoop1A2
//                                    && this->database->edcuDoor6SaftyLoop1A2 && this->database->edcuDoor8SaftyLoop1A2 && this->database->edcuDoor10SaftyLoop1A2
//                                    && this->database->edcuDoor2SaftyLoop2A2 && this->database->edcuDoor4SaftyLoop2A2
//                                    && this->database->edcuDoor6SaftyLoop2A2 && this->database->edcuDoor8SaftyLoop2A2 && this->database->edcuDoor10SaftyLoop2A2);
//    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1A2, this->database->edcuDoor1SaftyLoop1A2 && this->database->edcuDoor3SaftyLoop1A2
//                                    && this->database->edcuDoor5SaftyLoop1A2 && this->database->edcuDoor7SaftyLoop1A2 && this->database->edcuDoor9SaftyLoop1A2
//                                    && this->database->edcuDoor1SaftyLoop2A2 && this->database->edcuDoor3SaftyLoop2A2
//                                    && this->database->edcuDoor5SaftyLoop2A2 && this->database->edcuDoor7SaftyLoop2A2 && this->database->edcuDoor9SaftyLoop2A2);

    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1A1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2A1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1B1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2B1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1C1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2C1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1D1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2D1, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1D2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2D2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1C2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2C2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1B2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2B2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine1A2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);
    this->setDoorSaftyLineState(ui->lblDoorSaftyLine2A2, this->database->doorAllClosedA1 | this->database->doorAllClosedA2);

    QList<bool> brakeUnCheck;

    brakeUnCheck << (this->database->hmi26hUncheckA1 || this->database->hmi26hUncheckA2)
                 << (this->database->hmi24hUncheckA1 || this->database->hmi24hUncheckA2);
    this->setUnselfCheck(brakeUnCheck);

    this->setSlideState(this->database->hmiBogie1SlideA1 || this->database->hmiBogie2SlideA1
                            || this->database->hmiBogie1SlideB1 || this->database->hmiBogie2SlideB1
                            || this->database->hmiBogie1SlideC1 || this->database->hmiBogie2SlideC1
                            || this->database->hmiBogie1SlideD1 || this->database->hmiBogie2SlideD1
                            || this->database->hmiBogie1SlideD2 || this->database->hmiBogie2SlideD2
                            || this->database->hmiBogie1SlideC2 || this->database->hmiBogie2SlideC2
                            || this->database->hmiBogie1SlideB2 || this->database->hmiBogie2SlideB2
                            || this->database->hmiBogie1SlideA2 || this->database->hmiBogie2SlideA2,
                         this->database->vvvfWheelIdleB1 || this->database->vvvfWheelIdleC1 || this->database->vvvfWheelIdleD1
                            || this->database->vvvfWheelIdleD2 || this->database->vvvfWheelIdleC2 || this->database->vvvfWheelIdleB2);

    this->setEmergencyBrake(this->database->ccuEmergencyBrakeApply, this->database->ccuFastBrakeApply);

    this->setTractionForbidden(this->database->ccuNoTractionAll);

    QList<bool> airBrake;

    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie1CutoffA1
             << ((this->database->hmiBogie1EmergercyBrakeApplyA1 || this->database->hmiBogie1AirBrakeApplyA1) && this->database->hmiBogie1MajorFaultA1)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyA1 || false == this->database->hmiBogie1AirBrakeApplyA1) && this->database->hmiBogie1MajorFaultA1)
             << (this->database->hmiBogie1EmergercyBrakeApplyA1 || this->database->hmiBogie1AirBrakeApplyA1)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyA1 || false == this->database->hmiBogie1AirBrakeApplyA1);
    this->setAirBrakeState(ui->lblBrake1A1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie2CutoffA1
             << ((this->database->hmiBogie2EmergercyBrakeApplyA1 || this->database->hmiBogie2AirBrakeApplyA1) && this->database->hmiBogie2MajorFaultA1)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyA1 || false == this->database->hmiBogie2AirBrakeApplyA1) && this->database->hmiBogie2MajorFaultA1)
             << (this->database->hmiBogie2EmergercyBrakeApplyA1 || this->database->hmiBogie2AirBrakeApplyA1)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyA1 || false == this->database->hmiBogie2AirBrakeApplyA1);
    this->setAirBrakeState(ui->lblBrake2A1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie1IsolatedB1
             << ((this->database->hmiBogie1EmergercyBrakeApplyB1 || this->database->hmiBogie1AirBrakeApplyB1) && this->database->hmiBogie1MajorFaultB1)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyB1 || false == this->database->hmiBogie1AirBrakeApplyB1) && this->database->hmiBogie1MajorFaultB1)
             << (this->database->hmiBogie1EmergercyBrakeApplyB1 || this->database->hmiBogie1AirBrakeApplyB1)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyB1 || false == this->database->hmiBogie1AirBrakeApplyB1);
    this->setAirBrakeState(ui->lblBrake1B1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie2IsolatedB1
             << ((this->database->hmiBogie2EmergercyBrakeApplyB1 || this->database->hmiBogie2AirBrakeApplyB1) && this->database->hmiBogie2MajorFaultB1)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyB1 || false == this->database->hmiBogie2AirBrakeApplyB1) && this->database->hmiBogie2MajorFaultB1)
             << (this->database->hmiBogie2EmergercyBrakeApplyB1 || this->database->hmiBogie2AirBrakeApplyB1)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyB1 || false == this->database->hmiBogie2AirBrakeApplyB1);
    this->setAirBrakeState(ui->lblBrake2B1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie1IsolatedC1
             << ((this->database->hmiBogie1EmergercyBrakeApplyC1 || this->database->hmiBogie1AirBrakeApplyC1) && this->database->hmiBogie1MajorFaultC1)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyC1 || false == this->database->hmiBogie1AirBrakeApplyC1) && this->database->hmiBogie1MajorFaultC1)
             << (this->database->hmiBogie1EmergercyBrakeApplyC1 || this->database->hmiBogie1AirBrakeApplyC1)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyC1 || false == this->database->hmiBogie1AirBrakeApplyC1);
    this->setAirBrakeState(ui->lblBrake1C1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie2IsolatedC1
             << ((this->database->hmiBogie2EmergercyBrakeApplyC1 || this->database->hmiBogie2AirBrakeApplyC1) && this->database->hmiBogie2MajorFaultC1)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyC1 || false == this->database->hmiBogie2AirBrakeApplyC1) && this->database->hmiBogie2MajorFaultC1)
             << (this->database->hmiBogie2EmergercyBrakeApplyC1 || this->database->hmiBogie2AirBrakeApplyC1)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyC1 || false == this->database->hmiBogie2AirBrakeApplyC1);
    this->setAirBrakeState(ui->lblBrake2C1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie1CutoutD1
             << ((this->database->hmiBogie1EmergercyBrakeApplyD1 || this->database->hmiBogie1AirBrakeApplyD1) && this->database->hmiBogie1MajorFaultD1)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyD1 || false == this->database->hmiBogie1AirBrakeApplyD1) && this->database->hmiBogie1MajorFaultD1)
             << (this->database->hmiBogie1EmergercyBrakeApplyD1 || this->database->hmiBogie1AirBrakeApplyD1)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyD1 || false == this->database->hmiBogie1AirBrakeApplyD1);
    this->setAirBrakeState(ui->lblBrake1D1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu1Online || this->database->bcu2Online)
             << this->database->bogie2CutoutD1
             << ((this->database->hmiBogie2EmergercyBrakeApplyD1 || this->database->hmiBogie2AirBrakeApplyD1) && this->database->hmiBogie2MajorFaultD1)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyD1 || false == this->database->hmiBogie2AirBrakeApplyD1) && this->database->hmiBogie2MajorFaultD1)
             << (this->database->hmiBogie2EmergercyBrakeApplyD1 || this->database->hmiBogie2AirBrakeApplyD1)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyD1 || false == this->database->hmiBogie2AirBrakeApplyD1);
    this->setAirBrakeState(ui->lblBrake2D1, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie1CutoutD2
             << ((this->database->hmiBogie1EmergercyBrakeApplyD2 || this->database->hmiBogie1AirBrakeApplyD2) && this->database->hmiBogie1MajorFaultD2)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyD2 || false == this->database->hmiBogie1AirBrakeApplyD2) && this->database->hmiBogie1MajorFaultD2)
             << (this->database->hmiBogie1EmergercyBrakeApplyD2 || this->database->hmiBogie1AirBrakeApplyD2)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyD2 || false == this->database->hmiBogie1AirBrakeApplyD2);
    this->setAirBrakeState(ui->lblBrake1D2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie2CutoutD2
             << ((this->database->hmiBogie2EmergercyBrakeApplyD2 || this->database->hmiBogie2AirBrakeApplyD2) && this->database->hmiBogie2MajorFaultD2)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyD2 || false == this->database->hmiBogie2AirBrakeApplyD2) && this->database->hmiBogie2MajorFaultD2)
             << (this->database->hmiBogie2EmergercyBrakeApplyD2 || this->database->hmiBogie2AirBrakeApplyD2)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyD2 || false == this->database->hmiBogie2AirBrakeApplyD2);
    this->setAirBrakeState(ui->lblBrake2D2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie1IsolatedC2
             << ((this->database->hmiBogie1EmergercyBrakeApplyC2 || this->database->hmiBogie1AirBrakeApplyC2) && this->database->hmiBogie1MajorFaultC2)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyC2 || false == this->database->hmiBogie1AirBrakeApplyC2) && this->database->hmiBogie1MajorFaultC2)
             << (this->database->hmiBogie1EmergercyBrakeApplyC2 || this->database->hmiBogie1AirBrakeApplyC2)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyC2 || false == this->database->hmiBogie1AirBrakeApplyC2);
    this->setAirBrakeState(ui->lblBrake1C2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie2IsolatedC2
             << ((this->database->hmiBogie2EmergercyBrakeApplyC2 || this->database->hmiBogie2AirBrakeApplyC2) && this->database->hmiBogie2MajorFaultC2)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyC2 || false == this->database->hmiBogie2AirBrakeApplyC2) && this->database->hmiBogie2MajorFaultC2)
             << (this->database->hmiBogie2EmergercyBrakeApplyC2 || this->database->hmiBogie2AirBrakeApplyC2)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyC2 || false == this->database->hmiBogie2AirBrakeApplyC2);
    this->setAirBrakeState(ui->lblBrake2C2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie1IsolatedB2
             << ((this->database->hmiBogie1EmergercyBrakeApplyB2 || this->database->hmiBogie1AirBrakeApplyB2) && this->database->hmiBogie1MajorFaultB2)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyB2 || false == this->database->hmiBogie1AirBrakeApplyB2) && this->database->hmiBogie1MajorFaultB2)
             << (this->database->hmiBogie1EmergercyBrakeApplyB2 || this->database->hmiBogie1AirBrakeApplyB2)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyB2 || false == this->database->hmiBogie1AirBrakeApplyB2);
    this->setAirBrakeState(ui->lblBrake1B2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie2IsolatedB2
             << ((this->database->hmiBogie2EmergercyBrakeApplyB2 || this->database->hmiBogie2AirBrakeApplyB2) && this->database->hmiBogie2MajorFaultB2)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyB2 || false == this->database->hmiBogie2AirBrakeApplyB2) && this->database->hmiBogie2MajorFaultB2)
             << (this->database->hmiBogie2EmergercyBrakeApplyB2 || this->database->hmiBogie2AirBrakeApplyB2)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyB2 || false == this->database->hmiBogie2AirBrakeApplyB2);
    this->setAirBrakeState(ui->lblBrake2B2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie1CutoffA2
             << ((this->database->hmiBogie1EmergercyBrakeApplyA2 || this->database->hmiBogie1AirBrakeApplyA2) && this->database->hmiBogie1MajorFaultA2)
             << ((false == this->database->hmiBogie1EmergercyBrakeApplyA2 || false == this->database->hmiBogie1AirBrakeApplyA2) && this->database->hmiBogie1MajorFaultA2)
             << (this->database->hmiBogie1EmergercyBrakeApplyA2 || this->database->hmiBogie1AirBrakeApplyA2)
             << (false == this->database->hmiBogie1EmergercyBrakeApplyA2 || false == this->database->hmiBogie1AirBrakeApplyA2);
    this->setAirBrakeState(ui->lblBrake1A2, airBrake);

    airBrake.clear();
    airBrake << (this->database->bcu3Online || this->database->bcu4Online)
             << this->database->bogie2CutoffA2
             << ((this->database->hmiBogie2EmergercyBrakeApplyA2 || this->database->hmiBogie2AirBrakeApplyA2) && this->database->hmiBogie2MajorFaultA2)
             << ((false == this->database->hmiBogie2EmergercyBrakeApplyA2 || false == this->database->hmiBogie2AirBrakeApplyA2) && this->database->hmiBogie2MajorFaultA2)
             << (this->database->hmiBogie2EmergercyBrakeApplyA2 || this->database->hmiBogie2AirBrakeApplyA2)
             << (false == this->database->hmiBogie2EmergercyBrakeApplyA2 || false == this->database->hmiBogie2AirBrakeApplyA2);
    this->setAirBrakeState(ui->lblBrake2A2, airBrake);

    QList<bool> traction;

    traction << (this->database->tcu1Online) << this->database->tcuCutoutB1 << this->database->tcuMajorFaultB1
             << (this->database->tcuMinorFaultB1) << (this->database->tcuRunningStateB1);
    this->setTractionState(ui->lblMotorB1, traction);

    traction.clear();
    traction << (this->database->tcu2Online) << this->database->tcuCutoutC1 << this->database->tcuMajorFaultC1
             << this->database->tcuMinorFaultC1 << (this->database->tcuRunningStateC1);
    this->setTractionState(ui->lblMotorC1, traction);

    traction.clear();
    traction << (this->database->tcu3Online) << this->database->tcuCutoutD1 << this->database->tcuMajorFaultD1
             << this->database->tcuMinorFaultD1 << (this->database->tcuRunningStateD1);
    this->setTractionState(ui->lblMotorD1, traction);

    traction.clear();
    traction << this->database->tcu4Online << this->database->tcuCutoutD2 << this->database->tcuMajorFaultD2
             << this->database->tcuMinorFaultD2 << (this->database->tcuRunningStateD2);
    this->setTractionState(ui->lblMotorD2, traction);

    traction.clear();
    traction << this->database->tcu5Online << this->database->tcuCutoutC2 << this->database->tcuMajorFaultC2
             << this->database->tcuMinorFaultC2 << (this->database->tcuRunningStateC2);
    this->setTractionState(ui->lblMotorC2, traction);

    traction.clear();
    traction << this->database->tcu6Online << this->database->tcuCutoutB2 << this->database->tcuMajorFaultB2
             << this->database->tcuMinorFaultB2 << (this->database->tcuRunningStateB2);
    this->setTractionState(ui->lblMotorB2, traction);

    QList<bool> door;

    // the door A1
    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu1ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu1ValidA1))
         << this->database->hmiDoor1IsolatedA1 << this->database->hmiDoor1EmergencyUnlockA1 << this->database->edcuDoor1EmergencyUnlockRequestA1
         << (this->database->hmiDoor1CloseLockA1 && (this->database->hmiDoor1MinorErrorA1 || this->database->hmiDoor1MajorErrorA1))
         << (this->database->hmiDoor1CloseLockA1 == false && (this->database->hmiDoor1MinorErrorA1 || this->database->hmiDoor1MajorErrorA1))
         << (this->database->hmiDoor1OpenObstacleA1 || this->database->hmiDoor1CLoseObstacleA1)
         << this->database->hmiDoor1CloseLockA1 << (this->database->hmiDoor1CloseLockA1 == false);
    this->setDoorState(ui->lblDoor1A1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu2ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu2ValidA1))
         << this->database->hmiDoor2IsolatedA1 << this->database->hmiDoor2EmergencyUnlockA1 << this->database->edcuDoor2EmergencyUnlockRequestA1
         << (this->database->hmiDoor2CloseLockA1 && (this->database->hmiDoor2MinorErrorA1 || this->database->hmiDoor2MajorErrorA1))
         << (this->database->hmiDoor2CloseLockA1 == false && (this->database->hmiDoor2MinorErrorA1 || this->database->hmiDoor2MajorErrorA1))
         << (this->database->hmiDoor2OpenObstacleA1 || this->database->hmiDoor2CLoseObstacleA1)
         << this->database->hmiDoor2CloseLockA1 << (this->database->hmiDoor2CloseLockA1 == false);
    this->setDoorState(ui->lblDoor2A1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu3ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu3ValidA1))
         << this->database->hmiDoor3IsolatedA1 << this->database->hmiDoor3EmergencyUnlockA1 << this->database->edcuDoor3EmergencyUnlockRequestA1
         << (this->database->hmiDoor3CloseLockA1 && (this->database->hmiDoor3MinorErrorA1 || this->database->hmiDoor3MajorErrorA1))
         << (this->database->hmiDoor3CloseLockA1 == false && (this->database->hmiDoor3MinorErrorA1 || this->database->hmiDoor3MajorErrorA1))
         << (this->database->hmiDoor3OpenObstacleA1 || this->database->hmiDoor3CLoseObstacleA1)
         << this->database->hmiDoor3CloseLockA1 << (this->database->hmiDoor3CloseLockA1 == false);
    this->setDoorState(ui->lblDoor3A1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu4ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu4ValidA1))
         << this->database->hmiDoor4IsolatedA1 << this->database->hmiDoor4EmergencyUnlockA1 << this->database->edcuDoor4EmergencyUnlockRequestA1
         << (this->database->hmiDoor4CloseLockA1 && (this->database->hmiDoor4MinorErrorA1 || this->database->hmiDoor4MajorErrorA1))
         << (this->database->hmiDoor4CloseLockA1 == false && (this->database->hmiDoor4MinorErrorA1 || this->database->hmiDoor4MajorErrorA1))
         << (this->database->hmiDoor4OpenObstacleA1 || this->database->hmiDoor4CLoseObstacleA1)
         << this->database->hmiDoor4CloseLockA1 << (this->database->hmiDoor4CloseLockA1 == false);
    this->setDoorState(ui->lblDoor4A1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu5ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu5ValidA1))
         << this->database->hmiDoor5IsolatedA1 << this->database->hmiDoor5EmergencyUnlockA1 << this->database->edcuDoor5EmergencyUnlockRequestA1
         << (this->database->hmiDoor5CloseLockA1 && (this->database->hmiDoor5MinorErrorA1 || this->database->hmiDoor5MajorErrorA1))
         << (this->database->hmiDoor5CloseLockA1 == false && (this->database->hmiDoor5MinorErrorA1 || this->database->hmiDoor5MajorErrorA1))
         << (this->database->hmiDoor5OpenObstacleA1 || this->database->hmiDoor5CLoseObstacleA1)
         << this->database->hmiDoor5CloseLockA1 << (this->database->hmiDoor5CloseLockA1 == false);
    this->setDoorState(ui->lblDoor5A1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu6ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu6ValidA1))
         << this->database->hmiDoor6IsolatedA1 << this->database->hmiDoor6EmergencyUnlockA1 << this->database->edcuDoor6EmergencyUnlockRequestA1
         << (this->database->hmiDoor6CloseLockA1 && (this->database->hmiDoor6MinorErrorA1 || this->database->hmiDoor6MajorErrorA1))
         << (this->database->hmiDoor6CloseLockA1 == false && (this->database->hmiDoor6MinorErrorA1 || this->database->hmiDoor6MajorErrorA1))
         << (this->database->hmiDoor6OpenObstacleA1 || this->database->hmiDoor6CLoseObstacleA1)
         << this->database->hmiDoor6CloseLockA1 << (this->database->hmiDoor6CloseLockA1 == false);
    this->setDoorState(ui->lblDoor6A1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu7ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu7ValidA1))
         << this->database->hmiDoor7IsolatedA1 << this->database->hmiDoor7EmergencyUnlockA1 << this->database->edcuDoor7EmergencyUnlockRequestA1
         << (this->database->hmiDoor7CloseLockA1 && (this->database->hmiDoor7MinorErrorA1 || this->database->hmiDoor7MajorErrorA1))
         << (this->database->hmiDoor7CloseLockA1 == false && (this->database->hmiDoor7MinorErrorA1 || this->database->hmiDoor7MajorErrorA1))
         << (this->database->hmiDoor7OpenObstacleA1 || this->database->hmiDoor7CLoseObstacleA1)
         << this->database->hmiDoor7CloseLockA1 << (this->database->hmiDoor7CloseLockA1 == false);
    this->setDoorState(ui->lblDoor7A1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu8ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu8ValidA1))
         << this->database->hmiDoor8IsolatedA1 << this->database->hmiDoor8EmergencyUnlockA1 << this->database->edcuDoor8EmergencyUnlockRequestA1
         << (this->database->hmiDoor8CloseLockA1 && (this->database->hmiDoor8MinorErrorA1 || this->database->hmiDoor8MajorErrorA1))
         << (this->database->hmiDoor8CloseLockA1 == false && (this->database->hmiDoor8MinorErrorA1 || this->database->hmiDoor8MajorErrorA1))
         << (this->database->hmiDoor8OpenObstacleA1 || this->database->hmiDoor8CLoseObstacleA1)
         << this->database->hmiDoor8CloseLockA1 << (this->database->hmiDoor8CloseLockA1 == false);
    this->setDoorState(ui->lblDoor8A1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu9ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu9ValidA1))
         << this->database->hmiDoor9IsolatedA1 << this->database->hmiDoor9EmergencyUnlockA1 << this->database->edcuDoor9EmergencyUnlockRequestA1
         << (this->database->hmiDoor9CloseLockA1 && (this->database->hmiDoor9MinorErrorA1 || this->database->hmiDoor9MajorErrorA1))
         << (this->database->hmiDoor9CloseLockA1 == false && (this->database->hmiDoor9MinorErrorA1 || this->database->hmiDoor9MajorErrorA1))
         << (this->database->hmiDoor9OpenObstacleA1 || this->database->hmiDoor9CLoseObstacleA1)
         << this->database->hmiDoor9CloseLockA1 << (this->database->hmiDoor9CloseLockA1 == false);
    this->setDoorState(ui->lblDoor9A1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA1 && this->database->edcu1Mdcu10ValidA1) || (this->database->edcu2OnlineA1 && this->database->edcu2Mdcu10ValidA1))
         << this->database->hmiDoor10IsolatedA1 << this->database->hmiDoor10EmergencyUnlockA1 << this->database->edcuDoor10EmergencyUnlockRequestA1
         << (this->database->hmiDoor10CloseLockA1 && (this->database->hmiDoor10MinorErrorA1 || this->database->hmiDoor10MajorErrorA1))
         << (this->database->hmiDoor10CloseLockA1 == false && (this->database->hmiDoor10MinorErrorA1 || this->database->hmiDoor10MajorErrorA1))
         << (this->database->hmiDoor10OpenObstacleA1 || this->database->hmiDoor10CLoseObstacleA1)
         << this->database->hmiDoor10CloseLockA1 << (this->database->hmiDoor10CloseLockA1 == false);
    this->setDoorState(ui->lblDoor10A1, door, true);

    // the door B1
    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu1ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu1ValidB1))
         << this->database->hmiDoor1IsolatedB1 << this->database->hmiDoor1EmergencyUnlockB1 << this->database->edcuDoor1EmergencyUnlockRequestB1
         << (this->database->hmiDoor1CloseLockB1 && (this->database->hmiDoor1MinorErrorB1 || this->database->hmiDoor1MajorErrorB1))
         << (this->database->hmiDoor1CloseLockB1 == false && (this->database->hmiDoor1MinorErrorB1 || this->database->hmiDoor1MajorErrorB1))
         << (this->database->hmiDoor1OpenObstacleB1 || this->database->hmiDoor1CLoseObstacleB1)
         << this->database->hmiDoor1CloseLockB1 << (this->database->hmiDoor1CloseLockB1 == false);
    this->setDoorState(ui->lblDoor1B1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu2ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu2ValidB1))
         << this->database->hmiDoor2IsolatedB1 << this->database->hmiDoor2EmergencyUnlockB1 << this->database->edcuDoor2EmergencyUnlockRequestB1
         << (this->database->hmiDoor2CloseLockB1 && (this->database->hmiDoor2MinorErrorB1 || this->database->hmiDoor2MajorErrorB1))
         << (this->database->hmiDoor2CloseLockB1 == false && (this->database->hmiDoor2MinorErrorB1 || this->database->hmiDoor2MajorErrorB1))
         << (this->database->hmiDoor2OpenObstacleB1 || this->database->hmiDoor2CLoseObstacleB1)
         << this->database->hmiDoor2CloseLockB1 << (this->database->hmiDoor2CloseLockB1 == false);
    this->setDoorState(ui->lblDoor2B1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu3ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu3ValidB1))
         << this->database->hmiDoor3IsolatedB1 << this->database->hmiDoor3EmergencyUnlockB1 << this->database->edcuDoor3EmergencyUnlockRequestB1
         << (this->database->hmiDoor3CloseLockB1 && (this->database->hmiDoor3MinorErrorB1 || this->database->hmiDoor3MajorErrorB1))
         << (this->database->hmiDoor3CloseLockB1 == false && (this->database->hmiDoor3MinorErrorB1 || this->database->hmiDoor3MajorErrorB1))
         << (this->database->hmiDoor3OpenObstacleB1 || this->database->hmiDoor3CLoseObstacleB1)
         << this->database->hmiDoor3CloseLockB1 << (this->database->hmiDoor3CloseLockB1 == false);
    this->setDoorState(ui->lblDoor3B1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu4ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu4ValidB1))
         << this->database->hmiDoor4IsolatedB1 << this->database->hmiDoor4EmergencyUnlockB1 << this->database->edcuDoor4EmergencyUnlockRequestB1
         << (this->database->hmiDoor4CloseLockB1 && (this->database->hmiDoor4MinorErrorB1 || this->database->hmiDoor4MajorErrorB1))
         << (this->database->hmiDoor4CloseLockB1 == false && (this->database->hmiDoor4MinorErrorB1 || this->database->hmiDoor4MajorErrorB1))
         << (this->database->hmiDoor4OpenObstacleB1 || this->database->hmiDoor4CLoseObstacleB1)
         << this->database->hmiDoor4CloseLockB1 << (this->database->hmiDoor4CloseLockB1 == false);
    this->setDoorState(ui->lblDoor4B1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu5ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu5ValidB1))
         << this->database->hmiDoor5IsolatedB1 << this->database->hmiDoor5EmergencyUnlockB1 << this->database->edcuDoor5EmergencyUnlockRequestB1
         << (this->database->hmiDoor5CloseLockB1 && (this->database->hmiDoor5MinorErrorB1 || this->database->hmiDoor5MajorErrorB1))
         << (this->database->hmiDoor5CloseLockB1 == false && (this->database->hmiDoor5MinorErrorB1 || this->database->hmiDoor5MajorErrorB1))
         << (this->database->hmiDoor5OpenObstacleB1 || this->database->hmiDoor5CLoseObstacleB1)
         << this->database->hmiDoor5CloseLockB1 << (this->database->hmiDoor5CloseLockB1 == false);
    this->setDoorState(ui->lblDoor5B1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu6ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu6ValidB1))
         << this->database->hmiDoor6IsolatedB1 << this->database->hmiDoor6EmergencyUnlockB1 << this->database->edcuDoor6EmergencyUnlockRequestB1
         << (this->database->hmiDoor6CloseLockB1 && (this->database->hmiDoor6MinorErrorB1 || this->database->hmiDoor6MajorErrorB1))
         << (this->database->hmiDoor6CloseLockB1 == false && (this->database->hmiDoor6MinorErrorB1 || this->database->hmiDoor6MajorErrorB1))
         << (this->database->hmiDoor6OpenObstacleB1 || this->database->hmiDoor6CLoseObstacleB1)
         << this->database->hmiDoor6CloseLockB1 << (this->database->hmiDoor6CloseLockB1 == false);
    this->setDoorState(ui->lblDoor6B1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu7ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu7ValidB1))
         << this->database->hmiDoor7IsolatedB1 << this->database->hmiDoor7EmergencyUnlockB1 << this->database->edcuDoor7EmergencyUnlockRequestB1
         << (this->database->hmiDoor7CloseLockB1 && (this->database->hmiDoor7MinorErrorB1 || this->database->hmiDoor7MajorErrorB1))
         << (this->database->hmiDoor7CloseLockB1 == false && (this->database->hmiDoor7MinorErrorB1 || this->database->hmiDoor7MajorErrorB1))
         << (this->database->hmiDoor7OpenObstacleB1 || this->database->hmiDoor7CLoseObstacleB1)
         << this->database->hmiDoor7CloseLockB1 << (this->database->hmiDoor7CloseLockB1 == false);
    this->setDoorState(ui->lblDoor7B1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu8ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu8ValidB1))
         << this->database->hmiDoor8IsolatedB1 << this->database->hmiDoor8EmergencyUnlockB1 << this->database->edcuDoor8EmergencyUnlockRequestB1
         << (this->database->hmiDoor8CloseLockB1 && (this->database->hmiDoor8MinorErrorB1 || this->database->hmiDoor8MajorErrorB1))
         << (this->database->hmiDoor8CloseLockB1 == false && (this->database->hmiDoor8MinorErrorB1 || this->database->hmiDoor8MajorErrorB1))
         << (this->database->hmiDoor8OpenObstacleB1 || this->database->hmiDoor8CLoseObstacleB1)
         << this->database->hmiDoor8CloseLockB1 << (this->database->hmiDoor8CloseLockB1 == false);
    this->setDoorState(ui->lblDoor8B1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu9ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu9ValidB1))
         << this->database->hmiDoor9IsolatedB1 << this->database->hmiDoor9EmergencyUnlockB1 << this->database->edcuDoor9EmergencyUnlockRequestB1
         << (this->database->hmiDoor9CloseLockB1 && (this->database->hmiDoor9MinorErrorB1 || this->database->hmiDoor9MajorErrorB1))
         << (this->database->hmiDoor9CloseLockB1 == false && (this->database->hmiDoor9MinorErrorB1 || this->database->hmiDoor9MajorErrorB1))
         << (this->database->hmiDoor9OpenObstacleB1 || this->database->hmiDoor9CLoseObstacleB1)
         << this->database->hmiDoor9CloseLockB1 << (this->database->hmiDoor9CloseLockB1 == false);
    this->setDoorState(ui->lblDoor9B1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB1 && this->database->edcu1Mdcu10ValidB1) || (this->database->edcu2OnlineB1 && this->database->edcu2Mdcu10ValidB1))
         << this->database->hmiDoor10IsolatedB1 << this->database->hmiDoor10EmergencyUnlockB1 << this->database->edcuDoor10EmergencyUnlockRequestB1
         << (this->database->hmiDoor10CloseLockB1 && (this->database->hmiDoor10MinorErrorB1 || this->database->hmiDoor10MajorErrorB1))
         << (this->database->hmiDoor10CloseLockB1 == false && (this->database->hmiDoor10MinorErrorB1 || this->database->hmiDoor10MajorErrorB1))
         << (this->database->hmiDoor10OpenObstacleB1 || this->database->hmiDoor10CLoseObstacleB1)
         << this->database->hmiDoor10CloseLockB1 << (this->database->hmiDoor10CloseLockB1 == false);
    this->setDoorState(ui->lblDoor10B1, door, true);

    // the door C1
    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu1ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu1ValidC1))
         << this->database->hmiDoor1IsolatedC1 << this->database->hmiDoor1EmergencyUnlockC1 << this->database->edcuDoor1EmergencyUnlockRequestC1
         << (this->database->hmiDoor1CloseLockC1 && (this->database->hmiDoor1MinorErrorC1 || this->database->hmiDoor1MajorErrorC1))
         << (this->database->hmiDoor1CloseLockC1 == false && (this->database->hmiDoor1MinorErrorC1 || this->database->hmiDoor1MajorErrorC1))
         << (this->database->hmiDoor1OpenObstacleC1 || this->database->hmiDoor1CLoseObstacleC1)
         << this->database->hmiDoor1CloseLockC1 << (this->database->hmiDoor1CloseLockC1 == false);
    this->setDoorState(ui->lblDoor1C1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu2ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu2ValidC1))
         << this->database->hmiDoor2IsolatedC1 << this->database->hmiDoor2EmergencyUnlockC1 << this->database->edcuDoor2EmergencyUnlockRequestC1
         << (this->database->hmiDoor2CloseLockC1 && (this->database->hmiDoor2MinorErrorC1 || this->database->hmiDoor2MajorErrorC1))
         << (this->database->hmiDoor2CloseLockC1 == false && (this->database->hmiDoor2MinorErrorC1 || this->database->hmiDoor2MajorErrorC1))
         << (this->database->hmiDoor2OpenObstacleC1 || this->database->hmiDoor2CLoseObstacleC1)
         << this->database->hmiDoor2CloseLockC1 << (this->database->hmiDoor2CloseLockC1 == false);
    this->setDoorState(ui->lblDoor2C1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu3ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu3ValidC1))
         << this->database->hmiDoor3IsolatedC1 << this->database->hmiDoor3EmergencyUnlockC1 << this->database->edcuDoor3EmergencyUnlockRequestC1
         << (this->database->hmiDoor3CloseLockC1 && (this->database->hmiDoor3MinorErrorC1 || this->database->hmiDoor3MajorErrorC1))
         << (this->database->hmiDoor3CloseLockC1 == false && (this->database->hmiDoor3MinorErrorC1 || this->database->hmiDoor3MajorErrorC1))
         << (this->database->hmiDoor3OpenObstacleC1 || this->database->hmiDoor3CLoseObstacleC1)
         << this->database->hmiDoor3CloseLockC1 << (this->database->hmiDoor3CloseLockC1 == false);
    this->setDoorState(ui->lblDoor3C1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu4ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu4ValidC1))
         << this->database->hmiDoor4IsolatedC1 << this->database->hmiDoor4EmergencyUnlockC1 << this->database->edcuDoor4EmergencyUnlockRequestC1
         << (this->database->hmiDoor4CloseLockC1 && (this->database->hmiDoor4MinorErrorC1 || this->database->hmiDoor4MajorErrorC1))
         << (this->database->hmiDoor4CloseLockC1 == false && (this->database->hmiDoor4MinorErrorC1 || this->database->hmiDoor4MajorErrorC1))
         << (this->database->hmiDoor4OpenObstacleC1 || this->database->hmiDoor4CLoseObstacleC1)
         << this->database->hmiDoor4CloseLockC1 << (this->database->hmiDoor4CloseLockC1 == false);
    this->setDoorState(ui->lblDoor4C1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu5ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu5ValidC1))
         << this->database->hmiDoor5IsolatedC1 << this->database->hmiDoor5EmergencyUnlockC1 << this->database->edcuDoor5EmergencyUnlockRequestC1
         << (this->database->hmiDoor5CloseLockC1 && (this->database->hmiDoor5MinorErrorC1 || this->database->hmiDoor5MajorErrorC1))
         << (this->database->hmiDoor5CloseLockC1 == false && (this->database->hmiDoor5MinorErrorC1 || this->database->hmiDoor5MajorErrorC1))
         << (this->database->hmiDoor5OpenObstacleC1 || this->database->hmiDoor5CLoseObstacleC1)
         << this->database->hmiDoor5CloseLockC1 << (this->database->hmiDoor5CloseLockC1 == false);
    this->setDoorState(ui->lblDoor5C1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu6ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu6ValidC1))
         << this->database->hmiDoor6IsolatedC1 << this->database->hmiDoor6EmergencyUnlockC1 << this->database->edcuDoor6EmergencyUnlockRequestC1
         << (this->database->hmiDoor6CloseLockC1 && (this->database->hmiDoor6MinorErrorC1 || this->database->hmiDoor6MajorErrorC1))
         << (this->database->hmiDoor6CloseLockC1 == false && (this->database->hmiDoor6MinorErrorC1 || this->database->hmiDoor6MajorErrorC1))
         << (this->database->hmiDoor6OpenObstacleC1 || this->database->hmiDoor6CLoseObstacleC1)
         << this->database->hmiDoor6CloseLockC1 << (this->database->hmiDoor6CloseLockC1 == false);
    this->setDoorState(ui->lblDoor6C1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu7ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu7ValidC1))
         << this->database->hmiDoor7IsolatedC1 << this->database->hmiDoor7EmergencyUnlockC1 << this->database->edcuDoor7EmergencyUnlockRequestC1
         << (this->database->hmiDoor7CloseLockC1 && (this->database->hmiDoor7MinorErrorC1 || this->database->hmiDoor7MajorErrorC1))
         << (this->database->hmiDoor7CloseLockC1 == false && (this->database->hmiDoor7MinorErrorC1 || this->database->hmiDoor7MajorErrorC1))
         << (this->database->hmiDoor7OpenObstacleC1 || this->database->hmiDoor7CLoseObstacleC1)
         << this->database->hmiDoor7CloseLockC1 << (this->database->hmiDoor7CloseLockC1 == false);
    this->setDoorState(ui->lblDoor7C1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu8ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu8ValidC1))
         << this->database->hmiDoor8IsolatedC1 << this->database->hmiDoor8EmergencyUnlockC1 << this->database->edcuDoor8EmergencyUnlockRequestC1
         << (this->database->hmiDoor8CloseLockC1 && (this->database->hmiDoor8MinorErrorC1 || this->database->hmiDoor8MajorErrorC1))
         << (this->database->hmiDoor8CloseLockC1 == false && (this->database->hmiDoor8MinorErrorC1 || this->database->hmiDoor8MajorErrorC1))
         << (this->database->hmiDoor8OpenObstacleC1 || this->database->hmiDoor8CLoseObstacleC1)
         << this->database->hmiDoor8CloseLockC1 << (this->database->hmiDoor8CloseLockC1 == false);
    this->setDoorState(ui->lblDoor8C1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu9ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu9ValidC1))
         << this->database->hmiDoor9IsolatedC1 << this->database->hmiDoor9EmergencyUnlockC1 << this->database->edcuDoor9EmergencyUnlockRequestC1
         << (this->database->hmiDoor9CloseLockC1 && (this->database->hmiDoor9MinorErrorC1 || this->database->hmiDoor9MajorErrorC1))
         << (this->database->hmiDoor9CloseLockC1 == false && (this->database->hmiDoor9MinorErrorC1 || this->database->hmiDoor9MajorErrorC1))
         << (this->database->hmiDoor9OpenObstacleC1 || this->database->hmiDoor9CLoseObstacleC1)
         << this->database->hmiDoor9CloseLockC1 << (this->database->hmiDoor9CloseLockC1 == false);
    this->setDoorState(ui->lblDoor9C1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC1 && this->database->edcu1Mdcu10ValidC1) || (this->database->edcu2OnlineC1 && this->database->edcu2Mdcu10ValidC1))
         << this->database->hmiDoor10IsolatedC1 << this->database->hmiDoor10EmergencyUnlockC1 << this->database->edcuDoor10EmergencyUnlockRequestC1
         << (this->database->hmiDoor10CloseLockC1 && (this->database->hmiDoor10MinorErrorC1 || this->database->hmiDoor10MajorErrorC1))
         << (this->database->hmiDoor10CloseLockC1 == false && (this->database->hmiDoor10MinorErrorC1 || this->database->hmiDoor10MajorErrorC1))
         << (this->database->hmiDoor10OpenObstacleC1 || this->database->hmiDoor10CLoseObstacleC1)
         << this->database->hmiDoor10CloseLockC1 << (this->database->hmiDoor10CloseLockC1 == false);
    this->setDoorState(ui->lblDoor10C1, door, true);

    // the door D1
    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu1ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu1ValidD1))
         << this->database->hmiDoor1IsolatedD1 << this->database->hmiDoor1EmergencyUnlockD1 << this->database->edcuDoor1EmergencyUnlockRequestD1
         << (this->database->hmiDoor1CloseLockD1 && (this->database->hmiDoor1MinorErrorD1 || this->database->hmiDoor1MajorErrorD1))
         << (this->database->hmiDoor1CloseLockD1 == false && (this->database->hmiDoor1MinorErrorD1 || this->database->hmiDoor1MajorErrorD1))
         << (this->database->hmiDoor1OpenObstacleD1 || this->database->hmiDoor1CLoseObstacleD1)
         << this->database->hmiDoor1CloseLockD1 << (this->database->hmiDoor1CloseLockD1 == false);
    this->setDoorState(ui->lblDoor1D1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu2ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu2ValidD1))
         << this->database->hmiDoor2IsolatedD1 << this->database->hmiDoor2EmergencyUnlockD1 << this->database->edcuDoor2EmergencyUnlockRequestD1
         << (this->database->hmiDoor2CloseLockD1 && (this->database->hmiDoor2MinorErrorD1 || this->database->hmiDoor2MajorErrorD1))
         << (this->database->hmiDoor2CloseLockD1 == false && (this->database->hmiDoor2MinorErrorD1 || this->database->hmiDoor2MajorErrorD1))
         << (this->database->hmiDoor2OpenObstacleD1 || this->database->hmiDoor2CLoseObstacleD1)
         << this->database->hmiDoor2CloseLockD1 << (this->database->hmiDoor2CloseLockD1 == false);
    this->setDoorState(ui->lblDoor2D1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu3ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu3ValidD1))
         << this->database->hmiDoor3IsolatedD1 << this->database->hmiDoor3EmergencyUnlockD1 << this->database->edcuDoor3EmergencyUnlockRequestD1
         << (this->database->hmiDoor3CloseLockD1 && (this->database->hmiDoor3MinorErrorD1 || this->database->hmiDoor3MajorErrorD1))
         << (this->database->hmiDoor3CloseLockD1 == false && (this->database->hmiDoor3MinorErrorD1 || this->database->hmiDoor3MajorErrorD1))
         << (this->database->hmiDoor3OpenObstacleD1 || this->database->hmiDoor3CLoseObstacleD1)
         << this->database->hmiDoor3CloseLockD1 << (this->database->hmiDoor3CloseLockD1 == false);
    this->setDoorState(ui->lblDoor3D1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu4ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu4ValidD1))
         << this->database->hmiDoor4IsolatedD1 << this->database->hmiDoor4EmergencyUnlockD1 << this->database->edcuDoor4EmergencyUnlockRequestD1
         << (this->database->hmiDoor4CloseLockD1 && (this->database->hmiDoor4MinorErrorD1 || this->database->hmiDoor4MajorErrorD1))
         << (this->database->hmiDoor4CloseLockD1 == false && (this->database->hmiDoor4MinorErrorD1 || this->database->hmiDoor4MajorErrorD1))
         << (this->database->hmiDoor4OpenObstacleD1 || this->database->hmiDoor4CLoseObstacleD1)
         << this->database->hmiDoor4CloseLockD1 << (this->database->hmiDoor4CloseLockD1 == false);
    this->setDoorState(ui->lblDoor4D1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu5ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu5ValidD1))
         << this->database->hmiDoor5IsolatedD1 << this->database->hmiDoor5EmergencyUnlockD1 << this->database->edcuDoor5EmergencyUnlockRequestD1
         << (this->database->hmiDoor5CloseLockD1 && (this->database->hmiDoor5MinorErrorD1 || this->database->hmiDoor5MajorErrorD1))
         << (this->database->hmiDoor5CloseLockD1 == false && (this->database->hmiDoor5MinorErrorD1 || this->database->hmiDoor5MajorErrorD1))
         << (this->database->hmiDoor5OpenObstacleD1 || this->database->hmiDoor5CLoseObstacleD1)
         << this->database->hmiDoor5CloseLockD1 << (this->database->hmiDoor5CloseLockD1 == false);
    this->setDoorState(ui->lblDoor5D1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu6ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu6ValidD1))
         << this->database->hmiDoor6IsolatedD1 << this->database->hmiDoor6EmergencyUnlockD1 << this->database->edcuDoor6EmergencyUnlockRequestD1
         << (this->database->hmiDoor6CloseLockD1 && (this->database->hmiDoor6MinorErrorD1 || this->database->hmiDoor6MajorErrorD1))
         << (this->database->hmiDoor6CloseLockD1 == false && (this->database->hmiDoor6MinorErrorD1 || this->database->hmiDoor6MajorErrorD1))
         << (this->database->hmiDoor6OpenObstacleD1 || this->database->hmiDoor6CLoseObstacleD1)
         << this->database->hmiDoor6CloseLockD1 << (this->database->hmiDoor6CloseLockD1 == false);
    this->setDoorState(ui->lblDoor6D1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu7ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu7ValidD1))
         << this->database->hmiDoor7IsolatedD1 << this->database->hmiDoor7EmergencyUnlockD1 << this->database->edcuDoor7EmergencyUnlockRequestD1
         << (this->database->hmiDoor7CloseLockD1 && (this->database->hmiDoor7MinorErrorD1 || this->database->hmiDoor7MajorErrorD1))
         << (this->database->hmiDoor7CloseLockD1 == false && (this->database->hmiDoor7MinorErrorD1 || this->database->hmiDoor7MajorErrorD1))
         << (this->database->hmiDoor7OpenObstacleD1 || this->database->hmiDoor7CLoseObstacleD1)
         << this->database->hmiDoor7CloseLockD1 << (this->database->hmiDoor7CloseLockD1 == false);
    this->setDoorState(ui->lblDoor7D1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu8ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu8ValidD1))
         << this->database->hmiDoor8IsolatedD1 << this->database->hmiDoor8EmergencyUnlockD1 << this->database->edcuDoor8EmergencyUnlockRequestD1
         << (this->database->hmiDoor8CloseLockD1 && (this->database->hmiDoor8MinorErrorD1 || this->database->hmiDoor8MajorErrorD1))
         << (this->database->hmiDoor8CloseLockD1 == false && (this->database->hmiDoor8MinorErrorD1 || this->database->hmiDoor8MajorErrorD1))
         << (this->database->hmiDoor8OpenObstacleD1 || this->database->hmiDoor8CLoseObstacleD1)
         << this->database->hmiDoor8CloseLockD1 << (this->database->hmiDoor8CloseLockD1 == false);
    this->setDoorState(ui->lblDoor8D1, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu9ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu9ValidD1))
         << this->database->hmiDoor9IsolatedD1 << this->database->hmiDoor9EmergencyUnlockD1 << this->database->edcuDoor9EmergencyUnlockRequestD1
         << (this->database->hmiDoor9CloseLockD1 && (this->database->hmiDoor9MinorErrorD1 || this->database->hmiDoor9MajorErrorD1))
         << (this->database->hmiDoor9CloseLockD1 == false && (this->database->hmiDoor9MinorErrorD1 || this->database->hmiDoor9MajorErrorD1))
         << (this->database->hmiDoor9OpenObstacleD1 || this->database->hmiDoor9CLoseObstacleD1)
         << this->database->hmiDoor9CloseLockD1 << (this->database->hmiDoor9CloseLockD1 == false);
    this->setDoorState(ui->lblDoor9D1, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD1 && this->database->edcu1Mdcu10ValidD1) || (this->database->edcu2OnlineD1 && this->database->edcu2Mdcu10ValidD1))
         << this->database->hmiDoor10IsolatedD1 << this->database->hmiDoor10EmergencyUnlockD1 << this->database->edcuDoor10EmergencyUnlockRequestD1
         << (this->database->hmiDoor10CloseLockD1 && (this->database->hmiDoor10MinorErrorD1 || this->database->hmiDoor10MajorErrorD1))
         << (this->database->hmiDoor10CloseLockD1 == false && (this->database->hmiDoor10MinorErrorD1 || this->database->hmiDoor10MajorErrorD1))
         << (this->database->hmiDoor10OpenObstacleD1 || this->database->hmiDoor10CLoseObstacleD1)
         << this->database->hmiDoor10CloseLockD1 << (this->database->hmiDoor10CloseLockD1 == false);
    this->setDoorState(ui->lblDoor10D1, door, true);

    // the door D2
    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu1ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu1ValidD2))
         << this->database->hmiDoor1IsolatedD2 << this->database->hmiDoor1EmergencyUnlockD2 << this->database->edcuDoor1EmergencyUnlockRequestD2
         << (this->database->hmiDoor1CloseLockD2 && (this->database->hmiDoor1MinorErrorD2 || this->database->hmiDoor1MajorErrorD2))
         << (this->database->hmiDoor1CloseLockD2 == false && (this->database->hmiDoor1MinorErrorD2 || this->database->hmiDoor1MajorErrorD2))
         << (this->database->hmiDoor1OpenObstacleD2 || this->database->hmiDoor1CLoseObstacleD2)
         << this->database->hmiDoor1CloseLockD2 << (this->database->hmiDoor1CloseLockD2 == false);
    this->setDoorState(ui->lblDoor1D2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu2ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu2ValidD2))
         << this->database->hmiDoor2IsolatedD2 << this->database->hmiDoor2EmergencyUnlockD2 << this->database->edcuDoor2EmergencyUnlockRequestD2
         << (this->database->hmiDoor2CloseLockD2 && (this->database->hmiDoor2MinorErrorD2 || this->database->hmiDoor2MajorErrorD2))
         << (this->database->hmiDoor2CloseLockD2 == false && (this->database->hmiDoor2MinorErrorD2 || this->database->hmiDoor2MajorErrorD2))
         << (this->database->hmiDoor2OpenObstacleD2 || this->database->hmiDoor2CLoseObstacleD2)
         << this->database->hmiDoor2CloseLockD2 << (this->database->hmiDoor2CloseLockD2 == false);
    this->setDoorState(ui->lblDoor2D2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu3ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu3ValidD2))
         << this->database->hmiDoor3IsolatedD2 << this->database->hmiDoor3EmergencyUnlockD2 << this->database->edcuDoor3EmergencyUnlockRequestD2
         << (this->database->hmiDoor3CloseLockD2 && (this->database->hmiDoor3MinorErrorD2 || this->database->hmiDoor3MajorErrorD2))
         << (this->database->hmiDoor3CloseLockD2 == false && (this->database->hmiDoor3MinorErrorD2 || this->database->hmiDoor3MajorErrorD2))
         << (this->database->hmiDoor3OpenObstacleD2 || this->database->hmiDoor3CLoseObstacleD2)
         << this->database->hmiDoor3CloseLockD2 << (this->database->hmiDoor3CloseLockD2 == false);
    this->setDoorState(ui->lblDoor3D2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu4ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu4ValidD2))
         << this->database->hmiDoor4IsolatedD2 << this->database->hmiDoor4EmergencyUnlockD2 << this->database->edcuDoor4EmergencyUnlockRequestD2
         << (this->database->hmiDoor4CloseLockD2 && (this->database->hmiDoor4MinorErrorD2 || this->database->hmiDoor4MajorErrorD2))
         << (this->database->hmiDoor4CloseLockD2 == false && (this->database->hmiDoor4MinorErrorD2 || this->database->hmiDoor4MajorErrorD2))
         << (this->database->hmiDoor4OpenObstacleD2 || this->database->hmiDoor4CLoseObstacleD2)
         << this->database->hmiDoor4CloseLockD2 << (this->database->hmiDoor4CloseLockD2 == false);
    this->setDoorState(ui->lblDoor4D2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu5ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu5ValidD2))
         << this->database->hmiDoor5IsolatedD2 << this->database->hmiDoor5EmergencyUnlockD2 << this->database->edcuDoor5EmergencyUnlockRequestD2
         << (this->database->hmiDoor5CloseLockD2 && (this->database->hmiDoor5MinorErrorD2 || this->database->hmiDoor5MajorErrorD2))
         << (this->database->hmiDoor5CloseLockD2 == false && (this->database->hmiDoor5MinorErrorD2 || this->database->hmiDoor5MajorErrorD2))
         << (this->database->hmiDoor5OpenObstacleD2 || this->database->hmiDoor5CLoseObstacleD2)
         << this->database->hmiDoor5CloseLockD2 << (this->database->hmiDoor5CloseLockD2 == false);
    this->setDoorState(ui->lblDoor5D2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu6ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu6ValidD2))
         << this->database->hmiDoor6IsolatedD2 << this->database->hmiDoor6EmergencyUnlockD2 << this->database->edcuDoor6EmergencyUnlockRequestD2
         << (this->database->hmiDoor6CloseLockD2 && (this->database->hmiDoor6MinorErrorD2 || this->database->hmiDoor6MajorErrorD2))
         << (this->database->hmiDoor6CloseLockD2 == false && (this->database->hmiDoor6MinorErrorD2 || this->database->hmiDoor6MajorErrorD2))
         << (this->database->hmiDoor6OpenObstacleD2 || this->database->hmiDoor6CLoseObstacleD2)
         << this->database->hmiDoor6CloseLockD2 << (this->database->hmiDoor6CloseLockD2 == false);
    this->setDoorState(ui->lblDoor6D2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu7ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu7ValidD2))
         << this->database->hmiDoor7IsolatedD2 << this->database->hmiDoor7EmergencyUnlockD2 << this->database->edcuDoor7EmergencyUnlockRequestD2
         << (this->database->hmiDoor7CloseLockD2 && (this->database->hmiDoor7MinorErrorD2 || this->database->hmiDoor7MajorErrorD2))
         << (this->database->hmiDoor7CloseLockD2 == false && (this->database->hmiDoor7MinorErrorD2 || this->database->hmiDoor7MajorErrorD2))
         << (this->database->hmiDoor7OpenObstacleD2 || this->database->hmiDoor7CLoseObstacleD2)
         << this->database->hmiDoor7CloseLockD2 << (this->database->hmiDoor7CloseLockD2 == false);
    this->setDoorState(ui->lblDoor7D2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu8ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu8ValidD2))
         << this->database->hmiDoor8IsolatedD2 << this->database->hmiDoor8EmergencyUnlockD2 << this->database->edcuDoor8EmergencyUnlockRequestD2
         << (this->database->hmiDoor8CloseLockD2 && (this->database->hmiDoor8MinorErrorD2 || this->database->hmiDoor8MajorErrorD2))
         << (this->database->hmiDoor8CloseLockD2 == false && (this->database->hmiDoor8MinorErrorD2 || this->database->hmiDoor8MajorErrorD2))
         << (this->database->hmiDoor8OpenObstacleD2 || this->database->hmiDoor8CLoseObstacleD2)
         << this->database->hmiDoor8CloseLockD2 << (this->database->hmiDoor8CloseLockD2 == false);
    this->setDoorState(ui->lblDoor8D2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu9ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu9ValidD2))
         << this->database->hmiDoor9IsolatedD2 << this->database->hmiDoor9EmergencyUnlockD2 << this->database->edcuDoor9EmergencyUnlockRequestD2
         << (this->database->hmiDoor9CloseLockD2 && (this->database->hmiDoor9MinorErrorD2 || this->database->hmiDoor9MajorErrorD2))
         << (this->database->hmiDoor9CloseLockD2 == false && (this->database->hmiDoor9MinorErrorD2 || this->database->hmiDoor9MajorErrorD2))
         << (this->database->hmiDoor9OpenObstacleD2 || this->database->hmiDoor9CLoseObstacleD2)
         << this->database->hmiDoor9CloseLockD2 << (this->database->hmiDoor9CloseLockD2 == false);
    this->setDoorState(ui->lblDoor9D2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineD2 && this->database->edcu1Mdcu10ValidD2) || (this->database->edcu2OnlineD2 && this->database->edcu2Mdcu10ValidD2))
         << this->database->hmiDoor10IsolatedD2 << this->database->hmiDoor10EmergencyUnlockD2 << this->database->edcuDoor10EmergencyUnlockRequestD2
         << (this->database->hmiDoor10CloseLockD2 && (this->database->hmiDoor10MinorErrorD2 || this->database->hmiDoor10MajorErrorD2))
         << (this->database->hmiDoor10CloseLockD2 == false && (this->database->hmiDoor10MinorErrorD2 || this->database->hmiDoor10MajorErrorD2))
         << (this->database->hmiDoor10OpenObstacleD2 || this->database->hmiDoor10CLoseObstacleD2)
         << this->database->hmiDoor10CloseLockD2 << (this->database->hmiDoor10CloseLockD2 == false);
    this->setDoorState(ui->lblDoor10D2, door, true);

    // the door C2
    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu1ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu1ValidC2))
         << this->database->hmiDoor1IsolatedC2 << this->database->hmiDoor1EmergencyUnlockC2 << this->database->edcuDoor1EmergencyUnlockRequestC2
         << (this->database->hmiDoor1CloseLockC2 && (this->database->hmiDoor1MinorErrorC2 || this->database->hmiDoor1MajorErrorC2))
         << (this->database->hmiDoor1CloseLockC2 == false && (this->database->hmiDoor1MinorErrorC2 || this->database->hmiDoor1MajorErrorC2))
         << (this->database->hmiDoor1OpenObstacleC2 || this->database->hmiDoor1CLoseObstacleC2)
         << this->database->hmiDoor1CloseLockC2 << (this->database->hmiDoor1CloseLockC2 == false);
    this->setDoorState(ui->lblDoor1C2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu2ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu2ValidC2))
         << this->database->hmiDoor2IsolatedC2 << this->database->hmiDoor2EmergencyUnlockC2 << this->database->edcuDoor2EmergencyUnlockRequestC2
         << (this->database->hmiDoor2CloseLockC2 && (this->database->hmiDoor2MinorErrorC2 || this->database->hmiDoor2MajorErrorC2))
         << (this->database->hmiDoor2CloseLockC2 == false && (this->database->hmiDoor2MinorErrorC2 || this->database->hmiDoor2MajorErrorC2))
         << (this->database->hmiDoor2OpenObstacleC2 || this->database->hmiDoor2CLoseObstacleC2)
         << this->database->hmiDoor2CloseLockC2 << (this->database->hmiDoor2CloseLockC2 == false);
    this->setDoorState(ui->lblDoor2C2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu3ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu3ValidC2))
         << this->database->hmiDoor3IsolatedC2 << this->database->hmiDoor3EmergencyUnlockC2 << this->database->edcuDoor3EmergencyUnlockRequestC2
         << (this->database->hmiDoor3CloseLockC2 && (this->database->hmiDoor3MinorErrorC2 || this->database->hmiDoor3MajorErrorC2))
         << (this->database->hmiDoor3CloseLockC2 == false && (this->database->hmiDoor3MinorErrorC2 || this->database->hmiDoor3MajorErrorC2))
         << (this->database->hmiDoor3OpenObstacleC2 || this->database->hmiDoor3CLoseObstacleC2)
         << this->database->hmiDoor3CloseLockC2 << (this->database->hmiDoor3CloseLockC2 == false);
    this->setDoorState(ui->lblDoor3C2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu4ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu4ValidC2))
         << this->database->hmiDoor4IsolatedC2 << this->database->hmiDoor4EmergencyUnlockC2 << this->database->edcuDoor4EmergencyUnlockRequestC2
         << (this->database->hmiDoor4CloseLockC2 && (this->database->hmiDoor4MinorErrorC2 || this->database->hmiDoor4MajorErrorC2))
         << (this->database->hmiDoor4CloseLockC2 == false && (this->database->hmiDoor4MinorErrorC2 || this->database->hmiDoor4MajorErrorC2))
         << (this->database->hmiDoor4OpenObstacleC2 || this->database->hmiDoor4CLoseObstacleC2)
         << this->database->hmiDoor4CloseLockC2 << (this->database->hmiDoor4CloseLockC2 == false);
    this->setDoorState(ui->lblDoor4C2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu5ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu5ValidC2))
         << this->database->hmiDoor5IsolatedC2 << this->database->hmiDoor5EmergencyUnlockC2 << this->database->edcuDoor5EmergencyUnlockRequestC2
         << (this->database->hmiDoor5CloseLockC2 && (this->database->hmiDoor5MinorErrorC2 || this->database->hmiDoor5MajorErrorC2))
         << (this->database->hmiDoor5CloseLockC2 == false && (this->database->hmiDoor5MinorErrorC2 || this->database->hmiDoor5MajorErrorC2))
         << (this->database->hmiDoor5OpenObstacleC2 || this->database->hmiDoor5CLoseObstacleC2)
         << this->database->hmiDoor5CloseLockC2 << (this->database->hmiDoor5CloseLockC2 == false);
    this->setDoorState(ui->lblDoor5C2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu6ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu6ValidC2))
         << this->database->hmiDoor6IsolatedC2 << this->database->hmiDoor6EmergencyUnlockC2 << this->database->edcuDoor6EmergencyUnlockRequestC2
         << (this->database->hmiDoor6CloseLockC2 && (this->database->hmiDoor6MinorErrorC2 || this->database->hmiDoor6MajorErrorC2))
         << (this->database->hmiDoor6CloseLockC2 == false && (this->database->hmiDoor6MinorErrorC2 || this->database->hmiDoor6MajorErrorC2))
         << (this->database->hmiDoor6OpenObstacleC2 || this->database->hmiDoor6CLoseObstacleC2)
         << this->database->hmiDoor6CloseLockC2 << (this->database->hmiDoor6CloseLockC2 == false);
    this->setDoorState(ui->lblDoor6C2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu7ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu7ValidC2))
         << this->database->hmiDoor7IsolatedC2 << this->database->hmiDoor7EmergencyUnlockC2 << this->database->edcuDoor7EmergencyUnlockRequestC2
         << (this->database->hmiDoor7CloseLockC2 && (this->database->hmiDoor7MinorErrorC2 || this->database->hmiDoor7MajorErrorC2))
         << (this->database->hmiDoor7CloseLockC2 == false && (this->database->hmiDoor7MinorErrorC2 || this->database->hmiDoor7MajorErrorC2))
         << (this->database->hmiDoor7OpenObstacleC2 || this->database->hmiDoor7CLoseObstacleC2)
         << this->database->hmiDoor7CloseLockC2 << (this->database->hmiDoor7CloseLockC2 == false);
    this->setDoorState(ui->lblDoor7C2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu8ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu8ValidC2))
         << this->database->hmiDoor8IsolatedC2 << this->database->hmiDoor8EmergencyUnlockC2 << this->database->edcuDoor8EmergencyUnlockRequestC2
         << (this->database->hmiDoor8CloseLockC2 && (this->database->hmiDoor8MinorErrorC2 || this->database->hmiDoor8MajorErrorC2))
         << (this->database->hmiDoor8CloseLockC2 == false && (this->database->hmiDoor8MinorErrorC2 || this->database->hmiDoor8MajorErrorC2))
         << (this->database->hmiDoor8OpenObstacleC2 || this->database->hmiDoor8CLoseObstacleC2)
         << this->database->hmiDoor8CloseLockC2 << (this->database->hmiDoor8CloseLockC2 == false);
    this->setDoorState(ui->lblDoor8C2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu9ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu9ValidC2))
         << this->database->hmiDoor9IsolatedC2 << this->database->hmiDoor9EmergencyUnlockC2 << this->database->edcuDoor9EmergencyUnlockRequestC2
         << (this->database->hmiDoor9CloseLockC2 && (this->database->hmiDoor9MinorErrorC2 || this->database->hmiDoor9MajorErrorC2))
         << (this->database->hmiDoor9CloseLockC2 == false && (this->database->hmiDoor9MinorErrorC2 || this->database->hmiDoor9MajorErrorC2))
         << (this->database->hmiDoor9OpenObstacleC2 || this->database->hmiDoor9CLoseObstacleC2)
         << this->database->hmiDoor9CloseLockC2 << (this->database->hmiDoor9CloseLockC2 == false);
    this->setDoorState(ui->lblDoor9C2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineC2 && this->database->edcu1Mdcu10ValidC2) || (this->database->edcu2OnlineC2 && this->database->edcu2Mdcu10ValidC2))
         << this->database->hmiDoor10IsolatedC2 << this->database->hmiDoor10EmergencyUnlockC2 << this->database->edcuDoor10EmergencyUnlockRequestC2
         << (this->database->hmiDoor10CloseLockC2 && (this->database->hmiDoor10MinorErrorC2 || this->database->hmiDoor10MajorErrorC2))
         << (this->database->hmiDoor10CloseLockC2 == false && (this->database->hmiDoor10MinorErrorC2 || this->database->hmiDoor10MajorErrorC2))
         << (this->database->hmiDoor10OpenObstacleC2 || this->database->hmiDoor10CLoseObstacleC2)
         << this->database->hmiDoor10CloseLockC2 << (this->database->hmiDoor10CloseLockC2 == false);
    this->setDoorState(ui->lblDoor10C2, door, true);

    // the door B2
    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu1ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu1ValidB2))
         << this->database->hmiDoor1IsolatedB2 << this->database->hmiDoor1EmergencyUnlockB2 << this->database->edcuDoor1EmergencyUnlockRequestB2
         << (this->database->hmiDoor1CloseLockB2 && (this->database->hmiDoor1MinorErrorB2 || this->database->hmiDoor1MajorErrorB2))
         << (this->database->hmiDoor1CloseLockB2 == false && (this->database->hmiDoor1MinorErrorB2 || this->database->hmiDoor1MajorErrorB2))
         << (this->database->hmiDoor1OpenObstacleB2 || this->database->hmiDoor1CLoseObstacleB2)
         << this->database->hmiDoor1CloseLockB2 << (this->database->hmiDoor1CloseLockB2 == false);
    this->setDoorState(ui->lblDoor1B2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu2ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu2ValidB2))
         << this->database->hmiDoor2IsolatedB2 << this->database->hmiDoor2EmergencyUnlockB2 << this->database->edcuDoor2EmergencyUnlockRequestB2
         << (this->database->hmiDoor2CloseLockB2 && (this->database->hmiDoor2MinorErrorB2 || this->database->hmiDoor2MajorErrorB2))
         << (this->database->hmiDoor2CloseLockB2 == false && (this->database->hmiDoor2MinorErrorB2 || this->database->hmiDoor2MajorErrorB2))
         << (this->database->hmiDoor2OpenObstacleB2 || this->database->hmiDoor2CLoseObstacleB2)
         << this->database->hmiDoor2CloseLockB2 << (this->database->hmiDoor2CloseLockB2 == false);
    this->setDoorState(ui->lblDoor2B2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu3ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu3ValidB2))
         << this->database->hmiDoor3IsolatedB2 << this->database->hmiDoor3EmergencyUnlockB2 << this->database->edcuDoor3EmergencyUnlockRequestB2
         << (this->database->hmiDoor3CloseLockB2 && (this->database->hmiDoor3MinorErrorB2 || this->database->hmiDoor3MajorErrorB2))
         << (this->database->hmiDoor3CloseLockB2 == false && (this->database->hmiDoor3MinorErrorB2 || this->database->hmiDoor3MajorErrorB2))
         << (this->database->hmiDoor3OpenObstacleB2 || this->database->hmiDoor3CLoseObstacleB2)
         << this->database->hmiDoor3CloseLockB2 << (this->database->hmiDoor3CloseLockB2 == false);
    this->setDoorState(ui->lblDoor3B2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu4ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu4ValidB2))
         << this->database->hmiDoor4IsolatedB2 << this->database->hmiDoor4EmergencyUnlockB2 << this->database->edcuDoor4EmergencyUnlockRequestB2
         << (this->database->hmiDoor4CloseLockB2 && (this->database->hmiDoor4MinorErrorB2 || this->database->hmiDoor4MajorErrorB2))
         << (this->database->hmiDoor4CloseLockB2 == false && (this->database->hmiDoor4MinorErrorB2 || this->database->hmiDoor4MajorErrorB2))
         << (this->database->hmiDoor4OpenObstacleB2 || this->database->hmiDoor4CLoseObstacleB2)
         << this->database->hmiDoor4CloseLockB2 << (this->database->hmiDoor4CloseLockB2 == false);
    this->setDoorState(ui->lblDoor4B2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu5ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu5ValidB2))
         << this->database->hmiDoor5IsolatedB2 << this->database->hmiDoor5EmergencyUnlockB2 << this->database->edcuDoor5EmergencyUnlockRequestB2
         << (this->database->hmiDoor5CloseLockB2 && (this->database->hmiDoor5MinorErrorB2 || this->database->hmiDoor5MajorErrorB2))
         << (this->database->hmiDoor5CloseLockB2 == false && (this->database->hmiDoor5MinorErrorB2 || this->database->hmiDoor5MajorErrorB2))
         << (this->database->hmiDoor5OpenObstacleB2 || this->database->hmiDoor5CLoseObstacleB2)
         << this->database->hmiDoor5CloseLockB2 << (this->database->hmiDoor5CloseLockB2 == false);
    this->setDoorState(ui->lblDoor5B2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu6ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu6ValidB2))
         << this->database->hmiDoor6IsolatedB2 << this->database->hmiDoor6EmergencyUnlockB2 << this->database->edcuDoor6EmergencyUnlockRequestB2
         << (this->database->hmiDoor6CloseLockB2 && (this->database->hmiDoor6MinorErrorB2 || this->database->hmiDoor6MajorErrorB2))
         << (this->database->hmiDoor6CloseLockB2 == false && (this->database->hmiDoor6MinorErrorB2 || this->database->hmiDoor6MajorErrorB2))
         << (this->database->hmiDoor6OpenObstacleB2 || this->database->hmiDoor6CLoseObstacleB2)
         << this->database->hmiDoor6CloseLockB2 << (this->database->hmiDoor6CloseLockB2 == false);
    this->setDoorState(ui->lblDoor6B2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu7ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu7ValidB2))
         << this->database->hmiDoor7IsolatedB2 << this->database->hmiDoor7EmergencyUnlockB2 << this->database->edcuDoor7EmergencyUnlockRequestB2
         << (this->database->hmiDoor7CloseLockB2 && (this->database->hmiDoor7MinorErrorB2 || this->database->hmiDoor7MajorErrorB2))
         << (this->database->hmiDoor7CloseLockB2 == false && (this->database->hmiDoor7MinorErrorB2 || this->database->hmiDoor7MajorErrorB2))
         << (this->database->hmiDoor7OpenObstacleB2 || this->database->hmiDoor7CLoseObstacleB2)
         << this->database->hmiDoor7CloseLockB2 << (this->database->hmiDoor7CloseLockB2 == false);
    this->setDoorState(ui->lblDoor7B2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu8ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu8ValidB2))
         << this->database->hmiDoor8IsolatedB2 << this->database->hmiDoor8EmergencyUnlockB2 << this->database->edcuDoor8EmergencyUnlockRequestB2
         << (this->database->hmiDoor8CloseLockB2 && (this->database->hmiDoor8MinorErrorB2 || this->database->hmiDoor8MajorErrorB2))
         << (this->database->hmiDoor8CloseLockB2 == false && (this->database->hmiDoor8MinorErrorB2 || this->database->hmiDoor8MajorErrorB2))
         << (this->database->hmiDoor8OpenObstacleB2 || this->database->hmiDoor8CLoseObstacleB2)
         << this->database->hmiDoor8CloseLockB2 << (this->database->hmiDoor8CloseLockB2 == false);
    this->setDoorState(ui->lblDoor8B2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu9ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu9ValidB2))
         << this->database->hmiDoor9IsolatedB2 << this->database->hmiDoor9EmergencyUnlockB2 << this->database->edcuDoor9EmergencyUnlockRequestB2
         << (this->database->hmiDoor9CloseLockB2 && (this->database->hmiDoor9MinorErrorB2 || this->database->hmiDoor9MajorErrorB2))
         << (this->database->hmiDoor9CloseLockB2 == false && (this->database->hmiDoor9MinorErrorB2 || this->database->hmiDoor9MajorErrorB2))
         << (this->database->hmiDoor9OpenObstacleB2 || this->database->hmiDoor9CLoseObstacleB2)
         << this->database->hmiDoor9CloseLockB2 << (this->database->hmiDoor9CloseLockB2 == false);
    this->setDoorState(ui->lblDoor9B2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineB2 && this->database->edcu1Mdcu10ValidB2) || (this->database->edcu2OnlineB2 && this->database->edcu2Mdcu10ValidB2))
         << this->database->hmiDoor10IsolatedB2 << this->database->hmiDoor10EmergencyUnlockB2 << this->database->edcuDoor10EmergencyUnlockRequestB2
         << (this->database->hmiDoor10CloseLockB2 && (this->database->hmiDoor10MinorErrorB2 || this->database->hmiDoor10MajorErrorB2))
         << (this->database->hmiDoor10CloseLockB2 == false && (this->database->hmiDoor10MinorErrorB2 || this->database->hmiDoor10MajorErrorB2))
         << (this->database->hmiDoor10OpenObstacleB2 || this->database->hmiDoor10CLoseObstacleB2)
         << this->database->hmiDoor10CloseLockB2 << (this->database->hmiDoor10CloseLockB2 == false);
    this->setDoorState(ui->lblDoor10B2, door, true);

    // the door A2
    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu1ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu1ValidA2))
         << this->database->hmiDoor1IsolatedA2 << this->database->hmiDoor1EmergencyUnlockA2 << this->database->edcuDoor1EmergencyUnlockRequestA2
         << (this->database->hmiDoor1CloseLockA2 && (this->database->hmiDoor1MinorErrorA2 || this->database->hmiDoor1MajorErrorA2))
         << (this->database->hmiDoor1CloseLockA2 == false && (this->database->hmiDoor1MinorErrorA2 || this->database->hmiDoor1MajorErrorA2))
         << (this->database->hmiDoor1OpenObstacleA2 || this->database->hmiDoor1CLoseObstacleA2)
         << this->database->hmiDoor1CloseLockA2 << (this->database->hmiDoor1CloseLockA2 == false);
    this->setDoorState(ui->lblDoor1A2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu2ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu2ValidA2))
         << this->database->hmiDoor2IsolatedA2 << this->database->hmiDoor2EmergencyUnlockA2 << this->database->edcuDoor2EmergencyUnlockRequestA2
         << (this->database->hmiDoor2CloseLockA2 && (this->database->hmiDoor2MinorErrorA2 || this->database->hmiDoor2MajorErrorA2))
         << (this->database->hmiDoor2CloseLockA2 == false && (this->database->hmiDoor2MinorErrorA2 || this->database->hmiDoor2MajorErrorA2))
         << (this->database->hmiDoor2OpenObstacleA2 || this->database->hmiDoor2CLoseObstacleA2)
         << this->database->hmiDoor2CloseLockA2 << (this->database->hmiDoor2CloseLockA2 == false);
    this->setDoorState(ui->lblDoor2A2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu3ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu3ValidA2))
         << this->database->hmiDoor3IsolatedA2 << this->database->hmiDoor3EmergencyUnlockA2 << this->database->edcuDoor3EmergencyUnlockRequestA2
         << (this->database->hmiDoor3CloseLockA2 && (this->database->hmiDoor3MinorErrorA2 || this->database->hmiDoor3MajorErrorA2))
         << (this->database->hmiDoor3CloseLockA2 == false && (this->database->hmiDoor3MinorErrorA2 || this->database->hmiDoor3MajorErrorA2))
         << (this->database->hmiDoor3OpenObstacleA2 || this->database->hmiDoor3CLoseObstacleA2)
         << this->database->hmiDoor3CloseLockA2 << (this->database->hmiDoor3CloseLockA2 == false);
    this->setDoorState(ui->lblDoor3A2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu4ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu4ValidA2))
         << this->database->hmiDoor4IsolatedA2 << this->database->hmiDoor4EmergencyUnlockA2 << this->database->edcuDoor4EmergencyUnlockRequestA2
         << (this->database->hmiDoor4CloseLockA2 && (this->database->hmiDoor4MinorErrorA2 || this->database->hmiDoor4MajorErrorA2))
         << (this->database->hmiDoor4CloseLockA2 == false && (this->database->hmiDoor4MinorErrorA2 || this->database->hmiDoor4MajorErrorA2))
         << (this->database->hmiDoor4OpenObstacleA2 || this->database->hmiDoor4CLoseObstacleA2)
         << this->database->hmiDoor4CloseLockA2 << (this->database->hmiDoor4CloseLockA2 == false);
    this->setDoorState(ui->lblDoor4A2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu5ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu5ValidA2))
         << this->database->hmiDoor5IsolatedA2 << this->database->hmiDoor5EmergencyUnlockA2 << this->database->edcuDoor5EmergencyUnlockRequestA2
         << (this->database->hmiDoor5CloseLockA2 && (this->database->hmiDoor5MinorErrorA2 || this->database->hmiDoor5MajorErrorA2))
         << (this->database->hmiDoor5CloseLockA2 == false && (this->database->hmiDoor5MinorErrorA2 || this->database->hmiDoor5MajorErrorA2))
         << (this->database->hmiDoor5OpenObstacleA2 || this->database->hmiDoor5CLoseObstacleA2)
         << this->database->hmiDoor5CloseLockA2 << (this->database->hmiDoor5CloseLockA2 == false);
    this->setDoorState(ui->lblDoor5A2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu6ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu6ValidA2))
         << this->database->hmiDoor6IsolatedA2 << this->database->hmiDoor6EmergencyUnlockA2 << this->database->edcuDoor6EmergencyUnlockRequestA2
         << (this->database->hmiDoor6CloseLockA2 && (this->database->hmiDoor6MinorErrorA2 || this->database->hmiDoor6MajorErrorA2))
         << (this->database->hmiDoor6CloseLockA2 == false && (this->database->hmiDoor6MinorErrorA2 || this->database->hmiDoor6MajorErrorA2))
         << (this->database->hmiDoor6OpenObstacleA2 || this->database->hmiDoor6CLoseObstacleA2)
         << this->database->hmiDoor6CloseLockA2 << (this->database->hmiDoor6CloseLockA2 == false);
    this->setDoorState(ui->lblDoor6A2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu7ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu7ValidA2))
         << this->database->hmiDoor7IsolatedA2 << this->database->hmiDoor7EmergencyUnlockA2 << this->database->edcuDoor7EmergencyUnlockRequestA2
         << (this->database->hmiDoor7CloseLockA2 && (this->database->hmiDoor7MinorErrorA2 || this->database->hmiDoor7MajorErrorA2))
         << (this->database->hmiDoor7CloseLockA2 == false && (this->database->hmiDoor7MinorErrorA2 || this->database->hmiDoor7MajorErrorA2))
         << (this->database->hmiDoor7OpenObstacleA2 || this->database->hmiDoor7CLoseObstacleA2)
         << this->database->hmiDoor7CloseLockA2 << (this->database->hmiDoor7CloseLockA2 == false);
    this->setDoorState(ui->lblDoor7A2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu8ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu8ValidA2))
         << this->database->hmiDoor8IsolatedA2 << this->database->hmiDoor8EmergencyUnlockA2 << this->database->edcuDoor8EmergencyUnlockRequestA2
         << (this->database->hmiDoor8CloseLockA2 && (this->database->hmiDoor8MinorErrorA2 || this->database->hmiDoor8MajorErrorA2))
         << (this->database->hmiDoor8CloseLockA2 == false && (this->database->hmiDoor8MinorErrorA2 || this->database->hmiDoor8MajorErrorA2))
         << (this->database->hmiDoor8OpenObstacleA2 || this->database->hmiDoor8CLoseObstacleA2)
         << this->database->hmiDoor8CloseLockA2 << (this->database->hmiDoor8CloseLockA2 == false);
    this->setDoorState(ui->lblDoor8A2, door, true);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu9ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu9ValidA2))
         << this->database->hmiDoor9IsolatedA2 << this->database->hmiDoor9EmergencyUnlockA2 << this->database->edcuDoor9EmergencyUnlockRequestA2
         << (this->database->hmiDoor9CloseLockA2 && (this->database->hmiDoor9MinorErrorA2 || this->database->hmiDoor9MajorErrorA2))
         << (this->database->hmiDoor9CloseLockA2 == false && (this->database->hmiDoor9MinorErrorA2 || this->database->hmiDoor9MajorErrorA2))
         << (this->database->hmiDoor9OpenObstacleA2 || this->database->hmiDoor9CLoseObstacleA2)
         << this->database->hmiDoor9CloseLockA2 << (this->database->hmiDoor9CloseLockA2 == false);
    this->setDoorState(ui->lblDoor9A2, door, false);

    door.clear();
    door << ((this->database->edcu1OnlineA2 && this->database->edcu1Mdcu10ValidA2) || (this->database->edcu2OnlineA2 && this->database->edcu2Mdcu10ValidA2))
         << this->database->hmiDoor10IsolatedA2 << this->database->hmiDoor10EmergencyUnlockA2 << this->database->edcuDoor10EmergencyUnlockRequestA2
         << (this->database->hmiDoor10CloseLockA2 && (this->database->hmiDoor10MinorErrorA2 || this->database->hmiDoor10MajorErrorA2))
         << (this->database->hmiDoor10CloseLockA2 == false && (this->database->hmiDoor10MinorErrorA2 || this->database->hmiDoor10MajorErrorA2))
         << (this->database->hmiDoor10OpenObstacleA2 || this->database->hmiDoor10CLoseObstacleA2)
         << this->database->hmiDoor10CloseLockA2 << (this->database->hmiDoor10CloseLockA2 == false);
    this->setDoorState(ui->lblDoor10A2, door, true);
}

void VehicleState::setDoorState(QLabel *label, QList<bool> signal, bool isUpPosition)
{
    if (signal.size() != 9)
    {
        _LOG << "the size of signal is not right";

        return;
    }

    // 0: offline or can not check, zero valid
    // 1: isolate
    // 2: emergency
    // 3: emergency request
    // 4: close fault
    // 5: open fault
    // 6: block
    // 7: close
    // 8: open
    if (false == signal.at(0))
    {
        label->setStyleSheet(_DOOR_OFFLINE);
    }
    else if (signal.at(1))
    {
        label->setStyleSheet(_DOOR_CUTOUT);
    }
    else if (signal.at(2))
    {
        label->setStyleSheet(_DOOR_EMERGENCY);
    }
    else if (signal.at(3))  // emergency request, blink
    {
        if (this->timer % 3 == 0)
        {
            label->setStyleSheet(_DOOR_OFFLINE);
        }
        else
        {
            label->setStyleSheet(_DOOR_EMERGENCY);
        }
    }
    else if (signal.at(4))
    {
        label->setStyleSheet(_DOOR_CLOSE_FAULT);
    }
    else if (signal.at(5))
    {
        if (isUpPosition)
        {
            label->setStyleSheet(_DOOR_OPEN_FAULT_UP);
        }
        else
        {
            label->setStyleSheet(_DOOR_OPEN_FAULT_DOWN);
        }
    }
    else if (signal.at(6))
    {
        label->setStyleSheet(_DOOR_BLOCK);
    }
    else if (signal.at(7))
    {
        label->setStyleSheet(_DOOR_CLOSE);
    }
    else if (signal.at(8))
    {
        label->setStyleSheet(_DOOR_OPEN);
    }
}

void VehicleState::setCoupleState()
{
    // coupling A1
    if (this->database->trainReconnectionA1)
    {
        ui->lblCouplingA1->show();
    }
    else
    {
        ui->lblCouplingA1->hide();
    }

    // coupling A2
    if (this->database->trainReconnectionA2)
    {
        ui->lblCouplingA2->show();
    }
    else
    {
        ui->lblCouplingA2->hide();
    }
}

void VehicleState::setCabinState()
{
    // cabin state A1
    if (this->database->ccuCabinActiveA1)
    {
        ui->lblHeadA1->setStyleSheet(_CABIN_ACTIVE);
    }
    else
    {
        ui->lblHeadA1->setStyleSheet(_CABIN_UNACTIVE);
    }

    // cabin state A2
    if (this->database->ccuCabinActiveA2)
    {
        ui->lblHeadA2->setStyleSheet(_CABIN_ACTIVE);
    }
    else
    {
        ui->lblHeadA2->setStyleSheet(_CABIN_UNACTIVE);
    }

    // cabin direction A1
    if (false == this->database->ccuCabinActiveA1)
    {
        ui->lblHeadA1->setText(QString(""));
    }
    else if (this->database->ccuDirectionForward)
    {
        ui->lblHeadA1->setText(QString("◀"));
    }
    else if (this->database->ccuDirectionBackward)
    {
        ui->lblHeadA1->setText(QString("▶"));
    }
    else
    {
        ui->lblHeadA1->setText(QString(""));
    }

    // cabin direction A2
    if (false == this->database->ccuCabinActiveA2)
    {
        ui->lblHeadA2->setText(QString(""));
    }
    else if (this->database->ccuDirectionForward)
    {
        ui->lblHeadA2->setText(QString("▶"));
    }
    else if (this->database->ccuDirectionBackward)
    {
        ui->lblHeadA2->setText(QString("◀"));
    }
    else
    {
        ui->lblHeadA2->setText(QString(""));
    }

    // cabin door A1
    if (this->database->cabLeftDoorClosedA1)
    {
        ui->lblCabinDoorLeftA1->setStyleSheet(_CABIN_DOOR_CLOSE);
    }
    else
    {
        ui->lblCabinDoorLeftA1->setStyleSheet(_CABIN_DOOR_OPEN);
    }

    if (this->database->cabRightDoorClosedA1)
    {
        ui->lblCabinDoorRightA1->setStyleSheet(_CABIN_DOOR_CLOSE);
    }
    else
    {
        ui->lblCabinDoorRightA1->setStyleSheet(_CABIN_DOOR_OPEN);
    }

    // cabin door A2
    if (this->database->cabLeftDoorClosedA2)
    {
        ui->lblCabinDoorLeftA2->setStyleSheet(_CABIN_DOOR_CLOSE);
    }
    else
    {
        ui->lblCabinDoorLeftA2->setStyleSheet(_CABIN_DOOR_OPEN);
    }

    if (this->database->cabRightDoorClosedA2)
    {
        ui->lblCabinDoorRightA2->setStyleSheet(_CABIN_DOOR_CLOSE);
    }
    else
    {
        ui->lblCabinDoorRightA2->setStyleSheet(_CABIN_DOOR_OPEN);
    }

    // cabin emergency door A1
    if (this->database->emerEvacDoorOpenA1)
    {
        ui->lblSaftyDoorA1->setStyleSheet(_CABIN_EMERGENCY_DOOR_OPEN);
    }
    else
    {
        ui->lblSaftyDoorA1->setStyleSheet(_CABIN_EMERGENCY_DOOR_CLOSE);
    }

    // cabin emergency door A2
    if (this->database->emerEvacDoorOpenA2)
    {
        ui->lblSaftyDoorA2->setStyleSheet(_CABIN_EMERGENCY_DOOR_OPEN);
    }
    else
    {
        ui->lblSaftyDoorA2->setStyleSheet(_CABIN_EMERGENCY_DOOR_CLOSE);
    }

    // cabin aisle door A1
    if (this->database->accessDoorOpenA1)
    {
        ui->lblHeadDoorA1->setStyleSheet(_CABIN_AISLE_DOOR_OPEN);
    }
    else
    {
        ui->lblHeadDoorA1->setStyleSheet(_CABIN_AISLE_DOOR_CLOSE);
    }

    // cabin aisle door A2
    if (this->database->accessDoorOpenA2)
    {
        ui->lblHeadDoorA2->setStyleSheet(_CABIN_AISLE_DOOR_OPEN);
    }
    else
    {
        ui->lblHeadDoorA2->setStyleSheet(_CABIN_AISLE_DOOR_CLOSE);
    }
}

void VehicleState::setPantographState()
{
    // B1
    if (this->database->pantographIsolatedB1)
    {
        ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_CUTOUT);
    }
    else if (this->database->ccuPantographErrorB1 && this->database->ccuPantographUpB1)
    {
        ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_UP_ERROR);
    }
    else if (this->database->ccuPantographErrorB1 && this->database->pantographDropDownB1)
    {
        ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_DOWN_ERROR);
    }
    else if (this->database->ccuPantographErrorB1)
    {
        ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_DOWN_ERROR);
    }
    else if (this->database->pantographDropDownB1)
    {
        ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_DOWN);
    }
    else if (this->database->ccuPantographUpB1)
    {
        ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_UP);
    }
    // deleted by Deng Ran on the 04th of May 2017 for ignoring the unknown state
    // else
    // {
    //     ui->lblPantographB1->setStyleSheet(_PANTOGRAPH_UNKNOWN_STATE);
    // }

    // D1
    if (this->database->pantographCutoutD1)
    {
        ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_CUTOUT);
    }
    else if (this->database->ccuPantographErrorD1 && this->database->ccuPantographUpD1)
    {
        ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_UP_ERROR);
    }
    else if (this->database->ccuPantographErrorD1 && this->database->pantographDropDownD1)
    {
        ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_DOWN_ERROR);
    }
    else if (this->database->ccuPantographErrorD1)
    {
        ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_DOWN_ERROR);
    }
    else if (this->database->pantographDropDownD1)
    {
        ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_DOWN);
    }
    else if (this->database->ccuPantographUpD1)
    {
        ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_UP);
    }
    // deleted by Deng Ran on the 04th of May 2017 for ignoring the unknown state
    // else
    // {
    //     ui->lblPantographD1->setStyleSheet(_PANTOGRAPH_UNKNOWN_STATE);
    // }

    // B2
    if (this->database->pantographIsolatedB2)
    {
        ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_CUTOUT);
    }
    else if (this->database->ccuPantographErrorB2 && this->database->ccuPantographUpB2)
    {
        ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_UP_ERROR);
    }
    else if (this->database->ccuPantographErrorB2 && this->database->pantographDropDownB2)
    {
        ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_DOWN_ERROR);
    }
    else if (this->database->ccuPantographErrorB2)
    {
        ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_DOWN_ERROR);
    }
    else if (this->database->pantographDropDownB2)
    {
        ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_DOWN);
    }
    else if (this->database->ccuPantographUpB2)
    {
        ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_UP);
    }
    // deleted by Deng Ran on the 04th of May 2017 for ignoring the unknown state
    // else
    // {
    //     ui->lblPantographB2->setStyleSheet(_PANTOGRAPH_UNKNOWN_STATE);
    // }
}

void VehicleState::setTractionState(QLabel *traction, QList<bool> state)
{
    if (state.size() != 5)
    {
        _LOG << "the size of state is not 5, please check it";

        return;
    }

    if (false == state.at(0))    // offline
    {
        traction->setStyleSheet(_TRACTION_UNKNOWN_STATE);
    }
    else if (state.at(1))   // cut out
    {
        traction->setStyleSheet(_TRACTION_CUTOUT);
    }
    else if (state.at(2))   // major fault
    {
        traction->setStyleSheet(_TRACTION_MAJOR_ERROR);
    }
    else if (state.at(3))   // minor fault
    {
        traction->setStyleSheet(_TRACTION_MINOR_ERROR);
    }
    else if (false == state.at(4))   // stop
    {
        traction->setStyleSheet(_TRACTION_STOP);
    }
    else if (true == state.at(4))   // run
    {
        traction->setStyleSheet(_TRACTION_RUN);
    }
    else
    {
        traction->setStyleSheet(_TRACTION_UNKNOWN_STATE);
    }
}

void VehicleState::setGeneratrixState()
{
    // B1
    if (false == this->database->riom2GwOnline)
    {
        ui->lblGeneratrixB1->setStyleSheet(_GENERATRIX_BRAKER_OFFLINE);
    }
    else if (this->database->kmk1ContactorStateB1)
    {
        ui->lblGeneratrixB1->setStyleSheet(_GENERATRIX_BRAKER_ON);
    }
    else
    {
        ui->lblGeneratrixB1->setStyleSheet(_GENERATRIX_BRAKER_OFF);
    }

    // D1
    if (false == this->database->riom4GwOnline)
    {
        ui->lblGeneratrixD1->setStyleSheet(_GENERATRIX_BRAKER_OFFLINE);
    }
    else if (this->database->kmk1ContactorStateD1)
    {
        ui->lblGeneratrixD1->setStyleSheet(_GENERATRIX_BRAKER_ON);
    }
    else
    {
        ui->lblGeneratrixD1->setStyleSheet(_GENERATRIX_BRAKER_OFF);
    }

    // B2
    if (false == this->database->riom7GwOnline)
    {
        ui->lblGeneratrixB2->setStyleSheet(_GENERATRIX_BRAKER_OFFLINE);
    }
    else if (this->database->kmk1ContactorStateB2)
    {
        ui->lblGeneratrixB2->setStyleSheet(_GENERATRIX_BRAKER_ON);
    }
    else
    {
        ui->lblGeneratrixB2->setStyleSheet(_GENERATRIX_BRAKER_OFF);
    }
}

void VehicleState::setSivState()
{
    // A1
    if (false == this->database->siv1Online)
    {
        ui->lblSivA1->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivMajorErrorA1)
    {
        ui->lblSivA1->setStyleSheet(_SIV_MAJOR_ERROR);
    }
    else if (this->database->sivMinorErrorA1)
    {
        ui->lblSivA1->setStyleSheet(_SIV_MINOR_ERROR);
    }
    else if (false == this->database->sivAcuBusActiveA1)
    {
        ui->lblSivA1->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivAcuBusActiveA1)
    {
        ui->lblSivA1->setStyleSheet(_SIV_ON);
    }
    else
    {
        ui->lblSivA1->setStyleSheet(_SIV_UNKNOWN_STATE);
    }

    // C1
    if (false == this->database->siv2Online)
    {
        ui->lblSivC1->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivMajorErrorC1)
    {
        ui->lblSivC1->setStyleSheet(_SIV_MAJOR_ERROR);
    }
    else if (this->database->sivMinorErrorC1)
    {
        ui->lblSivC1->setStyleSheet(_SIV_MINOR_ERROR);
    }
    else if (false == this->database->sivAcuBusActiveC1)
    {
        ui->lblSivC1->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivAcuBusActiveC1)
    {
        ui->lblSivC1->setStyleSheet(_SIV_ON);
    }
    else
    {
        ui->lblSivC1->setStyleSheet(_SIV_UNKNOWN_STATE);
    }

    // C2
    if (false == this->database->siv3Online)
    {
        ui->lblSivC2->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivMajorErrorC2)
    {
        ui->lblSivC2->setStyleSheet(_SIV_MAJOR_ERROR);
    }
    else if (this->database->sivMinorErrorC2)
    {
        ui->lblSivC2->setStyleSheet(_SIV_MINOR_ERROR);
    }
    else if (false == this->database->sivAcuBusActiveC2)
    {
        ui->lblSivC2->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivAcuBusActiveC2)
    {
        ui->lblSivC2->setStyleSheet(_SIV_ON);
    }
    else
    {
        ui->lblSivC2->setStyleSheet(_SIV_UNKNOWN_STATE);
    }

    // A2
    if (false == this->database->siv4Online)
    {
        ui->lblSivA2->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivMajorErrorA2)
    {
        ui->lblSivA2->setStyleSheet(_SIV_MAJOR_ERROR);
    }
    else if (this->database->sivMinorErrorA2)
    {
        ui->lblSivA2->setStyleSheet(_SIV_MINOR_ERROR);
    }
    else if (false == this->database->sivAcuBusActiveA2)
    {
        ui->lblSivA2->setStyleSheet(_SIV_OFF);
    }
    else if (this->database->sivAcuBusActiveA2)
    {
        ui->lblSivA2->setStyleSheet(_SIV_ON);
    }
    else
    {
        ui->lblSivA2->setStyleSheet(_SIV_UNKNOWN_STATE);
    }
}

void VehicleState::setDcdcState()
{
    if (false == this->database->dcdc1Online)
    {
        ui->lblDcdcA1->setStyleSheet(_DCDC_OFF);
    }
    else if (this->database->dcdcMajorErrorA1)
    {
        ui->lblDcdcA1->setStyleSheet(_DCDC_MAJOR_ERROR);
    }
    else if (this->database->dcdcMinorErrorA1)
    {
        ui->lblDcdcA1->setStyleSheet(_DCDC_MINOR_ERROR);
    }
    else if (this->database->dcdcNormalA1)
    {
        ui->lblDcdcA1->setStyleSheet(_DCDC_ON);
    }
    else
    {
        ui->lblDcdcA1->setStyleSheet(_DCDC_OFF);
    }

    if (false == this->database->dcdc2Online)
    {
        ui->lblDcdcA2->setStyleSheet(_DCDC_OFF);
    }
    else if (this->database->dcdcMajorErrorA2)
    {
        ui->lblDcdcA2->setStyleSheet(_DCDC_MAJOR_ERROR);
    }
    else if (this->database->dcdcMinorErrorA2)
    {
        ui->lblDcdcA2->setStyleSheet(_DCDC_MINOR_ERROR);
    }
    else if (this->database->dcdcNormalA2)
    {
        ui->lblDcdcA2->setStyleSheet(_DCDC_ON);
    }
    else
    {
        ui->lblDcdcA2->setStyleSheet(_DCDC_OFF);
    }
}

void VehicleState::setFireAlarmState()
{
    if (this->database->hmiFireAlarmA1)
    {
        ui->lblFireAlarmA1->show();
    }
    else
    {
        ui->lblFireAlarmA1->hide();
    }

    if (this->database->hmiFireAlarmB1)
    {
        ui->lblFireAlarmB1->show();
    }
    else
    {
        ui->lblFireAlarmB1->hide();
    }

    if (this->database->hmiFireAlarmC1)
    {
        ui->lblFireAlarmC1->show();
    }
    else
    {
        ui->lblFireAlarmC1->hide();
    }

    if (this->database->hmiFireAlarmD1)
    {
        ui->lblFireAlarmD1->show();
    }
    else
    {
        ui->lblFireAlarmD1->hide();
    }

    if (this->database->hmiFireAlarmD2)
    {
        ui->lblFireAlarmD2->show();
    }
    else
    {
        ui->lblFireAlarmD2->hide();
    }

    if (this->database->hmiFireAlarmC2)
    {
        ui->lblFireAlarmC2->show();
    }
    else
    {
        ui->lblFireAlarmC2->hide();
    }

    if (this->database->hmiFireAlarmB2)
    {
        ui->lblFireAlarmB2->show();
    }
    else
    {
        ui->lblFireAlarmB2->hide();
    }

    if (this->database->hmiFireAlarmA2)
    {
        ui->lblFireAlarmA2->show();
    }
    else
    {
        ui->lblFireAlarmA2->hide();
    }
}

void VehicleState::setCompressorState()
{
    bool sivCombinationMode = this->database->kmk1ContactorStateB1 && this->database->kmk1ContactorStateD1
                                && this->database->kmk1ContactorStateB2,
         sivAtLeastOneWork = this->database->sivAcuBusActiveA1 || this->database->sivAcuBusActiveA2
                                || this->database->sivAcuBusActiveC1 || this->database->sivAcuBusActiveC2;

    // the compressor in B1
    if (false == this->database->riom2GwOnline)
    {
        ui->lblCompressorB1->setStyleSheet(_COMPRESSOR_OFFLINE);
    }
    else if (this->database->compressorOverloadB1)
    {
        ui->lblCompressorB1->setStyleSheet(_COMPRESSOR_WARNING);
    }
    else if (this->database->compressorRunB1 && sivCombinationMode && sivAtLeastOneWork)
    {
        ui->lblCompressorB1->setStyleSheet(_COMPRESSOR_ON);
    }
    else if (this->database->compressorRunB1 && false == sivCombinationMode && this->database->sivAcuBusActiveA1)
    {
        ui->lblCompressorB1->setStyleSheet(_COMPRESSOR_ON);
    }
    else
    {
        ui->lblCompressorB1->setStyleSheet(_COMPRESSOR_OFF);
    }

    // the compressor in B2
    if (false == this->database->riom2GwOnline)
    {
        ui->lblCompressorB2->setStyleSheet(_COMPRESSOR_OFFLINE);
    }
    else if (this->database->compressorOverloadB2)
    {
        ui->lblCompressorB2->setStyleSheet(_COMPRESSOR_WARNING);
    }
    else if (this->database->compressorRunB2 && sivCombinationMode && sivAtLeastOneWork)
    {
        ui->lblCompressorB2->setStyleSheet(_COMPRESSOR_ON);
    }
    else if (this->database->compressorRunB2 && false == sivCombinationMode && this->database->sivAcuBusActiveA2)
    {
        ui->lblCompressorB2->setStyleSheet(_COMPRESSOR_ON);
    }
    else
    {
        ui->lblCompressorB2->setStyleSheet(_COMPRESSOR_OFF);
    }
}

void VehicleState::setMainBreakerState(QLabel *label, bool online, bool state)
{
    if (false == online)
    {
        label->setStyleSheet(_MAIN_BREAKER_OFFLINE);
    }
    else if (state)
    {
        label->setStyleSheet(_MAIN_BREAKER_ON);
    }
    else
    {
        label->setStyleSheet(_MAIN_BREAKER_OFF);
    }
}

void VehicleState::setParkingBrakeState()
{
    // the parking brake in A1
    if (false == this->database->bcu1Online && false == this->database->bcu2Online)
    {
        ui->lblParkingBrakeA1->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseA1)
    {
        ui->lblParkingBrakeA1->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeA1->show();
    }
    else
    {
        ui->lblParkingBrakeA1->hide();
    }

    // the parking brake in B1
    if (false == this->database->bcu1Online && false == this->database->bcu2Online)
    {
        ui->lblParkingBrakeB1->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseB1)
    {
        ui->lblParkingBrakeB1->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeB1->show();
    }
    else
    {
        ui->lblParkingBrakeB1->hide();
    }

    // the parking brake in C1
    if (false == this->database->bcu1Online && false == this->database->bcu2Online)
    {
        ui->lblParkingBrakeC1->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseC1)
    {
        ui->lblParkingBrakeC1->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeC1->show();
    }
    else
    {
        ui->lblParkingBrakeC1->hide();
    }

    // the parking brake in D1
    if (false == this->database->bcu1Online && false == this->database->bcu2Online)
    {
        ui->lblParkingBrakeD1->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseD1)
    {
        ui->lblParkingBrakeD1->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeD1->show();
    }
    else
    {
        ui->lblParkingBrakeD1->hide();
    }

    // the parking brake in D2
    if (false == this->database->bcu3Online && false == this->database->bcu4Online)
    {
        ui->lblParkingBrakeD2->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseD2)
    {
        ui->lblParkingBrakeD2->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeD2->show();
    }
    else
    {
        ui->lblParkingBrakeD2->hide();
    }

    // the parking brake in C2
    if (false == this->database->bcu3Online && false == this->database->bcu4Online)
    {
        ui->lblParkingBrakeC2->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseC2)
    {
        ui->lblParkingBrakeC2->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeC2->show();
    }
    else
    {
        ui->lblParkingBrakeC2->hide();
    }

    // the parking brake in B2
    if (false == this->database->bcu3Online && false == this->database->bcu4Online)
    {
        ui->lblParkingBrakeB2->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseB2)
    {
        ui->lblParkingBrakeB2->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeB2->show();
    }
    else
    {
        ui->lblParkingBrakeB2->hide();
    }

    // the parking brake in A2
    if (false == this->database->bcu3Online && false == this->database->bcu4Online)
    {
        ui->lblParkingBrakeA2->setStyleSheet(_PARKING_BRAKE_OFFLINE);
    }
    else if (false == this->database->hmiBogie1ParkingBrakeReleaseA2)
    {
        ui->lblParkingBrakeA2->setStyleSheet(_PARKING_BRAKE_APPLY);
        ui->lblParkingBrakeA2->show();
    }
    else
    {
        ui->lblParkingBrakeA2->hide();
    }
}

void VehicleState::setAirBrakeState(QLabel *label, QList<bool> states)
{
    // 0: offline
    // 1: isolate
    // 2: error apply
    // 3: error release
    // 4: apply
    // 5: release
    if (states.size() != 6)
    {
        _LOG << "the size of air brake signal is not 5, please check it";

        return;
    }

    if (false == states.at(0))
    {
        label->setStyleSheet(_AIR_BRAKE_OFFLINE);
    }
    else if (states.at(1))
    {
        label->setStyleSheet(_AIR_BRAKE_ISOLATE);
    }
    else if (states.at(2))
    {
        label->setStyleSheet(_AIR_BRAKE_ERROR_APPLY);
    }
    else if (states.at(3))
    {
        label->setStyleSheet(_AIR_BRAKE_ERROR_RELEASE);
    }
    else if (states.at(4))
    {
        label->setStyleSheet(_AIR_BRAKE_APPLY);
    }
    else if (states.at(5))
    {
        label->setStyleSheet(_AIR_BRAKE_RELEASE);
    }
    else
    {
        label->setStyleSheet(_AIR_BRAKE_OFFLINE);

    }
}

void VehicleState::setLimitedSpeed(unsigned short int speed)
{
    if (65535 / 10 == speed)
    {
        ui->lblTip1->hide();
    }
    else
    {
        ui->lblTip1->setText(QString::number(speed) + QString("km/h限行"));
        ui->lblTip1->show();
    }
}

void VehicleState::setUnselfCheck(QList<bool> states)
{
    // 0: 24h
    // 1: 26h

    if (states.at(0))
    {
        ui->lblTip2->setText(QString("制动26小时未自检"));
        ui->lblTip2->show();
    }
    else if (states.at(1))
    {
        ui->lblTip2->setText(QString("制动24小时未自检"));
        ui->lblTip2->show();
    }
    else
    {
        ui->lblTip2->hide();
    }
}

void VehicleState::setSlideState(bool slide, bool idle)
{
    if (slide)
    {
        ui->lblTip3->setText(QString("滑行"));
        ui->lblTip3->show();
    }
    else if (idle)
    {
        ui->lblTip3->setText(QString("空转"));
        ui->lblTip3->show();
    }
    else
    {
        ui->lblTip3->hide();
    }
}

void VehicleState::setTractionForbidden(bool state)
{
    if (state)
    {
        ui->lblTip5->setText(QString("牵引封锁（软件）"));
        ui->lblTip5->show();
    }
    else
    {
        ui->lblTip5->hide();
    }
}

void VehicleState::setEmergencyBrake(bool &emergencyBrake, bool &fastBrake)
{  
    if (emergencyBrake)
    {
        ui->lblTip4->setText(QString("紧急制动施加"));
        ui->lblTip4->setStyleSheet("color: red; border: 0px;");
        ui->lblTip4->show();
    }
    else if (fastBrake)
    {
        ui->lblTip4->setText(QString("快速制动施加"));
        ui->lblTip4->setStyleSheet("color: red; border: 0px;");
        ui->lblTip4->show();
    }
    else
    {
        ui->lblTip4->hide();
    }
}

void VehicleState::setDoorSaftyLineState(QLabel *label, bool state)
{
    if (state)
    {
        label->setStyleSheet(_DOOR_SAFTY_LINE_CLOSE);
    }
    else
    {
        label->setStyleSheet(_DOOR_SAFTY_LINE_OPEN);
    }
}

void VehicleState::on_btnConfirm_clicked()
{
    this->crrcFault->confirmFault();

    _LOG << "the user confirm a error named" << ui->lblConfirmFault->text();
}


void VehicleState::setConfirmFault()
{
    ui->lblErrorCounter->setText(QString::number(this->crrcFault->getConfirmFaultListSize()));
    ui->lblConfirmFault->setText(this->crrcFault->getCurrentConfirmFault());
}

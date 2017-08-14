#include "bcuparameters.h"
#include "ui_bcuparameters.h"
#include "vehiclelogo.h"
#include "tableacontrol.h"

BcuParameters::BcuParameters(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::BcuParameters)
{
    ui->setupUi(this);

    this->tableControl = new TableAControl(this);
    this->tableControl->setGeometry(5, 98, this->tableControl->width(), this->tableControl->height());
    this->tableControl->show();

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(123, 10, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();
}

BcuParameters::~BcuParameters()
{
    delete ui;
}

void BcuParameters::updatePage()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("架1制动风缸压力(Bar)")
            << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureA1) << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureB1)
            << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureC1) << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureD1)
            << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureD2) << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureC2)
            << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureB2) << QString::number(this->database->hmiBogie1BrakeAirCylinderPressureA2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("架1停放制动缸压力(Bar)")
            << QString::number(this->database->hmiParkingCylinderPressureA1) << QString::number(this->database->hmiParkingCylinderPressureB1)
            << QString::number(this->database->hmiParkingCylinderPressureC1) << QString::number(this->database->hmiParkingCylinderPressureD1)
            << QString::number(this->database->hmiParkingCylinderPressureD2) << QString::number(this->database->hmiParkingCylinderPressureC2)
            << QString::number(this->database->hmiParkingCylinderPressureB2) << QString::number(this->database->hmiParkingCylinderPressureA2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("架1制动缸压力(Bar)")
           << QString::number(this->database->hmiBogie1BrakeCylinderPressureA1) << QString::number(this->database->hmiBogie1BrakeCylinderPressureB1)
           << QString::number(this->database->hmiBogie1BrakeCylinderPressureC1) << QString::number(this->database->hmiBogie1BrakeCylinderPressureD1)
           << QString::number(this->database->hmiBogie1BrakeCylinderPressureD2) << QString::number(this->database->hmiBogie1BrakeCylinderPressureC2)
           << QString::number(this->database->hmiBogie1BrakeCylinderPressureB2) << QString::number(this->database->hmiBogie1BrakeCylinderPressureA2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("架1空簧压力(Bar)")
           << QString::number(this->database->hmiBogie1AirSpringPressureA1) << QString::number(this->database->hmiBogie1AirSpringPressureB1)
           << QString::number(this->database->hmiBogie1AirSpringPressureC1) << QString::number(this->database->hmiBogie1AirSpringPressureD1)
           << QString::number(this->database->hmiBogie1AirSpringPressureD2) << QString::number(this->database->hmiBogie1AirSpringPressureC2)
           << QString::number(this->database->hmiBogie1AirSpringPressureB2) << QString::number(this->database->hmiBogie1AirSpringPressureA2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("架2制动风缸压力(Bar)")
           << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureA1) << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureB1)
           << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureC1) << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureD1)
           << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureD2) << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureC2)
           << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureB2) << QString::number(this->database->hmiBogie2BrakeAirCylinderPressureA2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("总风压力(Bar)")
            << QString::number(this->database->hmiTotalPressureA1) << QString::number(0)
            << QString::number(this->database->hmiTotalPressureC1) << QString::number(this->database->hmiTotalPressureD1)
            << QString::number(this->database->hmiTotalPressureD2) << QString::number(this->database->hmiTotalPressureC2)
            << QString::number(0) << QString::number(this->database->hmiTotalPressureA2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("架2制动缸压力(Bar)")
           << QString::number(this->database->hmiBogie2BrakeCylinderPressureA1) << QString::number(this->database->hmiBogie2BrakeCylinderPressureB1)
           << QString::number(this->database->hmiBogie2BrakeCylinderPressureC1) << QString::number(this->database->hmiBogie2BrakeCylinderPressureD1)
           << QString::number(this->database->hmiBogie2BrakeCylinderPressureD2) << QString::number(this->database->hmiBogie2BrakeCylinderPressureC2)
           << QString::number(this->database->hmiBogie2BrakeCylinderPressureB2) << QString::number(this->database->hmiBogie2BrakeCylinderPressureA2);
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("架2空簧压力(Bar)")
           << QString::number(this->database->hmiBogie2AirSpringPressureA1) << QString::number(this->database->hmiBogie2AirSpringPressureB1)
           << QString::number(this->database->hmiBogie2AirSpringPressureC1) << QString::number(this->database->hmiBogie2AirSpringPressureD1)
           << QString::number(this->database->hmiBogie2AirSpringPressureD2) << QString::number(this->database->hmiBogie2AirSpringPressureC2)
           << QString::number(this->database->hmiBogie2AirSpringPressureB2) << QString::number(this->database->hmiBogie2AirSpringPressureA2);
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("") << QString("") << QString("")
           << QString("") << QString("") << QString("") << QString("");
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("") << QString("") << QString("")
           << QString("") << QString("") << QString("") << QString("");
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("") << QString("") << QString("")
           << QString("") << QString("") << QString("") << QString("");
    this->tableControl->fillLine(11, signal);
}

void BcuParameters::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void BcuParameters::showEvent(QShowEvent *)
{
    this->vehicleLogo->setLeftHeadState(false);
    this->vehicleLogo->setRightHeadState(false);

    this->vehicleLogo->setA1Number(QString("A1"));
    this->vehicleLogo->setB1Number(QString("B1"));
    this->vehicleLogo->setC1Number(QString("C1"));
    this->vehicleLogo->setD1Number(QString("D1"));
    this->vehicleLogo->setD2Number(QString("D2"));
    this->vehicleLogo->setC2Number(QString("C2"));
    this->vehicleLogo->setB2Number(QString("B2"));
    this->vehicleLogo->setA2Number(QString("A2"));
}

void BcuParameters::on_btnDcu_pressed()
{
    this->changePage(uDcuParametersPage);
}

void BcuParameters::on_btnSiv_pressed()
{
    this->changePage(uSivParametersPage);
}

void BcuParameters::on_btnOthers_pressed()
{
    this->changePage(uOthersParametersPage);
}

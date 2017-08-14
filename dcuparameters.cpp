#include "dcuparameters.h"
#include "ui_dcuparameters.h"
#include "vehiclelogo.h"
#include "tableacontrol.h"
#include "devicestatenavigator.h"

#define _MAX_PAGE 3

DcuParameters::DcuParameters(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DcuParameters)
{
    ui->setupUi(this);

    this->tableControl = new TableAControl(this);
    this->tableControl->setGeometry(5, 98, this->tableControl->width(), this->tableControl->height());
    this->tableControl->show();

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(123, 10, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();

    this->page = 1;
}

DcuParameters::~DcuParameters()
{
    delete ui;
}

void DcuParameters::updatePage()
{
    switch (this->page)
    {
    case 1:
        this->showPage1();
        break;
    case 2:
        this->showPage2();
        break;
    case 3:
        this->showPage3();
        break;
    }

    // update page number
    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

void DcuParameters::showEvent(QShowEvent *)
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

void DcuParameters::showPage1()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("充电接触器状态")
           << QString("- -") << this->boolToString(this->database->dcuChargingContactorB1)
           << this->boolToString(this->database->dcuChargingContactorC1) << this->boolToString(this->database->dcuChargingContactorD1)
           << this->boolToString(this->database->dcuChargingContactorD2) << this->boolToString(this->database->dcuChargingContactorC2)
           << this->boolToString(this->database->dcuChargingContactorB2) << QString("- -");
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("短接接触器状态")
           << QString("- -") << this->boolToString(this->database->dcuShortOutContactorB1)
           << this->boolToString(this->database->dcuShortOutContactorC1) << this->boolToString(this->database->dcuShortOutContactorD1)
           << this->boolToString(this->database->dcuShortOutContactorD2) << this->boolToString(this->database->dcuShortOutContactorC2)
           << this->boolToString(this->database->dcuShortOutContactorB2) << QString("- -");
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("电机1转速(r/min)")
           << QString("- -") << QString::number(this->database->motor1SpeedB1)
           << QString::number(this->database->motor1SpeedC1) << QString::number(this->database->motor1SpeedD1)
           << QString::number(this->database->motor1SpeedD2) << QString::number(this->database->motor1SpeedC2)
           << QString::number(this->database->motor1SpeedB2) << QString("- -");
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("电机2转速(r/min)")
           << QString("- -") << QString::number(this->database->motor2SpeedB1)
           << QString::number(this->database->motor2SpeedC1) << QString::number(this->database->motor2SpeedD1)
           << QString::number(this->database->motor2SpeedD2) << QString::number(this->database->motor2SpeedC2)
           << QString::number(this->database->motor2SpeedB2) << QString("- -");
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("电机3转速(r/min)")
           << QString("- -") << QString::number(this->database->motor3SpeedB1)
           << QString::number(this->database->motor3SpeedC1) << QString::number(this->database->motor3SpeedD1)
           << QString::number(this->database->motor3SpeedD2) << QString::number(this->database->motor3SpeedC2)
           << QString::number(this->database->motor3SpeedB2) << QString("- -");
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("电机4转速(r/min)")
           << QString("- -") << QString::number(this->database->motor4SpeedB1)
           << QString::number(this->database->motor4SpeedC1) << QString::number(this->database->motor4SpeedD1)
           << QString::number(this->database->motor4SpeedD2) << QString::number(this->database->motor4SpeedC2)
           << QString::number(this->database->motor4SpeedB2) << QString("- -");
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("电机1温度(℃)")
            << QString("- -") << QString::number(this->database->dcuMotor1TemperatureB1)
            << QString::number(this->database->dcuMotor1TemperatureC1) << QString::number(this->database->dcuMotor1TemperatureD1)
            << QString::number(this->database->dcuMotor1TemperatureD2) << QString::number(this->database->dcuMotor1TemperatureC2)
            << QString::number(this->database->dcuMotor1TemperatureB2) << QString("- -");
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("电机2温度(℃)")
            << QString("- -") << QString::number(this->database->dcuMotor2TemperatureB1)
            << QString::number(this->database->dcuMotor2TemperatureC1) << QString::number(this->database->dcuMotor2TemperatureD1)
            << QString::number(this->database->dcuMotor2TemperatureD2) << QString::number(this->database->dcuMotor2TemperatureC2)
            << QString::number(this->database->dcuMotor2TemperatureB2) << QString("- -");
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("电机3温度(℃)")
            << QString("- -") << QString::number(this->database->dcuMotor3TemperatureB1)
            << QString::number(this->database->dcuMotor3TemperatureC1) << QString::number(this->database->dcuMotor3TemperatureD1)
            << QString::number(this->database->dcuMotor3TemperatureD2) << QString::number(this->database->dcuMotor3TemperatureC2)
            << QString::number(this->database->dcuMotor3TemperatureB2) << QString("- -");
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("电机4温度(℃)")
            << QString("- -") << QString::number(this->database->dcuMotor4TemperatureB1)
            << QString::number(this->database->dcuMotor4TemperatureC1) << QString::number(this->database->dcuMotor4TemperatureD1)
            << QString::number(this->database->dcuMotor4TemperatureD2) << QString::number(this->database->dcuMotor4TemperatureC2)
            << QString::number(this->database->dcuMotor4TemperatureB2) << QString("- -");
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("复位")
           << QString("- -")
           << this->boolToString(this->database->dcuHardwireResetFeedbackB1) << this->boolToString(this->database->dcuHardwireResetFeedbackC1)
           << this->boolToString(this->database->dcuHardwireResetFeedbackD1) << this->boolToString(this->database->dcuHardwireResetFeedbackD2)
           << this->boolToString(this->database->dcuHardwireResetFeedbackC2) << this->boolToString(this->database->dcuHardwireResetFeedbackB2)
           << QString("- -");
    this->tableControl->fillLine(11, signal);
}

void DcuParameters::showPage2()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("紧急制动")
           << QString("- -")
           << this->boolToString(this->database->dcuEmergencyBrakeFeedbackB1) << this->boolToString(this->database->dcuEmergencyBrakeFeedbackC1)
           << this->boolToString(this->database->dcuEmergencyBrakeFeedbackD1) << this->boolToString(this->database->dcuEmergencyBrakeFeedbackD2)
           << this->boolToString(this->database->dcuEmergencyBrakeFeedbackC2) << this->boolToString(this->database->dcuEmergencyBrakeFeedbackB2)
           << QString("- -");
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("紧急牵引")
           << QString("- -")
           << this->boolToString(this->database->dcuEmergencyTractionFeedbackB1) << this->boolToString(this->database->dcuEmergencyTractionFeedbackC1)
           << this->boolToString(this->database->dcuEmergencyTractionFeedbackD1) << this->boolToString(this->database->dcuEmergencyTractionFeedbackD2)
           << this->boolToString(this->database->dcuEmergencyTractionFeedbackC2) << this->boolToString(this->database->dcuEmergencyTractionFeedbackB2)
           << QString("- -");
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("制动")
            << QString("- -")
            << this->boolToString(this->database->dcuNetBrakeFeedbackB1) << this->boolToString(this->database->dcuNetBrakeFeedbackC1)
            << this->boolToString(this->database->dcuNetBrakeFeedbackD1) << this->boolToString(this->database->dcuNetBrakeFeedbackD2)
            << this->boolToString(this->database->dcuNetBrakeFeedbackC2) << this->boolToString(this->database->dcuNetBrakeFeedbackB2)
            << QString("- -");
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("向后")
            << QString("- -")
            << this->boolToString(this->database->dcuNetBackwardFeedbackB1) << this->boolToString(this->database->dcuNetBackwardFeedbackC1)
            << this->boolToString(this->database->dcuNetBackwardFeedbackD1) << this->boolToString(this->database->dcuNetBackwardFeedbackD2)
            << this->boolToString(this->database->dcuNetBackwardFeedbackC2) << this->boolToString(this->database->dcuNetBackwardFeedbackB2)
            << QString("- -");
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("向前")
            << QString("- -")
            << this->boolToString(this->database->dcuNetForwardFeedbackB1) << this->boolToString(this->database->dcuNetForwardFeedbackC1)
            << this->boolToString(this->database->dcuNetForwardFeedbackD1) << this->boolToString(this->database->dcuNetForwardFeedbackD2)
            << this->boolToString(this->database->dcuNetForwardFeedbackC2) << this->boolToString(this->database->dcuNetForwardFeedbackB2)
            << QString("- -");
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("快速制动")
            << QString("- -")
            << this->boolToString(this->database->dcuFastBrakeFeedbackB1) << this->boolToString(this->database->dcuFastBrakeFeedbackC1)
            << this->boolToString(this->database->dcuFastBrakeFeedbackD1) << this->boolToString(this->database->dcuFastBrakeFeedbackD2)
            << this->boolToString(this->database->dcuFastBrakeFeedbackC2) << this->boolToString(this->database->dcuFastBrakeFeedbackB2)
            << QString("- -");
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("所有制动已缓解")
            << QString("- -")
            << this->boolToString(this->database->dcuEmergencyTractionFeedbackB1) << this->boolToString(this->database->dcuEmergencyTractionFeedbackC1)
            << this->boolToString(this->database->dcuEmergencyTractionFeedbackD1) << this->boolToString(this->database->dcuEmergencyTractionFeedbackD2)
            << this->boolToString(this->database->dcuEmergencyTractionFeedbackC2) << this->boolToString(this->database->dcuEmergencyTractionFeedbackB2)
            << QString("- -");
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("主断状态")
            << QString("- -")
            << this->boolToString(this->database->dcuMainBreakerStateB1) << this->boolToString(this->database->dcuMainBreakerStateC1)
            << this->boolToString(this->database->dcuMainBreakerStateD1) << this->boolToString(this->database->dcuMainBreakerStateD2)
            << this->boolToString(this->database->dcuMainBreakerStateC2) << this->boolToString(this->database->dcuMainBreakerStateB2)
            << QString("- -");
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("牵引")
            << QString("- -")
            << this->boolToString(this->database->dcuNetTractionFeedbackB1) << this->boolToString(this->database->dcuNetTractionFeedbackC1)
            << this->boolToString(this->database->dcuNetTractionFeedbackD1) << this->boolToString(this->database->dcuNetTractionFeedbackD2)
            << this->boolToString(this->database->dcuNetTractionFeedbackC2) << this->boolToString(this->database->dcuNetTractionFeedbackB2)
            << QString("- -");
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("主断允许")
            << QString("- -")
            << this->boolToString(this->database->dcuMainBreakerAllowStateB1) << this->boolToString(this->database->dcuMainBreakerAllowStateC1)
            << this->boolToString(this->database->dcuMainBreakerAllowStateD1) << this->boolToString(this->database->dcuMainBreakerAllowStateD2)
            << this->boolToString(this->database->dcuMainBreakerAllowStateC2) << this->boolToString(this->database->dcuMainBreakerAllowStateB2)
            << QString("- -");
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("主断减载状态")
            << QString("- -")
            << this->boolToString(this->database->dcuMainBreakerDecuceStateB1) << this->boolToString(this->database->dcuMainBreakerDecuceStateC1)
            << this->boolToString(this->database->dcuMainBreakerDecuceStateD1) << this->boolToString(this->database->dcuMainBreakerDecuceStateD2)
            << this->boolToString(this->database->dcuMainBreakerDecuceStateC2) << this->boolToString(this->database->dcuMainBreakerDecuceStateB2)
            << QString("- -");
    this->tableControl->fillLine(11, signal);
}

void DcuParameters::showPage3()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("合HB")
            << QString("- -")
            << this->boolToString(this->database->dcuHardwireHbCloseB1) << this->boolToString(this->database->dcuHardwireHbCloseC1)
            << this->boolToString(this->database->dcuHardwireHbCloseD1) << this->boolToString(this->database->dcuHardwireHbCloseD2)
            << this->boolToString(this->database->dcuHardwireHbCloseC2) << this->boolToString(this->database->dcuHardwireHbCloseB2)
            << QString("- -");
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("分HB")
            << QString("- -")
            << this->boolToString(this->database->dcuHardwireHbOpenB1) << this->boolToString(this->database->dcuHardwireHbOpenC1)
            << this->boolToString(this->database->dcuHardwireHbOpenD1) << this->boolToString(this->database->dcuHardwireHbOpenD2)
            << this->boolToString(this->database->dcuHardwireHbOpenC2) << this->boolToString(this->database->dcuHardwireHbOpenB2)
            << QString("- -");
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("制动电阻风扇继电器反馈")
            << QString("- -")
            << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateB1) << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateC1)
            << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateD1) << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateD2)
            << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateC2) << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateB1)
            << QString("- -");
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("制动电阻风压正常")
            << QString("- -")
            << this->boolToString(this->database->dcuBrakeResistorPressureNormalB1) << this->boolToString(this->database->dcuBrakeResistorPressureNormalC1)
            << this->boolToString(this->database->dcuBrakeResistorPressureNormalD1) << this->boolToString(this->database->dcuBrakeResistorPressureNormalD2)
            << this->boolToString(this->database->dcuBrakeResistorPressureNormalC2) << this->boolToString(this->database->dcuBrakeResistorPressureNormalB2)
            << QString("- -");
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("充电接触器控制命令")
            << QString("- -")
            << this->boolToString(this->database->dcuChargeContactorCommandB1) << this->boolToString(this->database->dcuChargeContactorCommandC1)
            << this->boolToString(this->database->dcuChargeContactorCommandD1) << this->boolToString(this->database->dcuChargeContactorCommandD2)
            << this->boolToString(this->database->dcuChargeContactorCommandC2) << this->boolToString(this->database->dcuChargeContactorCommandB2)
            << QString("- -");
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("短接接触器控制命令")
            << QString("- -")
            << this->boolToString(this->database->dcuShortContactorCommandB1) << this->boolToString(this->database->dcuShortContactorCommandC1)
            << this->boolToString(this->database->dcuShortContactorCommandD1) << this->boolToString(this->database->dcuShortContactorCommandD2)
            << this->boolToString(this->database->dcuShortContactorCommandC2) << this->boolToString(this->database->dcuShortContactorCommandB2)
            << QString("- -");
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("制动电阻风扇继电器控制")
            << QString("- -")
            << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateB1) << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateC1)
            << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateD1) << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateD2)
            << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateC2) << this->boolToString(this->database->dcuBrakeResistorRelayFeedbackStateB2)
            << QString("- -");
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("紧急牵引超速保护")
            << QString("- -")
            << this->boolToString(this->database->dcuEmergencyTractionOverSpeedB1) << this->boolToString(this->database->dcuEmergencyTractionOverSpeedC1)
            << this->boolToString(this->database->dcuEmergencyTractionOverSpeedD1) << this->boolToString(this->database->dcuEmergencyTractionOverSpeedD2)
            << this->boolToString(this->database->dcuEmergencyTractionOverSpeedC2) << this->boolToString(this->database->dcuEmergencyTractionOverSpeedB2)
            << QString("- -");
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

void DcuParameters::on_btnSiv_pressed()
{
    emit this->changePage(uSivParametersPage);
}

void DcuParameters::on_btnBcu_pressed()
{
    emit this->changePage(uBcuParametersPage);
}

void DcuParameters::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

QString DcuParameters::boolToString(bool value)
{
    if (value)
    {
        return QString("true");
    }
    else
    {
        return QString("false");
    }
}

void DcuParameters::on_btnDown_clicked()
{
    if (this->page > 0)
    {
        this->page --;
    }
}

void DcuParameters::on_btnUp_clicked()
{   
    if (this->page < _MAX_PAGE)
    {
        this->page ++;
    }
}

#include "statparameter.h"
#include "ui_statparameter.h"
#include "global.h"
#include "vehiclelogo.h"
#include "tableacontrol.h"

StatParameter::StatParameter(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::StatParameter)
{
    ui->setupUi(this);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(140, 10, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();

    this->tableControl = new TableAControl(this);
    this->tableControl->setGeometry(17, 93, this->tableControl->width(), this->tableControl->height());
    this->tableControl->show();

    this->page = 2;
    ui->btnSiv->setStyleSheet(BUTTON_DOWN);
}

StatParameter::~StatParameter()
{
    delete ui;
}

void StatParameter::updatePage()
{
    if (this->page == 1)
    {
        this->showPage1();
    }
    else
    {
        this->showPage2();
    }
}

void StatParameter::showPage1()
{
    QList<QString> list;
    QString text;

    list << QString("中间电压(V)")
            << QString("--") << QString::number(this->database->middleVoltageB1)
         << QString::number(this->database->middleVoltageC1) << QString::number(this->database->middleVoltageD1)
         << QString::number(this->database->middleVoltageD2) << QString::number(this->database->middleVoltageC2)
         << QString::number(this->database->middleVoltageB2) << QString("--");
    this->tableControl->fillLine(1, list);

    list.clear();
    list << QString("中间电流(A)")
         << QString("--") << QString::number(this->database->middleCurrentB1)
         << QString::number(this->database->middleCurrentC1) << QString::number(this->database->middleCurrentD1)
         << QString::number(this->database->middleCurrentD2) << QString::number(this->database->middleCurrentC2)
         << QString::number(this->database->middleCurrentB2) << QString("--");
    this->tableControl->fillLine(2, list);

    list.clear();
    list << QString("电网电压(V)")
         << QString("--") << QString::number(this->database->lineVoltageB1)
         << QString::number(this->database->lineVoltageC1) << QString::number(this->database->lineVoltageD1)
         << QString::number(this->database->lineVoltageD2) << QString::number(this->database->lineVoltageC2)
         << QString::number(this->database->lineVoltageB2) << QString("--");
    this->tableControl->fillLine(3, list);

    list.clear();
    list << QString("逆变电流(A)")
         << QString("--") << QString::number(this->database->inverterCurrentB1)
         << QString::number(this->database->inverterCurrentC1) << QString::number(this->database->inverterCurrentD1)
         << QString::number(this->database->inverterCurrentD2) << QString::number(this->database->inverterCurrentC2)
         << QString::number(this->database->inverterCurrentB2) << QString("--");
    this->tableControl->fillLine(4, list);

    list.clear();
    list << QString("斩波电流1(A)")
         << QString("--") << QString::number(this->database->chopCurrent1B1)
         << QString::number(this->database->chopCurrent1C1) << QString::number(this->database->chopCurrent1D1)
         << QString::number(this->database->chopCurrent1D2) << QString::number(this->database->chopCurrent1C2)
         << QString::number(this->database->chopCurrent1B2) << QString("--");
    this->tableControl->fillLine(5, list);

    list.clear();
    list << QString("斩波电流2(A)")
         << QString("--") << QString::number(this->database->chopCurrent2B1)
         << QString::number(this->database->chopCurrent2C1) << QString::number(this->database->chopCurrent2D1)
         << QString::number(this->database->chopCurrent2D2) << QString::number(this->database->chopCurrent2C2)
         << QString::number(this->database->chopCurrent2B2) << QString("--");
    this->tableControl->fillLine(6, list);

    list.clear();
    list << QString("电机综合速度(km/h)")
         << QString("--") << QString::number(this->database->averageMotorSpeedB1)
         << QString::number(this->database->averageMotorSpeedC1) << QString::number(this->database->averageMotorSpeedD1)
         << QString::number(this->database->averageMotorSpeedD2) << QString::number(this->database->averageMotorSpeedC2)
         << QString::number(this->database->averageMotorSpeedB2) << QString("--");
    this->tableControl->fillLine(7, list);

    list.clear();
    list << QString("电机1转速(r/min)")
         << QString("--") << QString::number(this->database->motor1SpeedB1)
         << QString::number(this->database->motor1SpeedC1) << QString::number(this->database->motor1SpeedD1)
         << QString::number(this->database->motor1SpeedD2) << QString::number(this->database->motor1SpeedC2)
         << QString::number(this->database->motor1SpeedB2) << QString("--");
    this->tableControl->fillLine(8, list);

    list.clear();
    list << QString("电机2转速(r/min)")
         << QString("--") << QString::number(this->database->motor2SpeedB1)
         << QString::number(this->database->motor2SpeedC1) << QString::number(this->database->motor2SpeedD1)
         << QString::number(this->database->motor2SpeedD2) << QString::number(this->database->motor2SpeedC2)
         << QString::number(this->database->motor2SpeedB2) << QString("--");
    this->tableControl->fillLine(9, list);

    list.clear();
    list << QString("电机3转速(r/min)")
         << QString("--") << QString::number(this->database->motor3SpeedB1)
         << QString::number(this->database->motor3SpeedC1) << QString::number(this->database->motor3SpeedD1)
         << QString::number(this->database->motor3SpeedD2) << QString::number(this->database->motor3SpeedC2)
         << QString::number(this->database->motor3SpeedB2) << QString("--");
    this->tableControl->fillLine(10, list);

    list.clear();
    list << QString("电机4转速(r/min)")
         << QString("--") << QString::number(this->database->motor4SpeedB1)
         << QString::number(this->database->motor4SpeedC1) << QString::number(this->database->motor4SpeedD1)
         << QString::number(this->database->motor4SpeedD2) << QString::number(this->database->motor4SpeedC2)
         << QString::number(this->database->motor4SpeedB2) << QString("--");
    this->tableControl->fillLine(11, list);
}

void StatParameter::showPage2()
{
    QList<QString> list;

    list << QString("输入电压(V)")
         << QString::number(this->database->inputVoltageSivA1) << QString("--")
         << QString::number(this->database->inputVoltageSivC1) << QString("--")
         << QString("--") << QString::number(this->database->inputVoltageSivC2)
         << QString("--") << QString::number(this->database->inputVoltageSivA2);
    this->tableControl->fillLine(1, list);

    list.clear();
    list << QString("中间电容电压(V)")
         << QString::number(this->database->middleCapacitorVoltageSivA1) << QString("--")
         << QString::number(this->database->middleCapacitorVoltageSivC1) << QString("--")
         << QString("--") << QString::number(this->database->middleCapacitorVoltageSivC2)
         << QString("--") << QString::number(this->database->middleCapacitorVoltageSivA2);
    this->tableControl->fillLine(2, list);

    list.clear();
    list << QString("输入电流(A)")
         << QString::number(this->database->inputCurrentSivA1) << QString("--")
         << QString::number(this->database->inputCurrentSivC1) << QString("--")
         << QString("--") << QString::number(this->database->inputCurrentSivC2)
         << QString("--") << QString::number(this->database->inputCurrentSivA2);
    this->tableControl->fillLine(3, list);

    list.clear();
    list << QString("A相桥臂电流(A)")
         << QString::number(this->database->bridgeACurrentA1) << QString("--")
         << QString::number(this->database->bridgeACurrentC1) << QString("--")
         << QString("--") << QString::number(this->database->bridgeACurrentC2)
         << QString("--") << QString::number(this->database->bridgeACurrentA2);
    this->tableControl->fillLine(4, list);

    list.clear();
    list << QString("B相桥臂电流(A)")
         << QString::number(this->database->bridgeBCurrentA1) << QString("--")
         << QString::number(this->database->bridgeBCurrentC1) << QString("--")
         << QString("--") << QString::number(this->database->bridgeBCurrentC2)
         << QString("--") << QString::number(this->database->bridgeBCurrentA2);
    this->tableControl->fillLine(5, list);

    list.clear();
    list << QString("C相桥臂电流(A)")
         << QString::number(this->database->bridgeCCurrentA1) << QString("--")
         << QString::number(this->database->bridgeCCurrentC1) << QString("--")
         << QString("--") << QString::number(this->database->bridgeCCurrentC2)
         << QString("--") << QString::number(this->database->bridgeCCurrentA2);
    this->tableControl->fillLine(6, list);

    list.clear();
    list << QString("交流输出U相电流(A)")
         << QString::number(this->database->acOutputUCurrentA1) << QString("--")
         << QString::number(this->database->acOutputUCurrentC1) << QString("--")
         << QString("--") << QString::number(this->database->acOutputUCurrentC2)
         << QString("--") << QString::number(this->database->acOutputUCurrentA2);
    this->tableControl->fillLine(7, list);

    list.clear();
    list << QString("交流输出V相电流(A)")
         << QString::number(this->database->acOutputVCurrentA1) << QString("--")
         << QString::number(this->database->acOutputVCurrentC1) << QString("--")
         << QString("--") << QString::number(this->database->acOutputVCurrentC2)
         << QString("--") << QString::number(this->database->acOutputVCurrentA2);
    this->tableControl->fillLine(8, list);

    list.clear();
    list << QString("交流输出W相电流(A)")
         << QString::number(this->database->acOutputWCurrentA1) << QString("--")
         << QString::number(this->database->acOutputWCurrentC1) << QString("--")
         << QString("--") << QString::number(this->database->acOutputWCurrentC2)
         << QString("--") << QString::number(this->database->acOutputWCurrentA2);
    this->tableControl->fillLine(9, list);

    list.clear();
    list << QString("交流输出UV相线电压(V)")
         << QString::number(this->database->acOutputUvVoltageA1) << QString("--")
         << QString::number(this->database->acOutputUvVoltageC1) << QString("--")
         << QString("--") << QString::number(this->database->acOutputUvVoltageC2)
         << QString("--") << QString::number(this->database->acOutputUvVoltageA2);
    this->tableControl->fillLine(10, list);

    list.clear();
    list << QString("交流输出UW相线电压(V)")
         << QString::number(this->database->acOutputUwVoltageA1) << QString("--")
         << QString::number(this->database->acOutputUwVoltageC1) << QString("--")
         << QString("--") << QString::number(this->database->acOutputUwVoltageC2)
         << QString("--") << QString::number(this->database->acOutputUwVoltageA2);
    this->tableControl->fillLine(11, list);
}

void StatParameter::showEvent(QShowEvent *)
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

void StatParameter::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void StatParameter::on_btnSiv_clicked()
{
    this->page = 2;
    ui->btnSiv->setStyleSheet(BUTTON_DOWN);
    ui->btnTcu->setStyleSheet(BUTTON_UP);
}

void StatParameter::on_btnTcu_clicked()
{
    this->page = 1;
    ui->btnSiv->setStyleSheet(BUTTON_UP);
    ui->btnTcu->setStyleSheet(BUTTON_DOWN);
}

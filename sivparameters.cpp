#include "sivparameters.h"
#include "ui_sivparameters.h"
#include "tableacontrol.h"
#include "vehiclelogo.h"

#define _MAX_PAGE 2

SivParameters::SivParameters(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SivParameters)
{
    ui->setupUi(this);

    this->tableControl = new TableAControl(this);
    this->tableControl->setGeometry(5, 98, this->tableControl->width(), this->tableControl->height());
    this->tableControl->show();

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(123, 10, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();

    this->page = 1;
    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

SivParameters::~SivParameters()
{
    delete ui;
}

void SivParameters::updatePage()
{
    if (1 == this->page)
    {
        this->showPage1();
    }
    else if (2 == this->page)
    {
        this->showPage2();
    }
}

void SivParameters::showEvent(QShowEvent *)
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

void SivParameters::showPage2()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("A相桥臂电流(A)")
           << QString::number(this->database->bridgeACurrentA1) << QString("- -")
           << QString::number(this->database->bridgeACurrentC1) << QString("- -")
           << QString("- -") << QString::number(this->database->bridgeACurrentC2)
           << QString("- -") << QString::number(this->database->bridgeACurrentA2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("B相桥臂电流(A)")
           << QString::number(this->database->bridgeBCurrentA1) << QString("- -")
           << QString::number(this->database->bridgeBCurrentC1) << QString("- -")
           << QString("- -") << QString::number(this->database->bridgeBCurrentC2)
           << QString("- -") << QString::number(this->database->bridgeBCurrentA2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("C相桥臂电流(A)")
           << QString::number(this->database->bridgeCCurrentA1) << QString("- -")
           << QString::number(this->database->bridgeCCurrentC1) << QString("- -")
           << QString("- -") << QString::number(this->database->bridgeCCurrentC2)
           << QString("- -") << QString::number(this->database->bridgeCCurrentA2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("交流输出U相电流(A)")
           << QString::number(this->database->acOutputUCurrentA1) << QString("- -")
           << QString::number(this->database->acOutputUCurrentC1) << QString("- -")
           << QString("- -") << QString::number(this->database->acOutputUCurrentC2)
           << QString("- -") << QString::number(this->database->acOutputUCurrentA2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("交流输出V相电流(A)")
           << QString::number(this->database->acOutputVCurrentA1) << QString("- -")
           << QString::number(this->database->acOutputVCurrentC1) << QString("- -")
           << QString("- -") << QString::number(this->database->acOutputVCurrentC2)
           << QString("- -") << QString::number(this->database->acOutputVCurrentA2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("交流输出W相电流(A)")
           << QString::number(this->database->acOutputWCurrentA1) << QString("- -")
           << QString::number(this->database->acOutputWCurrentC1) << QString("- -")
           << QString("- -") << QString::number(this->database->acOutputWCurrentC2)
           << QString("- -") << QString::number(this->database->acOutputWCurrentA2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("交流输出UV相线电压(V)")
           << QString::number(this->database->acOutputUvVoltageA1) << QString("- -")
           << QString::number(this->database->acOutputUvVoltageC1) << QString("- -")
           << QString("- -") << QString::number(this->database->acOutputUvVoltageC2)
           << QString("- -") << QString::number(this->database->acOutputUvVoltageA2);
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("交流输出UW相线电压(V)")
           << QString::number(this->database->acOutputUwVoltageA1) << QString("- -")
           << QString::number(this->database->acOutputUwVoltageC1) << QString("- -")
           << QString("- -") << QString::number(this->database->acOutputUwVoltageC2)
           << QString("- -") << QString::number(this->database->acOutputUwVoltageA2);
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("交流母线UV相线电压(V)")
           << QString::number(this->database->sivGeneratrixUvVoltageA1) << QString("- -")
           << QString::number(this->database->sivGeneratrixUvVoltageC1) << QString("- -")
           << QString("- -") << QString::number(this->database->sivGeneratrixUvVoltageC2)
           << QString("- -") << QString::number(this->database->sivGeneratrixUvVoltageA2);
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("交流母线UW相线电压(V)")
           << QString::number(this->database->sivGeneratrixUwVoltageA1) << QString("- -")
           << QString::number(this->database->sivGeneratrixUwVoltageC1) << QString("- -")
           << QString("- -") << QString::number(this->database->sivGeneratrixUwVoltageC2)
           << QString("- -") << QString::number(this->database->sivGeneratrixUwVoltageA2);
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("SIV并网指令")
           << this->boolToString(this->database->ccuSivStartA1) << QString("")
           << this->boolToString(this->database->ccuSivStartC1) << QString("")
           << QString("") << this->boolToString(this->database->ccuSivStartC2)
           << QString("") << this->boolToString(this->database->ccuSivStartA2);
    this->tableControl->fillLine(11, signal);
}

void SivParameters::showPage1()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("KM1故障保护")
           << this->boolToString(this->database->sivKm1FaultProtectA1) << QString("--")
           << this->boolToString(this->database->sivKm1FaultProtectC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivKm1FaultProtectC2)
           << QString("--") << this->boolToString(this->database->sivKm1FaultProtectA2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("KM2故障保护")
           << this->boolToString(this->database->sivKm2FaultProtectA1) << QString("--")
           << this->boolToString(this->database->sivKm2FaultProtectC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivKm2FaultProtectC2)
           << QString("--") << this->boolToString(this->database->sivKm2FaultProtectA2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("KMA故障保护")
           << this->boolToString(this->database->sivKmaFaultProtectA1) << QString("--")
           << this->boolToString(this->database->sivKmaFaultProtectC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivKmaFaultProtectC2)
           << QString("--") << this->boolToString(this->database->sivKmaFaultProtectA2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("KM1驱动信号")
           << this->boolToString(this->database->sivKm1DriverSignalA1) << QString("--")
           << this->boolToString(this->database->sivKm1DriverSignalC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivKm1DriverSignalC2)
           << QString("--") << this->boolToString(this->database->sivKm1DriverSignalA2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("KM2驱动信号")
           << this->boolToString(this->database->sivKm2DriverSignalA1) << QString("--")
           << this->boolToString(this->database->sivKm2DriverSignalC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivKm2DriverSignalC2)
           << QString("--") << this->boolToString(this->database->sivKm2DriverSignalA2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("KMA驱动信号")
           << this->boolToString(this->database->sivKmaDriverSignalA1) << QString("--")
           << this->boolToString(this->database->sivKmaDriverSignalC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivKmaDriverSignalC2)
           << QString("--") << this->boolToString(this->database->sivKmaDriverSignalA2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("SIV OK")
           << this->boolToString(this->database->siv380vOkA1) << QString("--")
           << this->boolToString(this->database->siv380vOkC1) << QString("--")
           << QString("--") << this->boolToString(this->database->siv380vOkC2)
           << QString("--") << this->boolToString(this->database->siv380vOkA2);
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("ACU Bus Active")
           << this->boolToString(this->database->sivAcuBusActiveA1) << QString("--")
           << this->boolToString(this->database->sivAcuBusActiveC1) << QString("--")
           << QString("--") << this->boolToString(this->database->sivAcuBusActiveC2)
           << QString("--") << this->boolToString(this->database->sivAcuBusActiveA2);
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("输入电压(V)")
           << QString::number(this->database->inputVoltageSivA1) << QString("--")
           << QString::number(this->database->inputVoltageSivC1) << QString("--")
           << QString("--") << QString::number(this->database->inputVoltageSivC2)
           << QString("--") << QString::number(this->database->inputVoltageSivA2);
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("中间电容电压(V)")
           << QString::number(this->database->middleCapacitorVoltageSivA1) << QString("--")
           << QString::number(this->database->middleCapacitorVoltageSivC1) << QString("--")
           << QString("--") << QString::number(this->database->middleCapacitorVoltageSivC2)
           << QString("--") << QString::number(this->database->middleCapacitorVoltageSivA2);
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("输入电流(A)")
           << QString::number(this->database->inputCurrentSivA1) << QString("--")
           << QString::number(this->database->inputCurrentSivC1) << QString("--")
           << QString("--") << QString::number(this->database->inputCurrentSivC2)
           << QString("--") << QString::number(this->database->inputCurrentSivA2);
    this->tableControl->fillLine(11, signal);
}

void SivParameters::on_btnBcu_pressed()
{
    emit this->changePage(uBcuParametersPage);
}

void SivParameters::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

QString SivParameters::boolToString(bool value)
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

void SivParameters::on_btnUp_clicked()
{
    if (this->page < _MAX_PAGE)
    {
        this->page ++;
    }

    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

void SivParameters::on_btnDown_clicked()
{  
    if (this->page > 1)
    {
        this->page --;
    }

    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

void SivParameters::on_btnDcu_pressed()
{
    this->changePage(uDcuParametersPage);
}

void SivParameters::on_btnOthers_pressed()
{
    this->changePage(uOthersParametersPage);
}

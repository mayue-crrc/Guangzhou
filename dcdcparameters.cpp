#include "dcdcparameters.h"
#include "ui_dcdcparameters.h"
#include "tableacontrol.h"
#include "vehiclelogo.h"

#define _MAX_PAGE 2

DcdcParameters::DcdcParameters(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DcdcParameters)
{
    ui->setupUi(this);

    this->tableControl = new TableAControl(this);
    this->tableControl->setGeometry(17, 98, this->tableControl->width(), this->tableControl->height());
    this->tableControl->show();

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setGeometry(140, 10, this->vehicleLogo->width(), this->vehicleLogo->height());
    this->vehicleLogo->show();

    this->page = 1;
    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

DcdcParameters::~DcdcParameters()
{
    delete ui;
}

void DcdcParameters::updatePage()
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

void DcdcParameters::on_btnSiv_pressed()
{
    emit this->changePage(uDcdcParametersPage);
}

void DcdcParameters::on_btnBcu_pressed()
{
    emit this->changePage(uBcuParametersPage);
}

void DcdcParameters::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

QString DcdcParameters::boolToString(bool value)
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

void DcdcParameters::showPage1()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("接触器KM2状态")
           << this->boolToString(this->database->dcdcKm2StateA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcKm2StateA2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("接触器K1状态")
           << this->boolToString(this->database->dcdcK1StateA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcK1StateA2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("接触器KM1状态")
           << this->boolToString(this->database->dcdcKm1StateA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcKm1StateA2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("接触器KM1驱动信号")
           << this->boolToString(this->database->dcdcKm1DriverA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcKm1DriverA2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("接触器KM2驱动信号")
           << this->boolToString(this->database->dcdcKm2DriverA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcKm2DriverA2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("接触器K1驱动信号")
           << this->boolToString(this->database->dcdcK1DriverA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcK1DriverA2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("输出过压")
           << this->boolToString(this->database->dcdcOutputOverVoltageA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcOutputOverVoltageA2);
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("输出欠压")
           << this->boolToString(this->database->dcdcOutputLowVoltageA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcOutputLowVoltageA2);
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("输出过流")
           << this->boolToString(this->database->dcdcOutputOverCurrentA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcOutputOverCurrentA2);
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("充电过流")
           << this->boolToString(this->database->dcdcChargeOverCurrentA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcChargeOverCurrentA2);
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("输入欠压")
           << this->boolToString(this->database->dcdcInputLowVoltageA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcInputLowVoltageA2);
    this->tableControl->fillLine(11, signal);
}

void DcdcParameters::showPage2()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("输入过压")
           << this->boolToString(this->database->dcdcInputOverVoltageA1) << QString("--")
           << QString("--") << QString("--")
           << QString("--") << QString("--")
           << QString("--") << this->boolToString(this->database->dcdcInputOverVoltageA2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->tableControl->fillLine(11, signal);
}

void DcdcParameters::on_btnUp_clicked()
{
    if (this->page > 0)
    {
        this->page --;
    }

    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

void DcdcParameters::on_btnDown_clicked()
{
    if (this->page < _MAX_PAGE)
    {
        this->page ++;
    }

    ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(_MAX_PAGE));
}

void DcdcParameters::showEvent(QShowEvent *)
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

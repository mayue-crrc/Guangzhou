#include "othersparameters.h"
#include "ui_othersparameters.h"
#include "vehiclelogo.h"
#include "tableacontrol.h"

OthersParameters::OthersParameters(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::OthersParameters)
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

OthersParameters::~OthersParameters()
{
    delete ui;
}

void OthersParameters::updatePage()
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
}

void OthersParameters::showPage1()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("BCG输入电压(V)")
           << QString::number(this->database->dcdcInputVoltageA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcInputVoltageA2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("BCG电容端电压1(V)")
           << QString::number(this->database->dcdcCapacitor1VoltageA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcCapacitor1VoltageA2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("BCG电容端电压2(V)")
           << QString::number(this->database->dcdcCapacitor2VoltageA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcCapacitor2VoltageA2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("BCG输出电压(V)")
           << QString::number(this->database->dcdcOutputVoltageA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcOutputVoltageA2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("BCG输出电流(A)")
           << QString::number(this->database->dcdcOutputCurrentA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcOutputCurrentA2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("BCG充放电电流(A)")
           << QString::number(this->database->dcdcChargeCurrentA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcChargeCurrentA2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("BCG输入电流(A)")
           << QString::number(this->database->dcdcInputCurrentA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcInputCurrentA2);
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("BCG蓄电池温度(℃)")
           << QString::number(this->database->dcdcBatteryTemperatureA1) << QString("- -") << QString("- -") << QString("- -")
           << QString("- -") << QString("- -") << QString("- -") << QString::number(this->database->dcdcBatteryTemperatureA2);
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

//    signal.clear();
//    signal << QString("门1安全线回路1端")
//           << this->boolToString(this->database->edcuDoor1SaftyLoop1A1) << this->boolToString(this->database->edcuDoor1SaftyLoop1B1)
//           << this->boolToString(this->database->edcuDoor1SaftyLoop1C1) << this->boolToString(this->database->edcuDoor1SaftyLoop1D1)
//           << this->boolToString(this->database->edcuDoor1SaftyLoop1D2) << this->boolToString(this->database->edcuDoor1SaftyLoop1C2)
//           << this->boolToString(this->database->edcuDoor1SaftyLoop1B2) << this->boolToString(this->database->edcuDoor1SaftyLoop1A2);
//    this->tableControl->fillLine(9, signal);

//    signal.clear();
//    signal << QString("门1安全线回路2端")
//           << this->boolToString(this->database->edcuDoor1SaftyLoop2A1) << this->boolToString(this->database->edcuDoor1SaftyLoop2B1)
//           << this->boolToString(this->database->edcuDoor1SaftyLoop2C1) << this->boolToString(this->database->edcuDoor1SaftyLoop2D1)
//           << this->boolToString(this->database->edcuDoor1SaftyLoop2D2) << this->boolToString(this->database->edcuDoor1SaftyLoop2C2)
//           << this->boolToString(this->database->edcuDoor1SaftyLoop2B2) << this->boolToString(this->database->edcuDoor1SaftyLoop2A2);
//    this->tableControl->fillLine(10, signal);

//    signal.clear();
//    signal << QString("门2安全线回路1端")
//           << this->boolToString(this->database->edcuDoor2SaftyLoop1A1) << this->boolToString(this->database->edcuDoor2SaftyLoop1B1)
//           << this->boolToString(this->database->edcuDoor2SaftyLoop1C1) << this->boolToString(this->database->edcuDoor2SaftyLoop1D1)
//           << this->boolToString(this->database->edcuDoor2SaftyLoop1D2) << this->boolToString(this->database->edcuDoor2SaftyLoop1C2)
//           << this->boolToString(this->database->edcuDoor2SaftyLoop1B2) << this->boolToString(this->database->edcuDoor2SaftyLoop1A2);
//    this->tableControl->fillLine(11, signal);
}

void OthersParameters::showPage2()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("门2安全线回路2端")
           << this->boolToString(this->database->edcuDoor2SaftyLoop2A1) << this->boolToString(this->database->edcuDoor2SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor2SaftyLoop2C1) << this->boolToString(this->database->edcuDoor2SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor2SaftyLoop2D2) << this->boolToString(this->database->edcuDoor2SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor2SaftyLoop2B2) << this->boolToString(this->database->edcuDoor2SaftyLoop2A2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("门3安全线回路1端")
           << this->boolToString(this->database->edcuDoor3SaftyLoop1A1) << this->boolToString(this->database->edcuDoor3SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor3SaftyLoop1C1) << this->boolToString(this->database->edcuDoor3SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor3SaftyLoop1D2) << this->boolToString(this->database->edcuDoor3SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor3SaftyLoop1B2) << this->boolToString(this->database->edcuDoor3SaftyLoop1A2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("门3安全线回路2端")
           << this->boolToString(this->database->edcuDoor3SaftyLoop2A1) << this->boolToString(this->database->edcuDoor3SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor3SaftyLoop2C1) << this->boolToString(this->database->edcuDoor3SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor3SaftyLoop2D2) << this->boolToString(this->database->edcuDoor3SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor3SaftyLoop2B2) << this->boolToString(this->database->edcuDoor3SaftyLoop2A2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("门4安全线回路1端")
           << this->boolToString(this->database->edcuDoor4SaftyLoop1A1) << this->boolToString(this->database->edcuDoor4SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor4SaftyLoop1C1) << this->boolToString(this->database->edcuDoor4SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor4SaftyLoop1D2) << this->boolToString(this->database->edcuDoor4SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor4SaftyLoop1B2) << this->boolToString(this->database->edcuDoor4SaftyLoop1A2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("门4安全线回路2端")
           << this->boolToString(this->database->edcuDoor4SaftyLoop2A1) << this->boolToString(this->database->edcuDoor4SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor4SaftyLoop2C1) << this->boolToString(this->database->edcuDoor4SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor4SaftyLoop2D2) << this->boolToString(this->database->edcuDoor4SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor4SaftyLoop2B2) << this->boolToString(this->database->edcuDoor4SaftyLoop2A2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("门5安全线回路1端")
           << this->boolToString(this->database->edcuDoor5SaftyLoop1A1) << this->boolToString(this->database->edcuDoor5SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor5SaftyLoop1C1) << this->boolToString(this->database->edcuDoor5SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor5SaftyLoop1D2) << this->boolToString(this->database->edcuDoor5SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor5SaftyLoop1B2) << this->boolToString(this->database->edcuDoor5SaftyLoop1A2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("门5安全线回路2端")
           << this->boolToString(this->database->edcuDoor5SaftyLoop2A1) << this->boolToString(this->database->edcuDoor5SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor5SaftyLoop2C1) << this->boolToString(this->database->edcuDoor5SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor5SaftyLoop2D2) << this->boolToString(this->database->edcuDoor5SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor5SaftyLoop2B2) << this->boolToString(this->database->edcuDoor5SaftyLoop2A2);
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("门6安全线回路1端")
           << this->boolToString(this->database->edcuDoor6SaftyLoop1A1) << this->boolToString(this->database->edcuDoor6SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor6SaftyLoop1C1) << this->boolToString(this->database->edcuDoor6SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor6SaftyLoop1D2) << this->boolToString(this->database->edcuDoor6SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor6SaftyLoop1B2) << this->boolToString(this->database->edcuDoor6SaftyLoop1A2);
    this->tableControl->fillLine(8, signal);

    signal.clear();
    signal << QString("门6安全线回路2端")
           << this->boolToString(this->database->edcuDoor6SaftyLoop2A1) << this->boolToString(this->database->edcuDoor6SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor6SaftyLoop2C1) << this->boolToString(this->database->edcuDoor6SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor6SaftyLoop2D2) << this->boolToString(this->database->edcuDoor6SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor6SaftyLoop2B2) << this->boolToString(this->database->edcuDoor6SaftyLoop2A2);
    this->tableControl->fillLine(9, signal);

    signal.clear();
    signal << QString("门7安全线回路1端")
           << this->boolToString(this->database->edcuDoor7SaftyLoop1A1) << this->boolToString(this->database->edcuDoor7SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor7SaftyLoop1C1) << this->boolToString(this->database->edcuDoor7SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor7SaftyLoop1D2) << this->boolToString(this->database->edcuDoor7SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor7SaftyLoop1B2) << this->boolToString(this->database->edcuDoor7SaftyLoop1A2);
    this->tableControl->fillLine(10, signal);

    signal.clear();
    signal << QString("门7安全线回路2端")
           << this->boolToString(this->database->edcuDoor7SaftyLoop2A1) << this->boolToString(this->database->edcuDoor4SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor7SaftyLoop2C1) << this->boolToString(this->database->edcuDoor4SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor7SaftyLoop2D2) << this->boolToString(this->database->edcuDoor4SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor7SaftyLoop2B2) << this->boolToString(this->database->edcuDoor4SaftyLoop2A2);
    this->tableControl->fillLine(11, signal);
}

void OthersParameters::showPage3()
{
    QList<QString> signal;

    signal.clear();
    signal << QString("门8安全线回路1端")
           << this->boolToString(this->database->edcuDoor8SaftyLoop1A1) << this->boolToString(this->database->edcuDoor8SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor8SaftyLoop1C1) << this->boolToString(this->database->edcuDoor8SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor8SaftyLoop1D2) << this->boolToString(this->database->edcuDoor8SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor8SaftyLoop1B2) << this->boolToString(this->database->edcuDoor8SaftyLoop1A2);
    this->tableControl->fillLine(1, signal);

    signal.clear();
    signal << QString("门8安全线回路2端")
           << this->boolToString(this->database->edcuDoor8SaftyLoop2A1) << this->boolToString(this->database->edcuDoor8SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor8SaftyLoop2C1) << this->boolToString(this->database->edcuDoor8SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor8SaftyLoop2D2) << this->boolToString(this->database->edcuDoor8SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor8SaftyLoop2B2) << this->boolToString(this->database->edcuDoor8SaftyLoop2A2);
    this->tableControl->fillLine(2, signal);

    signal.clear();
    signal << QString("门9安全线回路1端")
           << this->boolToString(this->database->edcuDoor9SaftyLoop1A1) << this->boolToString(this->database->edcuDoor9SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor9SaftyLoop1C1) << this->boolToString(this->database->edcuDoor9SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor9SaftyLoop1D2) << this->boolToString(this->database->edcuDoor9SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor9SaftyLoop1B2) << this->boolToString(this->database->edcuDoor9SaftyLoop1A2);
    this->tableControl->fillLine(3, signal);

    signal.clear();
    signal << QString("门9安全线回路2端")
           << this->boolToString(this->database->edcuDoor9SaftyLoop2A1) << this->boolToString(this->database->edcuDoor9SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor9SaftyLoop2C1) << this->boolToString(this->database->edcuDoor9SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor9SaftyLoop2D2) << this->boolToString(this->database->edcuDoor9SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor9SaftyLoop2B2) << this->boolToString(this->database->edcuDoor9SaftyLoop2A2);
    this->tableControl->fillLine(4, signal);

    signal.clear();
    signal << QString("门10安全线回路1端")
           << this->boolToString(this->database->edcuDoor10SaftyLoop1A1) << this->boolToString(this->database->edcuDoor10SaftyLoop1B1)
           << this->boolToString(this->database->edcuDoor10SaftyLoop1C1) << this->boolToString(this->database->edcuDoor10SaftyLoop1D1)
           << this->boolToString(this->database->edcuDoor10SaftyLoop1D2) << this->boolToString(this->database->edcuDoor10SaftyLoop1C2)
           << this->boolToString(this->database->edcuDoor10SaftyLoop1B2) << this->boolToString(this->database->edcuDoor10SaftyLoop1A2);
    this->tableControl->fillLine(5, signal);

    signal.clear();
    signal << QString("门10安全线回路2端")
           << this->boolToString(this->database->edcuDoor10SaftyLoop2A1) << this->boolToString(this->database->edcuDoor10SaftyLoop2B1)
           << this->boolToString(this->database->edcuDoor10SaftyLoop2C1) << this->boolToString(this->database->edcuDoor10SaftyLoop2D1)
           << this->boolToString(this->database->edcuDoor10SaftyLoop2D2) << this->boolToString(this->database->edcuDoor10SaftyLoop2C2)
           << this->boolToString(this->database->edcuDoor10SaftyLoop2B2) << this->boolToString(this->database->edcuDoor10SaftyLoop2A2);
    this->tableControl->fillLine(6, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("") << QString("") << QString("")
           << QString("") << QString("") << QString("") << QString("");
    this->tableControl->fillLine(7, signal);

    signal.clear();
    signal << QString("")
           << QString("") << QString("") << QString("") << QString("")
           << QString("") << QString("") << QString("") << QString("");
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

void OthersParameters::showEvent(QShowEvent *)
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

void OthersParameters::on_btnSiv_pressed()
{
    this->changePage(uSivParametersPage);
}

void OthersParameters::on_btnTcu_pressed()
{
    this->changePage(uDcuParametersPage);
}

void OthersParameters::on_btnBcu_pressed()
{
    this->changePage(uBcuParametersPage);
}

void OthersParameters::on_btnBack_clicked()
{
    this->changePage(uTroubleShootingPage);
}

QString OthersParameters::boolToString(bool state)
{
    if (state)
    {
        return QString("1");
    }
    else
    {
        return QString("0");
    }
}

void OthersParameters::on_btnUp_clicked()
{
    if (this->page < 1)
    {
        this->page ++;
    }
}

void OthersParameters::on_btnDown_clicked()
{
    if (this->page > 1)
    {
        this->page --;
    }
}

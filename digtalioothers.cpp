#include "digtalioothers.h"
#include "ui_digtalioothers.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
#include "global.h"
#include <QDebug>

#define _UP QRect(15, 30, this->diControlB1->width(), this->diControlB1->height())
#define _DOWN QRect(15, 320, this->diControlB1->width(), this->diControlB1->height())

DigtalIoOthers::DigtalIoOthers(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DigtalIoOthers)
{
    ui->setupUi(this);

    QList<QPushButton *> buttons;

    buttons << ui->btnA1 << ui->btnB1 << ui->btnC1 << ui->btnD1
            << ui->btnA2 << ui->btnB2 << ui->btnC2 << ui->btnD2;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(myKeyPress()));
    }

    this->diControlB1 = new DiControl(this);
    this->diControlC1 = new DiControl(this);
    this->diControlD1 = new DiControl(this);
    this->diControlD2 = new DiControl(this);
    this->diControlC2 = new DiControl(this);
    this->diControlB2 = new DiControl(this);

    this->doControlB1 = new DoControl(this);
    this->doControlC1 = new DoControl(this);
    this->doControlD1 = new DoControl(this);
    this->doControlD2 = new DoControl(this);
    this->doControlC2 = new DoControl(this);
    this->doControlB2 = new DoControl(this);

    this->diControlB1->setGeometry(_UP);
    this->doControlB1->setGeometry(_DOWN);

    this->diControlC1->setGeometry(_UP);
    this->doControlC1->setGeometry(_DOWN);

    this->diControlD1->setGeometry(_UP);
    this->doControlD1->setGeometry(_DOWN);

    this->diControlD2->setGeometry(_UP);
    this->doControlD2->setGeometry(_DOWN);

    this->diControlC2->setGeometry(_UP);
    this->doControlC2->setGeometry(_DOWN);

    this->diControlB2->setGeometry(_UP);
    this->doControlB2->setGeometry(_DOWN);

    // the list di: 25
    // the list do: 17
    QList<QString> listDi, listDo, listAx;

    //RIOM2
    //set MP2 information
    listDi << QString("DI1")
           << QString("IN1 预留") << QString("IN2 KMK1状态") << QString("IN3 预留") << QString("IN4 预留")
           << QString("IN5 预留") << QString("IN6 预留") << QString("IN7 预留") << QString("IN8 降弓到位")
           << QString("IN9 转向架1切除") << QString("IN10 转向架2切除") << QString("IN11 停放制动未切除") << QString("IN12 预留")
           << QString("IN13 车受电弓切除") << QString("IN14 脱钩位检测") << QString("IN15 照明驱动电源1故障") << QString("IN16 照明驱动电源2故障")
           << QString("IN17 照明驱动电源3故障") << QString("IN18 照明驱动电源4故障") << QString("IN19 预留") << QString("IN20 隔离开关运行位")
           << QString("IN21 预留") << QString("IN22 预留") << QString("IN23 预留") << QString("IN24 预留");

    listDo << QString("DO")
           << QString("OUT1 预留") << QString("OUT2 KMK1断开") << QString("OUT3 KMK1闭合") << QString("OUT4 预留")
           << QString("OUT5 预留") << QString("OUT6 预留") << QString("OUT7 预留") << QString("OUT8 预留")
           << QString("OUT9 预留") << QString("OUT10 预留") << QString("OUT11 预留") << QString("OUT12 预留")
           << QString("OUT13 预留") << QString("OUT14 预留") << QString("OUT15 预留") << QString("OUT16 预留");

    this->diControlD1->initialName(listDi);
    this->doControlD1->initialName(listDo);

    //set M2 information
    listDi[2] = QString("IN2 预留");
    listDi[8] = QString("IN8 预留");
    listDi[13] = QString("IN13 预留");
    listDi[20] = QString("IN20 预留");
    listDo[2] = QString("OUT2 预留");
    listDo[3] = QString("OUT3 预留");

    this->diControlD2->initialName(listDi);
    this->doControlD2->initialName(listDo);
    listDi.clear();
    listDo.clear();


    //RIOM3
    //set MP1 information
    listDi << QString("DI1")
           << QString("IN1 预留") << QString("IN2 KMK1状态") << QString("IN3 空压机运行") << QString("IN4 空压机过载")
           << QString("IN5 干燥塔1状态") << QString("IN6 干燥塔2状态") << QString("IN7 初次升弓泵动作") << QString("IN8 降弓到位")
           << QString("IN9 转向架1切除") << QString("IN10 转向架2切除") << QString("IN11 停放制动未切除") << QString("IN12 车受电弓切除")
           << QString("IN13 预留") << QString("IN14 预留") << QString("IN15 照明驱动电源1故障") << QString("IN16 照明驱动电源2故障")
           << QString("IN17 照明驱动电源3故障") << QString("IN18 照明驱动电源4故障") << QString("IN19 它端车间电源接入") << QString("IN20 隔离开关运行位")
           << QString("IN21 预留") << QString("IN22 预留") << QString("IN23 预留") << QString("IN24 预留");


    listDo << QString("DO")
           << QString("OUT1 主空压机启动") << QString("OUT2 KMK1断开") << QString("OUT3 KMK1闭合") << QString("OUT4 预留")
           << QString("OUT5 预留") << QString("OUT6 预留") << QString("OUT7 预留") << QString("OUT8 预留")
           << QString("OUT9 预留") << QString("OUT10 预留") << QString("OUT11 预留") << QString("OUT12 预留")
           << QString("OUT13 预留") << QString("OUT14 预留") << QString("OUT15 预留") << QString("OUT16 预留");

    this->diControlB1->initialName(listDi);
    this->doControlB1->initialName(listDo);

    //set MP2 information
    listDi[7] = QString("IN7 预留");
    this->diControlB2->initialName(listDi);
    this->doControlB2->initialName(listDo);

    //set M1/M2 information
    listDi[1] = QString("IN1 SIV正常");
    listDi[2] = QString("IN2 预留");
    listDi[3] = QString("IN3 预留");
    listDi[4] = QString("IN4 预留");
    listDi[5] = QString("IN5 预留");
    listDi[6] = QString("IN6 预留");
    listDi[8] = QString("IN8 预留");
    listDi[12] = QString("IN12 预留");
    listDi[19] = QString("IN19 预留");
    listDi[20] = QString("IN20 预留");

    listDo[1] = QString("OUT1 预留");
    listDo[2] = QString("OUT2 预留");
    listDo[3] = QString("OUT3 预留");

    this->diControlC1->initialName(listDi);
    this->doControlC1->initialName(listDo);

    this->diControlC2->initialName(listDi);
    this->doControlC2->initialName(listDo);

    listDi.clear();
    listDo.clear();
}

DigtalIoOthers::~DigtalIoOthers()
{
    delete ui;
}

void DigtalIoOthers::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void DigtalIoOthers::updatePage()
{
    this->diControlB1->hide();
    this->diControlC1->hide();
    this->diControlD1->hide();
    this->diControlD2->hide();
    this->diControlC2->hide();
    this->diControlB2->hide();

    this->doControlB1->hide();
    this->doControlC1->hide();
    this->doControlD1->hide();
    this->doControlD2->hide();
    this->doControlC2->hide();
    this->doControlB2->hide();

    switch (this->currentVehicle)
    {
    case uB1Vehicle:
        this->diControlB1->show();
        this->doControlB1->show();
        break;
    case uC1Vehicle:
        this->diControlC1->show();
        this->doControlC1->show();
        break;
    case uD1Vehicle:
        this->diControlD1->show();
        this->doControlD1->show();
        break;
    case uD2Vehicle:
        this->diControlD2->show();
        this->doControlD2->show();
        break;
    case uC2Vehicle:
        this->diControlC2->show();
        this->doControlC2->show();
        break;
    case uB2Vehicle:
        this->diControlB2->show();
        this->doControlB2->show();
        break;
    }

    // riom do B1
    QList<bool> states;

    states << false << this->database->kmk1ContactorStateB1 << this->database->compressorRunB1 << this->database->compressorOverloadB1
           << this->database->dryingTower1StateB1 << this->database->dryingTower2StateB1 << this->database->pantographPumpActionB1 << this->database->pantographDropDownB1
           << this->database->bogie1IsolatedB1 << this->database->bogie2IsolatedB1 << this->database->parkingBrakeIsolatedB1 << this->database->pantographIsolatedB1
           << false << false << this->database->lightPower1FaultB1 << this->database->lightPower2FaultB1
           << this->database->lightPower3FaultB1 << this->database->lightPower4FaultB1 << this->database->otherSidePowerAccessB1 << this->database->isolateSwitchOperationB1
           << false << false << false << false;
    this->diControlB1->updateDi(states);

    states.clear();
    states << this->database->sivOkC1 << false << false << false
           << false << false << false << false
           << this->database->bogie1IsolatedC1 << this->database->bogie2IsolatedC1 << this->database->parkingBrakeIsolatedC1 << false
           << false << false << this->database->lightPower1FaultC1 << this->database->lightPower2FaultC1
           << this->database->lightPower3FaultC1 << this->database->lightPower4FaultC1 << false << false
           << false << false << false << false;
    this->diControlC1->updateDi(states);

    states.clear();
    states << false << this->database->kmk1ContactorStateD1 << false << false
           << false << false << false << this->database->pantographDropDownD1
           << this->database->bogie1CutoutD1 << this->database->bogie2CutoutD1 << this->database->parkingBrakeCutoutD1 << false
           << this->database->pantographCutoutD1 << this->database->decoupledDetectionD1 << this->database->lightPower1FaultD1 << this->database->lightPower2FaultD1
           << this->database->lightPower3FaultD1 << this->database->lightPower4FaultD1 << false << this->database->isolateSwitchRunStateD1
           << false << false << false << false;
    this->diControlD1->updateDi(states);

    states.clear();
    states << false << false << false << false
           << false << false << false << false
           << this->database->bogie1CutoutD2 << this->database->bogie2CutoutD2 << this->database->parkingBrakeCutoutD2 << false
           << false << this->database->decoupledDetectionD2 << this->database->lightPower1FaultD2 << this->database->lightPower2FaultD2
           << this->database->lightPower3FaultD2 << this->database->lightPower4FaultD2 << false << false
           << false << false << false << false;
    this->diControlD2->updateDi(states);

    states.clear();
    states << this->database->sivOkC2 << false << false << false
           << false << false << false << false
           << this->database->bogie1IsolatedC2 << this->database->bogie2IsolatedC2 << this->database->parkingBrakeIsolatedC2 << false
           << false << false << this->database->lightPower1FaultC2 << this->database->lightPower2FaultC2
           << this->database->lightPower3FaultC2 << this->database->lightPower4FaultC2 << false << false
           << false << false << false << false;
    this->diControlC2->updateDi(states);

    states.clear();
    states << false << this->database->kmk1ContactorStateB2 << this->database->compressorRunB2 << this->database->compressorOverloadB2
            << this->database->dryingTower1StateB2 << this->database->dryingTower2StateB2 << false << this->database->pantographDropDownB2
            << this->database->bogie1IsolatedB2 << this->database->bogie2IsolatedB2 << this->database->parkingBrakeIsolatedB2 << this->database->pantographIsolatedB2
            << false << false << this->database->lightPower1FaultB2 << this->database->lightPower2FaultB2
            << this->database->lightPower3FaultB2 << this->database->lightPower4FaultB2 << this->database->otherSidePowerAccessB2 << this->database->isolateSwitchOperationB2
            << false << false << false << false;
    this->diControlB2->updateDi(states);

    states.clear();
    states << this->database->compressorOnB1 << this->database->kmk1ContactorOffB1 << this->database->kmk1ContactorOnB1 << false
           << false << false << false << false
           << false << false << false << false
           << false << false << false << false;
    this->doControlB1->updateDo(states);

    // riom do D1
    states.clear();
    states << false << this->database->kmk1ContractorOffD1 << this->database->kmk1ContractorOnD1 << false
           << false << false << false << false
           << false << false << false << false
           << false << false << false << false;
    this->doControlD1->updateDo(states);

    // riom do B2
    states.clear();
    states << this->database->compressorOnB2 << this->database->kmk1ContactorOffB2 << this->database->kmk1ContactorOnB2 << false
           << false << false << false << false
           << false << false << false << false
           << false << false << false << false;
    this->doControlB2->updateDo(states);
}

void DigtalIoOthers::myKeyPress()
{
    if (this->sender()->objectName() == QString("btnA1"))
    {
        emit this->changePage(uDigtalIoA1Page);
    }
    else if (this->sender()->objectName() == QString("btnB1"))
    {
        this->currentVehicle = uB1Vehicle;
    }
    else if (this->sender()->objectName() == QString("btnC1"))
    {
        this->currentVehicle = uC1Vehicle;
    }
    else if (this->sender()->objectName() == QString("btnD1"))
    {
        this->currentVehicle = uD1Vehicle;
    }
    else if (this->sender()->objectName() == QString("btnD2"))
    {
        this->currentVehicle = uD2Vehicle;
    }
    else if (this->sender()->objectName() == QString("btnC2"))
    {
        this->currentVehicle = uC2Vehicle;
    }
    else if (this->sender()->objectName() == QString("btnB2"))
    {
        this->currentVehicle = uB2Vehicle;
    }
    else if (this->sender()->objectName() == QString("btnA2"))
    {
        emit this->changePage(uDigtalIoA2Page);
    }

    // update the button state
    this->showEvent(NULL);
}

void DigtalIoOthers::selectItem(QString item)
{
    if (QString("btnB1") == item)
    {
        this->currentVehicle = uB1Vehicle;
    }
    else if (QString("btnC1") == item)
    {
        this->currentVehicle = uC1Vehicle;
    }
    else if (QString("btnD1") == item)
    {
        this->currentVehicle = uD1Vehicle;
    }
    else if (QString("btnD2") == item)
    {
        this->currentVehicle = uD2Vehicle;
    }
    else if (QString("btnC2") == item)
    {
        this->currentVehicle = uC2Vehicle;
    }
    else if (QString("btnB2") == item)
    {
        this->currentVehicle = uB2Vehicle;
    }
}

void DigtalIoOthers::showEvent(QShowEvent *)
{
    ui->btnB1->setStyleSheet(BUTTON_UP);
    ui->btnC1->setStyleSheet(BUTTON_UP);
    ui->btnD1->setStyleSheet(BUTTON_UP);
    ui->btnD2->setStyleSheet(BUTTON_UP);
    ui->btnC2->setStyleSheet(BUTTON_UP);
    ui->btnB2->setStyleSheet(BUTTON_UP);

    switch (this->currentVehicle)
    {
    case uB1Vehicle:
        ui->btnB1->setStyleSheet(BUTTON_DOWN);
        break;
    case uC1Vehicle:
        ui->btnC1->setStyleSheet(BUTTON_DOWN);
        break;
    case uD1Vehicle:
        ui->btnD1->setStyleSheet(BUTTON_DOWN);
        break;
    case uD2Vehicle:
        ui->btnD2->setStyleSheet(BUTTON_DOWN);
        break;
    case uC2Vehicle:
        ui->btnC2->setStyleSheet(BUTTON_DOWN);
        break;
    case uB2Vehicle:
        ui->btnB2->setStyleSheet(BUTTON_DOWN);
        break;
    }
}

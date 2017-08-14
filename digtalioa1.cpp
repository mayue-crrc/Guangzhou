#include "digtalioa1.h"
#include "ui_digtalioa1.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
#include "global.h"
#include <QDebug>

#define _UP QRect(15, 30, this->diControl1->width(), this->diControl1->height())
#define _DOWN QRect(15, 270, this->diControl1->width(), this->diControl1->height())

#define TOTAL_PAGE 4

DigtalIoA1::DigtalIoA1(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DigtalIoA1)
{
    ui->setupUi(this);

    QList<QPushButton *> buttons;

    buttons << ui->btnB1 << ui->btnC1 << ui->btnD1
            << ui->btnB2 << ui->btnC2 << ui->btnD2;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(pressed()), this, SLOT(myKeyPress()));
    }

    this->diControl1 = new DiControl(this);
    this->diControl2 = new DiControl(this);
    this->diControl3 = new DiControl(this);
    this->diControl4 = new DiControl(this);
    this->diControl5 = new DiControl(this);
    this->doControl = new DoControl(this);
    this->axControl = new AxControl(this);

    this->page = 1;

    // set their positions
    this->diControl1->setGeometry(_UP);
    this->diControl1->show();
    this->diControl2->setGeometry(_DOWN);
    this->diControl2->show();
    this->diControl3->setGeometry(_UP);
    this->diControl3->hide();
    this->diControl4->setGeometry(_DOWN);
    this->diControl4->hide();
    this->diControl5->setGeometry(_UP);
    this->diControl5->hide();
    this->doControl->setGeometry(_DOWN);
    this->doControl->hide();
    this->axControl->setGeometry(_UP);
    this->axControl->hide();

    // the list di: 25
    // the list do: 17
    // the list ax: 9
    QList<QString> list;

    list << QString("DI1")
         << QString("IN1 向前") << QString("IN2 向后") << QString("IN3 司机室占有") << QString("IN4 牵引")
         << QString("IN5 制动") << QString("IN6 快速制动") << QString("IN7 预留") << QString("IN8 预留")
         << QString("IN9 左门使能") << QString("IN10 右门使能") << QString("IN11 开左门") << QString("IN12 开右门")
         << QString("IN13 关左门") << QString("IN14 关右门") << QString("IN15 右门重开门") << QString("IN16 左门重开门")
         << QString("IN17 右门解锁禁止") << QString("IN18 左门解锁禁止") << QString("IN19 门全关好") << QString("IN20 司机室右门关")
         << QString("IN21 司机室左门关") << QString("IN22 紧急疏散门开") << QString("IN23 通道门开") << QString("IN24 预留");

    this->diControl1->initialName(list);

    list.clear();
    list << QString("DI2")
         << QString("IN1 向前") << QString("IN2 向后") << QString("IN3 司机室占有") << QString("IN4 牵引")
         << QString("IN5 制动") << QString("IN6 快速制动") << QString("IN7 预留") << QString("IN8 预留")
         << QString("IN9 蓄电池断路器") << QString("IN10 蓄电池断路器") << QString("IN11 充电机正常") << QString("IN12 SIV正常")
         << QString("IN13 复位") << QString("IN14 洗车模式") << QString("IN15 主断合") << QString("IN16 主断分")
         << QString("IN17 轮缘润滑故障") << QString("IN18 ATO牵引") << QString("IN19 ATO制动") << QString("IN20 ATO零速请求")
         << QString("IN21 最小编组") << QString("IN22 列车完整性") << QString("IN23 紧急运行模式") << QString("IN24 预留");

    this->diControl2->initialName(list);

    list.clear();
    list << QString("DI3")
         << QString("IN1 警惕旁路") << QString("IN2 门关好旁路") << QString("IN3 门零速旁路") << QString("IN4 停放制动旁路")
         << QString("IN5 制动不缓解旁路") << QString("IN6 全自动车钩旁路") << QString("IN7 列车完整性旁路") << QString("IN8 风总压力低1旁路")
         << QString("IN9 风总压力低2旁路") << QString("IN10 紧急制动指令旁路") << QString("IN11 大旁路") << QString("IN12 紧急制动蘑菇按钮1")
         << QString("IN13 预留") << QString("IN14 紧急制动蘑菇按钮2") << QString("IN15 紧急制动") << QString("IN16 它车蘑菇按钮动作")
         << QString("IN17 紧急制动指令") << QString("IN18 速度>1km/h") << QString("IN19 预留") << QString("IN20 预留")
         << QString("IN21 预留") << QString("IN22 预留") << QString("IN23 预留") << QString("IN24 预留");

    this->diControl3->initialName(list);

    list.clear();
    list << QString("DI4")
            << QString("IN1 制动不缓解") << QString("IN2 停放制动施加按钮") << QString("IN3 停放制动缓解按钮") << QString("IN4 停放制动施加")
            << QString("IN5 空气制动缓解") << QString("IN6 总风压力低1") << QString("IN7 总风压力低2") << QString("IN8 ATC切除")
            << QString("IN9 ATC复位") << QString("IN10 OFF/ARB模式") << QString("IN11 RM1/PM/AM模式") << QString("IN12 RMR模式")
            << QString("IN13 RM2模式") << QString("IN14 BM模式") << QString("IN15 CBTC模式") << QString("IN16 ATO按钮动作")
            << QString("IN17 ARB按钮动作") << QString("IN18 RMI按钮动作") << QString("IN19 警惕动作") << QString("IN20 解钩")
            << QString("IN21 预留") << QString("IN22 预留") << QString("IN23 预留") << QString("IN24 预留");

    this->diControl4->initialName(list);

    list.clear();
    list << QString("DI5")
            << QString("IN1 门控模式选择") << QString("IN2 自动开关门") << QString("IN3 自动开手动关") << QString("IN4 右门强行开门")
            << QString("IN5 左门强行开门") << QString("IN6 空调开") << QString("IN7 空调关") << QString("IN8 A车空调开")
            << QString("IN9 列车重联") << QString("IN10 转向架1切除") << QString("IN11 转向架2切除") << QString("IN12 停放制动未切除")
            << QString("IN13 照明驱动电源1故障") << QString("IN14 照明驱动电源2故障") << QString("IN15 照明驱动电源3故障") << QString("IN16 照明驱动电源4故障")
            << QString("IN17 升弓") << QString("IN18 降弓") << QString("IN19 预留") << QString("IN20 预留")
            << QString("IN21 预留") << QString("IN22 预留") << QString("IN23 预留") << QString("IN24 预留");

    this->diControl5->initialName(list);
    list.clear();

    list << QString("DO")
             << QString("OUT1 紧急制动指令") << QString("OUT2 空调开") << QString("OUT3 空调关") << QString("OUT4 A车空调开")
             << QString("OUT5 预留") << QString("OUT6 预留") << QString("OUT7 预留") << QString("OUT8 预留")
             << QString("OUT9 预留") << QString("OUT10 预留") << QString("OUT11 预留") << QString("OUT12 预留")
             << QString("OUT13 预留") << QString("OUT14 预留") << QString("OUT15 预留") << QString("OUT16 预留");

     this->doControl->initialName(list);
     list.clear();

     list << QString("AX")
          << QString("AIN1 级位输入1") << QString("AIN2 级位输入2") << QString("IN3 预留") << QString("IN4 预留")
          << QString("IN5 预留") << QString("IN6 预留") << QString("IN7 预留") << QString("IN8 预留");

     this->axControl->initialName(list);
     list.clear();
}

DigtalIoA1::~DigtalIoA1()
{
    delete ui;
}

void DigtalIoA1::on_btnBack_clicked()
{
        emit this->changePage(uTroubleShootingPage);
}

void DigtalIoA1::updatePage()
{
    this->diControl1->hide();
    this->diControl2->hide();
    this->diControl3->hide();
    this->diControl4->hide();
    this->diControl5->hide();
    this->doControl->hide();
    this->axControl->hide();

    switch (this->page)
    {
    case 1:
        this->diControl1->show();
        this->diControl2->show();
        break;
    case 2:
        this->diControl3->show();
        this->diControl4->show();
        break;
    case 3:
        this->diControl5->show();
        this->doControl->show();
        break;
    case 4:
        this->axControl->show();
        break;
    }

    QString text;

    text.sprintf("%d / %d", this->page, TOTAL_PAGE);
    ui->lblPage->setText(text);

    // riom do
    QList<bool> states;

    states << this->database->forwardDI1A1 << this->database->backwardDI1A1 << this->database->cabPossessionDI1A1 << this->database->tractionDI1A1
           << this->database->brakeDI1A1 << this->database->fastBrakingDI1A1 << false << false
           << this->database->doorLeftEnableA1 << this->database->doorRightEnableA1 << this->database->openLeftDoorCmdA1 << this->database->openRightDoorCmdA1
           << this->database->closeLeftDoorCmdA1 << this->database->closeRightDoorCmdA1 << this->database->reopenTheRightDoorA1 << this->database->reopenTheLeftDoorA1
           << this->database->rightDoorUnlockBanA1 << this->database->leftDoorUnlockBanA1 << this->database->doorAllClosedA1 << this->database->cabRightDoorClosedA1
           << this->database->cabLeftDoorClosedA1 << this->database->emerEvacDoorOpenA1 << this->database->accessDoorOpenA1 << false;
    this->diControl1->updateDi(states);

    states.clear();
    states << this->database->forwardDI2A1 << this->database->backwardDI2A1 << this->database->cabPossessionDI2A1 << this->database->tractionDI2A1
           << this->database->brakeDI2A1 << this->database->fastBrakingDI2A1 << false << false
           << this->database->batteryBreakerA1 << this->database->batteryConCirBreakerA1 << this->database->chargerOKA1 << this->database->SIVOKA1
           << this->database->resetA1 << this->database->washingModeA1 << this->database->mainCutClosedA1 << this->database->mainMainCutOpenA1
           << this->database->flangeLubricationFaultA1 << this->database->ATOTractionA1 << this->database->ATOBrakeA1 << this->database->ATOZeroSpeedRequestA1
           << this->database->theMinMarshallingA1 << this->database->trainIntergrityA1 << this->database->riomEmergencyRunModeA1 << false;
    this->diControl2->updateDi(states);

    states.clear();
    states << this->database->watchOutByPassA1 << this->database->doorSafeByPassA1 << this->database->doorZeroSpeedByPassA1 << this->database->parkingBrkByPassA1
           << this->database->brakeNoRelByPassA1 << this->database->autoCouplerByPassA1 << this->database->trainIntegrityByPassA1 << this->database->mrpPresLowBypass2A1
           << this->database->mrpPresLowBypass1A1 << this->database->EBComBypassA1 << this->database->largeBypassA1 << this->database->mushBtn1A1
           << false << this->database->mushBtn2A1 << this->database->emergencyBrakingA1 << this->database->anotherMushBtnActionA1
           << this->database->emergencyBrakingComA1 << this->database->speedGT1kmA1 << false << false
           << false << false << false << false;
    this->diControl3->updateDi(states);

    states.clear();
    states << this->database->brakeNotReleasedA1 << this->database->parkingBrkApplyButtonA1 << this->database->parkingBrkRelButtonA1 << this->database->parkingBrakeAppliedA1
           << this->database->releasedOfAirBrakingA1 << this->database->mrpPresLow1A1 << this->database->mrpPresLow2A1 << this->database->ATCCutOffA1
           << this->database->ATCResetA1 << this->database->OFFOrATBModeA1 << this->database->RM1OrPMOrAMModeA1 << this->database->RMRModeA1
           << this->database->RM2ModeA1 << this->database->BMModeA1 << this->database->CBTCModeA1 << this->database->ATOButtonActionA1
           << this->database->ATBButtonActionA1 << this->database->RMIButtonActionA1 << this->database->watchOutActionA1 << this->database->uncouplingA1
           << false << false << false << false;
    this->diControl4->updateDi(states);

    states.clear();
    states << this->database->doorConModeSeleA1 << this->database->automaticDoorA1 << this->database->autoOpenManualOffA1 << this->database->forcedOpenRightDoorA1
           << this->database->forcedOpenLeftDoorA1 << this->database->openAirConditionerA1 << this->database->closeAirConditionerA1 << this->database->openAirConditionerCarAA1
           << this->database->trainReconnectionA1 << this->database->bogie1CutoffA1 << this->database->bogie2CutoffA1 << this->database->parkingBrakeCutOffA1
           << this->database->luminairePower1FaultA1 << this->database->luminairePower2FaultA1 << this->database->luminairePower3FaultA1 << this->database->luminairePower4FaultA1
           << this->database->rosePhCommandA1 << this->database->dropPHCommandA1 << false << false
           << false << false << false << false;
    this->diControl5->updateDi(states);

    states.clear();
    states << this->database->emergencyBrakeCommandA2 << this->database->airconditionerAllOnA2 << this->database->airconditionerAllOffA2 << this->database->airconditionerOnA2
           << false << false << false << false
           << false << false << false << false
           << false << false << false << false;
    this->doControl->updateDo(states);

    QList<QString> axStates;

    axStates << QString::number(this->database->handleLevel1A1) << QString("")
           << QString::number(this->database->handleLevel2A1) << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->axControl->updateAx(axStates);
}

void DigtalIoA1::on_btnUp_clicked()
{
    if (this->page > 1)
    {
        this->page --;
    }
}

void DigtalIoA1::on_btnDown_clicked()
{
    if (this->page < TOTAL_PAGE)
    {
        this->page ++;
    }
}

void DigtalIoA1::on_btnA2_clicked()
{
    emit this->changePage(uDigtalIoA2Page);
}

void DigtalIoA1::myKeyPress()
{
    // a signal include the name of module
    emit this->selectItem(this->sender()->objectName());
    emit this->changePage(uDigtalIoOthersPage);
}

#include "digtalioa2.h"
#include "ui_digtalioa2.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
#include "global.h"
#include <QDebug>

#define _UP QRect(15, 30, this->diControl1->width(), this->diControl1->height())
#define _DOWN QRect(15, 270, this->diControl1->width(), this->diControl1->height())

#define TOTAL_PAGE 4

DigtalIoA2::DigtalIoA2(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DigtalIoA2)
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
         << QString("IN9 风总压力低2旁路") << QString("IN10 紧急指令旁路") << QString("IN11 大旁路") << QString("IN12 紧急制动蘑菇按钮1")
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

DigtalIoA2::~DigtalIoA2()
{
    delete ui;
}

void DigtalIoA2::updatePage()
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

    states << this->database->forwardDI1A2 << this->database->backwardDI1A2 << this->database->cabPossessionDI1A2 << this->database->tractionDI1A2
           << this->database->brakeDI1A2 << this->database->fastBrakingDI1A2 << false << false
           << this->database->doorLeftEnableA2 << this->database->doorRightEnableA2 << this->database->openLeftDoorCmdA2 << this->database->openRightDoorCmdA2
           << this->database->closeLeftDoorCmdA2 << this->database->closeRightDoorCmdA2 << this->database->reopenTheRightDoorA2 << this->database->reopenTheLeftDoorA2
           << this->database->rightDoorUnlockBanA2 << this->database->leftDoorUnlockBanA2 << this->database->doorAllClosedA2 << this->database->cabRightDoorClosedA2
           << this->database->cabLeftDoorClosedA2 << this->database->emerEvacDoorOpenA2 << this->database->accessDoorOpenA2 << false;
    this->diControl1->updateDi(states);

    states.clear();
    states << this->database->forwardDI2A2 << this->database->backwardDI2A2 << this->database->cabPossessionDI2A2 << this->database->tractionDI2A2
           << this->database->brakeDI2A2 << this->database->fastBrakingDI2A2 << false << false
           << this->database->batteryBreakerA2 << this->database->batteryConCirBreakerA2 << this->database->chargerOKA2 << this->database->SIVOKA2
           << this->database->resetA2 << this->database->washingModeA2 << this->database->mainCutClosedA2 << this->database->mainMainCutOpenA2
           << this->database->flangeLubricationFaultA2 << this->database->ATOTractionA2 << this->database->ATOBrakeA2 << this->database->ATOZeroSpeedRequestA2
           << this->database->theMinMarshallingA2 << this->database->trainIntergrityA2 << this->database->riomEmergencyRunModeA2 << false;
    this->diControl2->updateDi(states);

    states.clear();
    states << this->database->watchOutByPassA2 << this->database->doorSafeByPassA2 << this->database->doorZeroSpeedByPassA2 << this->database->parkingBrkByPassA2
           << this->database->brakeNoRelByPassA2 << this->database->autoCouplerByPassA2 << this->database->trainIntegrityByPassA2 << this->database->mrpPresLowBypass2A2
           << this->database->mrpPresLowBypass1A2 << this->database->EBComBypassA2 << this->database->largeBypassA2 << this->database->mushBtn1A2
           << false << this->database->mushBtn2A2 << this->database->emergencyBrakingA2 << this->database->anotherMushBtnActionA2
           << this->database->emergencyBrakingComA2 << this->database->speedGT1kmA2 << false << false
           << false << false << false << false;
    this->diControl3->updateDi(states);

    states.clear();
    states << this->database->brakeNotReleasedA2 << this->database->parkingBrkApplyButtonA2 << this->database->parkingBrkRelButtonA2 << this->database->parkingBrakeAppliedA2
           << this->database->releasedOfAirBrakingA2 << this->database->mrpPresLow1A2 << this->database->mrpPresLow2A2 << this->database->ATCCutOffA2
           << this->database->ATCResetA2 << this->database->OFFOrATBModeA2 << this->database->RM1OrPMOrAMModeA2 << this->database->RMRModeA2
           << this->database->RM2ModeA2 << this->database->BMModeA2 << this->database->CBTCModeA2 << this->database->ATOButtonActionA2
           << this->database->ATBButtonActionA2 << this->database->RMIButtonActionA2 << this->database->watchOutActionA2 << this->database->uncouplingA2
           << false << false << false << false;
    this->diControl4->updateDi(states);

    states.clear();
    states << this->database->doorConModeSeleA2 << this->database->automaticDoorA2 << this->database->autoOpenManualOffA2 << this->database->forcedOpenRightDoorA2
           << this->database->forcedOpenLeftDoorA2 << this->database->openAirConditionerA2 << this->database->closeAirConditionerA2 << this->database->openAirConditionerCarAA2
           << this->database->trainReconnectionA2 << this->database->bogie1CutoffA2 << this->database->bogie2CutoffA2 << this->database->parkingBrakeCutOffA2
           << this->database->luminairePower1FaultA2 << this->database->luminairePower2FaultA2 << this->database->luminairePower3FaultA2 << this->database->luminairePower4FaultA2
           << this->database->rosePhCommandA2 << this->database->dropPHCommandA2 << false << false
           << false << false << false << false;
    this->diControl5->updateDi(states);

    states.clear();
    states << this->database->emergencyBrakeCommandA2 << this->database->airconditionerAllOnA2 << this->database->airconditionerAllOffA2 << this->database->airconditionerOnA2
           << false << false << false << false
           << false << false << false << false
           << false << false << false << false;
    this->doControl->updateDo(states);

    QList<QString> axStates;

    axStates << QString::number(this->database->handleLevel1A2) << QString("")
             << QString::number(this->database->handleLevel2A2) << QString("")
             << QString("") << QString("")
             << QString("") << QString("")
             << QString("") << QString("")
             << QString("") << QString("")
             << QString("") << QString("")
             << QString("") << QString("");
    this->axControl->updateAx(axStates);
}

void DigtalIoA2::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void DigtalIoA2::on_btnA1_clicked()
{
    emit this->changePage(uDigtalIoA1Page);
}

void DigtalIoA2::on_btnUp_clicked()
{
    if (this->page > 1)
    {
        this->page --;
    }
}

void DigtalIoA2::on_btnDown_clicked()
{
    if (this->page < TOTAL_PAGE)
    {
        this->page ++;
    }
}

void DigtalIoA2::myKeyPress()
{
    // a signal include the name of module
    emit this->selectItem(this->sender()->objectName());
    emit this->changePage(uDigtalIoOthersPage);
}

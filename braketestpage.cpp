#include "braketestpage.h"
#include "ui_braketestpage.h"
#include <QTimer>
#include <QDebug>

BrakeTestPage::BrakeTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::BrakeTestPage)
{
    ui->setupUi(this);

    this->timer = new QTimer;

    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetSelfCheckFlag()));
}

BrakeTestPage::~BrakeTestPage()
{
    delete ui;
}

void BrakeTestPage::updatePage()
{
    if (this->database->hmi26hUncheckA1)
    {
        ui->lblUncheckTimeA1->setText(QString("26小时未自检"));
    }
    else if (this->database->hmi24hUncheckA1)
    {
        ui->lblUncheckTimeA1->setText(QString("24小时未自检"));
    }
    else
    {
        ui->lblUncheckTimeA1->setText(QString("小于24小时"));
    }

    if (this->database->hmi26hUncheckA2)
    {
        ui->lblUncheckTimeA2->setText(QString("26小时未自检"));
    }
    else if (this->database->hmi24hUncheckA2)
    {
        ui->lblUncheckTimeA2->setText(QString("24小时未自检"));
    }
    else
    {
        ui->lblUncheckTimeA2->setText(QString("小于24小时"));
    }

    if (this->database->hmiSelfCheckReadyA1)
    {
        ui->lblCheckReadyA1->setStyleSheet("background-color: rgb(0, 255, 0)");
    }
    else
    {
        ui->lblCheckReadyA1->setStyleSheet("background-color: red");
    }

    if (this->database->hmiSelfCheckReadyA2)
    {
        ui->lblCheckReadyA2->setStyleSheet("background-color: rgb(0, 255, 0)");
    }
    else
    {
        ui->lblCheckReadyA2->setStyleSheet("background-color: red");
    }

    QList<bool> signal;

    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie1SelfCheckFailureA1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie1ResultA1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie2SelfCheckFailureA1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie2ResultA1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie1SelfCheckFailureB1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie1ResultB1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie2SelfCheckFailureB1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie2ResultB1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie1SelfCheckFailureC1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie1ResultC1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie2SelfCheckFailureC1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie2ResultC1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie1SelfCheckFailureD1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie1ResultD1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA1 << this->database->hmiSelfCheckActiveA1
           << this->database->hmiBogie2SelfCheckFailureD1 << this->database->hmiSelfCheckSuccessfulA1;
    this->checkResult(ui->lblBogie2ResultD1, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie1SelfCheckFailureD2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie1ResultD2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie2SelfCheckFailureD2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie2ResultD2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie1SelfCheckFailureC2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie1ResultC2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie2SelfCheckFailureC2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie2ResultC2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie1SelfCheckFailureB2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie1ResultB2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie2SelfCheckFailureB2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie2ResultB2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie1SelfCheckFailureA2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie1ResultA2, signal);

    signal.clear();
    signal << this->database->hmiSelfCheckInterruptedA2 << this->database->hmiSelfCheckActiveA2
           << this->database->hmiBogie2SelfCheckFailureA2 << this->database->hmiSelfCheckSuccessfulA2;
    this->checkResult(ui->lblBogie2ResultA2, signal);
}

void BrakeTestPage::checkResult(QLabel *label, QList<bool> &signal)
{
    // 0: interrupted
    // 1: active
    // 2: fail
    // 3: done

    if (signal.at(0))
    {
        label->setText(QString("自检中断"));
    }
    else if (signal.at(1))
    {
        label->setText(QString("自检中"));
    }
    else if (signal.at(2))
    {
        label->setText(QString("自检失败"));
    }
    else if (signal.at(3))
    {
        label->setText(QString("自检成功"));
    }
    else
    {
        label->setText(QString(""));
    }
}

void BrakeTestPage::on_btnBack_clicked()
{
    this->changePage(uVehicleTestPage);
}

void BrakeTestPage::on_btnCheck_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    this->setSelfCheckFlag();
}

void BrakeTestPage::setSelfCheckFlag()
{
    this->database->hmiBrakeSelfCheckFlag = true;
    this->database->hmiSecurityCode = 0xAA;
    ui->btnCheck->setEnabled(false);
    this->timer->start(5000);

    _LOG << "start the self-check of brake system";
}

void BrakeTestPage::resetSelfCheckFlag()
{
    this->database->hmiBrakeSelfCheckFlag = false;
    this->database->hmiSecurityCode = 0x55;
    ui->btnCheck->setEnabled(true);
    this->timer->stop();
}

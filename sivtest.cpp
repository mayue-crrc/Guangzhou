#include "sivtest.h"
#include "ui_sivtest.h"
#include <QDebug>
#include <QTimer>

SivTest::SivTest(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SivTest)
{
    ui->setupUi(this);

    this->timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(resetFlag()));
}

SivTest::~SivTest()
{
    delete ui;
}

void SivTest::showEvent(QShowEvent *)
{
    if (this->database->hmiSivCutoutA1)
    {
        ui->btnSivCutoutA1->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnSivCutoutA1->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiSivCutoutC1)
    {
        ui->btnSivCutoutC1->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnSivCutoutC1->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiSivCutoutC2)
    {
        ui->btnSivCutoutC2->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnSivCutoutC2->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiSivCutoutA2)
    {
        ui->btnSivCutoutA2->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnSivCutoutA2->setStyleSheet(BUTTON_UP);
    }
}

void SivTest::on_btnBack_clicked()
{
    this->changePage(uVehicleTestPage);
}

void SivTest::on_btnSivCutoutA1_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiSivCutoutA1)
    {
        this->database->hmiSivCutoutA1 = true;
        ui->btnSivCutoutA1->setStyleSheet(BUTTON_DOWN);

        _LOG << "the siv of A1 has been isolated";
    }
    else
    {
        this->database->hmiSivCutoutA1 = false;
        ui->btnSivCutoutA1->setStyleSheet(BUTTON_UP);

        _LOG << "the isolation of siv of A1 has been canceled";
    }

    this->setFlag();
}

void SivTest::on_btnSivCutoutC1_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiSivCutoutC1)
    {
        this->database->hmiSivCutoutC1 = true;
        ui->btnSivCutoutC1->setStyleSheet(BUTTON_DOWN);

        _LOG << "the siv of C1 has been isolated";
    }
    else
    {
        this->database->hmiSivCutoutC1 = false;
        ui->btnSivCutoutC1->setStyleSheet(BUTTON_UP);

        _LOG << "the isolation of siv of C1 has been canceled";
    }

    this->setFlag();
}

void SivTest::on_btnSivCutoutC2_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiSivCutoutC2)
    {
        this->database->hmiSivCutoutC2 = true;
        ui->btnSivCutoutC2->setStyleSheet(BUTTON_DOWN);

        _LOG << "the siv of C2 has been isolated";
    }
    else
    {
        this->database->hmiSivCutoutC2 = false;
        ui->btnSivCutoutC2->setStyleSheet(BUTTON_UP);

        _LOG << "the isolation of siv of C2 has been canceled";
    }

    this->setFlag();
}

void SivTest::on_btnSivCutoutA2_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiSivCutoutA2)
    {
        this->database->hmiSivCutoutA2 = true;
        ui->btnSivCutoutA2->setStyleSheet(BUTTON_DOWN);

        _LOG << "the siv of A2 has been isolated";
    }
    else
    {
        this->database->hmiSivCutoutA2 = false;
        ui->btnSivCutoutA2->setStyleSheet(BUTTON_UP);

        _LOG << "the isolation of siv of A2 has been canceled";
    }

    this->setFlag();
}

void SivTest::setFlag()
{
    this->timer->start(5000);
    this->database->hmiSecurityCode = 0xAA;
}

void SivTest::resetFlag()
{
    this->timer->stop();
    this->database->hmiSecurityCode = 0x55;
}

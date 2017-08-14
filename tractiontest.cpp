#include "tractiontest.h"
#include "ui_tractiontest.h"
#include <QDebug>
#include <QTimer>

TractionTest::TractionTest(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::TractionTest)
{
    ui->setupUi(this);

    this->timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(resetFlag()));
}

TractionTest::~TractionTest()
{
    delete ui;
}

void TractionTest::showEvent(QShowEvent *)
{
    if (this->database->hmiDcuBrakeResistorTestB1)
    {
        ui->btnResistorTestB1->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnResistorTestB1->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiDcuBrakeResistorTestC1)
    {
        ui->btnResistorTestC1->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnResistorTestC1->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiDcuBrakeResistorTestD1)
    {
        ui->btnResistorTestD1->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnResistorTestD1->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiDcuBrakeResistorTestD2)
    {
        ui->btnResistorTestD2->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnResistorTestD2->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiDcuBrakeResistorTestC2)
    {
        ui->btnResistorTestC2->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnResistorTestC2->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiDcuBrakeResistorTestB2)
    {
        ui->btnResistorTestB2->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnResistorTestB2->setStyleSheet(BUTTON_UP);
    }

    if (this->database->hmiElectricCutout)
    {
        ui->btnElectricBrakeCutout->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnElectricBrakeCutout->setStyleSheet(BUTTON_UP);
    }
}

void TractionTest::on_btnBack_clicked()
{
    this->changePage(uVehicleTestPage);
}

void TractionTest::on_btnResistorTestB1_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiDcuBrakeResistorTestB1)
    {
        this->database->hmiDcuBrakeResistorTestB1 = true;
        ui->btnResistorTestB1->setStyleSheet(BUTTON_DOWN);

        _LOG << "test brake resistor of B1";
    }
    else
    {
        this->database->hmiDcuBrakeResistorTestB1 = false;
        ui->btnResistorTestB1->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the test of brake resistor of B1";
    }

    this->setFlag();
}

void TractionTest::on_btnResistorTestC1_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiDcuBrakeResistorTestC1)
    {
        this->database->hmiDcuBrakeResistorTestC1 = true;
        ui->btnResistorTestC1->setStyleSheet(BUTTON_DOWN);

        _LOG << "test brake resistor of C1";
    }
    else
    {
        this->database->hmiDcuBrakeResistorTestC1 = false;
        ui->btnResistorTestC1->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the test of brake resistor of C1";
    }

    this->setFlag();
}

void TractionTest::on_btnResistorTestD1_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiDcuBrakeResistorTestD1)
    {
        this->database->hmiDcuBrakeResistorTestD1 = true;
        ui->btnResistorTestD1->setStyleSheet(BUTTON_DOWN);

        _LOG << "test brake resistor of D1";
    }
    else
    {
        this->database->hmiDcuBrakeResistorTestD1 = false;
        ui->btnResistorTestD1->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the test of brake resistor of D1";
    }

    this->setFlag();
}

void TractionTest::on_btnResistorTestD2_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiDcuBrakeResistorTestD2)
    {
        this->database->hmiDcuBrakeResistorTestD2 = true;
        ui->btnResistorTestD2->setStyleSheet(BUTTON_DOWN);

        _LOG << "test brake resistor of D2";
    }
    else
    {
        this->database->hmiDcuBrakeResistorTestD2 = false;
        ui->btnResistorTestD2->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the test of brake resistor of D2";
    }

    this->setFlag();
}

void TractionTest::on_btnResistorTestC2_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiDcuBrakeResistorTestC2)
    {
        this->database->hmiDcuBrakeResistorTestC2 = true;
        ui->btnResistorTestC2->setStyleSheet(BUTTON_DOWN);

        _LOG << "test brake resistor of C2";
    }
    else
    {
        this->database->hmiDcuBrakeResistorTestC2 = false;
        ui->btnResistorTestC2->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the test of brake resistor of C2";
    }

    this->setFlag();
}

void TractionTest::on_btnResistorTestB2_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiDcuBrakeResistorTestB2)
    {
        this->database->hmiDcuBrakeResistorTestB2 = true;
        ui->btnResistorTestB2->setStyleSheet(BUTTON_DOWN);

        _LOG << "test brake resistor of B2";
    }
    else
    {
        this->database->hmiDcuBrakeResistorTestB2 = false;
        ui->btnResistorTestB2->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the test of brake resistor of B2";
    }

    this->setFlag();
}

void TractionTest::on_btnElectricBrakeCutout_clicked()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (false == this->database->hmiElectricCutout)
    {
        this->database->hmiElectricCutout = true;
        ui->btnElectricBrakeCutout->setStyleSheet(BUTTON_DOWN);

        _LOG << "cut out the electric brake";
    }
    else
    {
        this->database->hmiElectricCutout = false;
        ui->btnElectricBrakeCutout->setStyleSheet(BUTTON_UP);

        _LOG << "cancel the cutout of the electric brake";
    }

    this->setFlag();
}

void TractionTest::setFlag()
{
    this->timer->start(5000);
    this->database->hmiSecurityCode = 0xAA;
}

void TractionTest::resetFlag()
{
    this->timer->stop();
    this->database->hmiSecurityCode = 0x55;
}

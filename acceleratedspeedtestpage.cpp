#include "acceleratedspeedtestpage.h"
#include "ui_acceleratedspeedtestpage.h"
#include "global.h"
#include <QDebug>

AcceleratedSpeedTestPage::AcceleratedSpeedTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::AcceleratedSpeedTestPage)
{
    ui->setupUi(this);
}

AcceleratedSpeedTestPage::~AcceleratedSpeedTestPage()
{
    delete ui;
}

void AcceleratedSpeedTestPage::on_btnBack_clicked()
{
    this->changePage(uTroubleShootingPage);
}

void AcceleratedSpeedTestPage::updatePage()
{
    if (this->database->ccuAcceleratedSpeed > 0)
    {
        ui->lblAcceleratePlus->setText(QString::number(this->database->ccuAcceleratedSpeed * 0.01) + QString("m/s²"));
    }
    else
    {
        ui->lblAccelerateMinus->setText(QString::number(this->database->ccuAcceleratedSpeed * 0.01) + QString("m/s²"));
    }

    ui->lblBrakeDistance->setText(QString::number(this->database->ccuBrakeDistance) + QString("m"));
    ui->lblTractionDistance->setText(QString::number(this->database->ccuTractionDistance) + QString("m"));

    ui->lblTractionStartSpeed->setText(QString::number(this->database->ccuTractionStartSpeed) + QString("m/s"));
    ui->lblTractionEndSpeed->setText(QString::number(this->database->ccuTractionEndSpeed) + QString("m/s"));

    ui->lblBrakeStartSpeed->setText(QString::number(this->database->ccuBrakeStartSpeed) + QString("m/s"));
    ui->lblBrakeEndSpeed->setText(QString::number(this->database->ccuBrakeEndSpeed) + QString("m/s"));
}

void AcceleratedSpeedTestPage::on_btnTest_pressed()
{
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (this->database->hmiAcceleratedSpeedTest)
    {
        this->database->hmiAcceleratedSpeedTest = false;
        ui->btnTest->setStyleSheet(BUTTON_UP);
    }
    else
    {
        this->database->hmiAcceleratedSpeedTest = true;
        ui->btnTest->setStyleSheet(BUTTON_DOWN);
    }
}

void AcceleratedSpeedTestPage::showEvent(QShowEvent *)
{
    if (this->database->hmiAcceleratedSpeedTest)
    {
        ui->btnTest->setStyleSheet(BUTTON_DOWN);
    }
    else
    {
        ui->btnTest->setStyleSheet(BUTTON_UP);
    }
}

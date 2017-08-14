#include "vehiclelogo.h"
#include "ui_vehiclelogo.h"

#define ACTIVE_STATE ("background-color: rgb(0, 255, 0);")
#define ACTIVE_ROUND_STATE ("background-color: rgb(0, 255, 0); border-radius: 10px;")
#define UNACTIVE_STATE ("background-color: rgb(192, 192, 192);")
#define UNACTIVE_ROUND_STATE ("background-color: rgb(192, 192, 192); border-radius: 10px;")

VehicleLogo::VehicleLogo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleLogo)
{
    ui->setupUi(this);
}

VehicleLogo::~VehicleLogo()
{
    delete ui;
}

void VehicleLogo::setLeftHeadState(bool active)
{
    if (active)
    {
        ui->lblLeftHead1->setStyleSheet(ACTIVE_ROUND_STATE);
        ui->lblLeftHead2->setStyleSheet(ACTIVE_STATE);
    }
    else
    {
        ui->lblLeftHead1->setStyleSheet(UNACTIVE_ROUND_STATE);
        ui->lblLeftHead2->setStyleSheet(UNACTIVE_STATE);
    }
}

void VehicleLogo::setRightHeadState(bool active)
{
    if (active)
    {
        ui->lblRightHead1->setStyleSheet(ACTIVE_ROUND_STATE);
        ui->lblRightHead2->setStyleSheet(ACTIVE_STATE);
    }
    else
    {
        ui->lblRightHead1->setStyleSheet(UNACTIVE_ROUND_STATE);
        ui->lblRightHead2->setStyleSheet(UNACTIVE_STATE);
    }
}

void VehicleLogo::setA1Number(QString number)
{
    ui->lblA1->setText(number);
}

void VehicleLogo::setB1Number(QString number)
{
    ui->lblB1->setText(number);
}

void VehicleLogo::setC1Number(QString number)
{
    ui->lblC1->setText(number);
}

void VehicleLogo::setD1Number(QString number)
{
    ui->lblD1->setText(number);
}

void VehicleLogo::setD2Number(QString number)
{
    ui->lblD2->setText(number);
}

void VehicleLogo::setC2Number(QString number)
{
    ui->lblC2->setText(number);
}

void VehicleLogo::setB2Number(QString number)
{
    ui->lblB2->setText(number);
}

void VehicleLogo::setA2Number(QString number)
{
    ui->lblA2->setText(number);
}

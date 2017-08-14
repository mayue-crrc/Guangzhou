#include "devicestatenavigator.h"
#include "ui_devicestatenavigator.h"

DeviceStateNavigator::DeviceStateNavigator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeviceStateNavigator)
{
    ui->setupUi(this);
}

DeviceStateNavigator::~DeviceStateNavigator()
{
    delete ui;
}

void DeviceStateNavigator::on_btnDcu_clicked()
{

}

void DeviceStateNavigator::on_btnSiv_clicked()
{

}

void DeviceStateNavigator::on_btnDcdc_clicked()
{

}

void DeviceStateNavigator::on_btnBcu_clicked()
{

}

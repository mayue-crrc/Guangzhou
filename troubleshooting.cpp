#include "troubleshooting.h"
#include "ui_troubleshooting.h"
#include "global.h"
#include <QDebug>

TroubleShooting::TroubleShooting(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::TroubleShooting)
{
    ui->setupUi(this);
}

TroubleShooting::~TroubleShooting()
{
    delete ui;
}

void TroubleShooting::showEvent(QShowEvent *)
{
    ui->btnChangePassword->hide();

    ui->btnLcu->hide();
}

void TroubleShooting::on_btnTimeSet_clicked()
{
    emit this->changePage(uTimeSetPage);
}

void TroubleShooting::on_btnDiameterSet_clicked()
{
    emit this->changePage(uDiameterSetPage);
}

void TroubleShooting::on_btnVehicleNumber_clicked()
{
    emit this->changePage(uVehicleNumberSetPage);
}

void TroubleShooting::on_btnVehicleTest_clicked()
{
    emit this->changePage(uVehicleTestPage);
}

void TroubleShooting::on_btnAccumulation_clicked()
{
    emit this->changePage(uDataRecordPage);
}

void TroubleShooting::on_btnNetwork_clicked()
{
    emit this->changePage(uNetworkPage);
}

void TroubleShooting::on_btnColorCheck_clicked()
{
    emit this->changePage(uColorCheckPage);
}

void TroubleShooting::on_btnDeviceState_clicked()
{
    emit this->changePage(uSivParametersPage);
}

void TroubleShooting::on_btnVersion_clicked()
{
    emit this->changePage(uSoftwareVersionPage);
}

void TroubleShooting::on_btnFaultRecord_clicked()
{
    emit this->changePage(uHistoryFaultPage);
}

void TroubleShooting::on_btnChangePassword_clicked()
{
    emit this->changePage(uPasswordSetPage);
}

void TroubleShooting::on_btnIOUnit_clicked()
{
    emit this->changePage(uDigtalIoA1Page);
}

void TroubleShooting::on_btnMvbPort_clicked()
{
    emit this->changePage(uPortDataPage);
}

void TroubleShooting::on_btnAllPorts_clicked()
{
    emit this->changePage(uAllPortsPage);
}

void TroubleShooting::on_btnHmiPositionSet_clicked()
{
    emit this->changePage(uHmiPositionSetPage);
}

void TroubleShooting::on_btnBusState_clicked()
{
    emit this->changePage(uMvbStatePage);
}

void TroubleShooting::on_btnLcu_clicked()
{
    emit this->changePage(uLcuPage);
}

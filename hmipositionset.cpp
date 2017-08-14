#include "hmipositionset.h"
#include "ui_hmipositionset.h"
#include "myfunction.h"
#include "database.h"
#include <QDebug>

HmiPositionSet::HmiPositionSet(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::HmiPositionSet)
{
    ui->setupUi(this);
}

HmiPositionSet::~HmiPositionSet()
{
    delete ui;
}

void HmiPositionSet::on_btnA1_clicked()
{
    MyFunction::set(QString("/Position/position"), 1);
    this->database->hmiPosition = 1;

    this->showEvent(NULL);

    _LOG << "the hmi position has been set to" << this->database->hmiPosition;
}

void HmiPositionSet::on_btnA2_clicked()
{
    MyFunction::set(QString("/Position/position"), 2);
    this->database->hmiPosition = 2;

    this->showEvent(NULL);

    _LOG << "the hmi position has been set to" << this->database->hmiPosition;
}

void HmiPositionSet::showEvent(QShowEvent *)
{
    ui->btnA1->setStyleSheet(BUTTON_UP);
    ui->btnA2->setStyleSheet(BUTTON_UP);

    if (1 == this->database->hmiPosition)
    {
        ui->btnA1->setStyleSheet(BUTTON_DOWN);
    }
    else if (2 == this->database->hmiPosition)
    {
        ui->btnA2->setStyleSheet(BUTTON_DOWN);
    }
}

void HmiPositionSet::on_btnBack_clicked()
{
    emit this->changePage(uTroubleShootingPage);
}

void HmiPositionSet::on_btnReboot_clicked()
{
    system("reboot");
}

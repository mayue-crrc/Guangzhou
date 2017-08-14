#include "bypass.h"
#include "ui_bypass.h"

#define BYPASS_ACTIVE ("background-color: yellow;")
#define BYPASS_UNACTIVE ("background-color: gray;")

Bypass::Bypass(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Bypass)
{
    ui->setupUi(this);
}

Bypass::~Bypass()
{
    delete ui;
}

void Bypass::updatePage()
{
    // A1
    this->setBypassState(ui->lblBypass1A1, this->database->watchOutByPassA1);
    this->setBypassState(ui->lblBypass2A1, this->database->doorSafeByPassA1);
    this->setBypassState(ui->lblBypass3A1, this->database->doorZeroSpeedByPassA1);
    this->setBypassState(ui->lblBypass4A1, this->database->parkingBrkByPassA1);
    this->setBypassState(ui->lblBypass5A1, this->database->brakeNoRelByPassA1);
    this->setBypassState(ui->lblBypass6A1, this->database->autoCouplerByPassA1);
    this->setBypassState(ui->lblBypass7A1, this->database->trainIntegrityByPassA1);
    this->setBypassState(ui->lblBypass8A1, this->database->mrpPresLowBypass2A1);
    this->setBypassState(ui->lblBypass9A1, this->database->mrpPresLowBypass1A1);
    this->setBypassState(ui->lblBypass10A1, this->database->EBComBypassA1);
    this->setBypassState(ui->lblBypass11A1, this->database->largeBypassA1);

    // A2
    this->setBypassState(ui->lblBypass1A2, this->database->watchOutByPassA2);
    this->setBypassState(ui->lblBypass2A2, this->database->doorSafeByPassA2);
    this->setBypassState(ui->lblBypass3A2, this->database->doorZeroSpeedByPassA2);
    this->setBypassState(ui->lblBypass4A2, this->database->parkingBrkByPassA2);
    this->setBypassState(ui->lblBypass5A2, this->database->brakeNoRelByPassA2);
    this->setBypassState(ui->lblBypass6A2, this->database->autoCouplerByPassA2);
    this->setBypassState(ui->lblBypass7A2, this->database->trainIntegrityByPassA2);
    this->setBypassState(ui->lblBypass8A2, this->database->mrpPresLowBypass2A2);
    this->setBypassState(ui->lblBypass9A2, this->database->mrpPresLowBypass1A2);
    this->setBypassState(ui->lblBypass10A2, this->database->EBComBypassA2);
    this->setBypassState(ui->lblBypass11A2, this->database->largeBypassA2);
}

void Bypass::setBypassState(QLabel *label, bool state)
{
    if (state)
    {
        label->setStyleSheet(BYPASS_ACTIVE);
    }
    else
    {
        label->setStyleSheet(BYPASS_UNACTIVE);
    }
}

#include "firealarmreset.h"
#include "ui_firealarmreset.h"

FireAlarmReset::FireAlarmReset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FireAlarmReset)
{
    ui->setupUi(this);
}

FireAlarmReset::~FireAlarmReset()
{
    delete ui;
}

void FireAlarmReset::on_btnReset_clicked()
{
    this->hide();

    emit this->reset(true);
}

void FireAlarmReset::on_btnCancel_clicked()
{
    this->hide();

    emit this->reset(false);
}

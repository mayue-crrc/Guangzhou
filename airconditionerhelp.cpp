#include "airconditionerhelp.h"
#include "ui_airconditionerhelp.h"

AirConditionerHelp::AirConditionerHelp(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::AirConditionerHelp)
{
    ui->setupUi(this);
}

AirConditionerHelp::~AirConditionerHelp()
{
    delete ui;
}

void AirConditionerHelp::mouseReleaseEvent(QMouseEvent *)
{
    this->changePage(uAirConditionerPage);
}

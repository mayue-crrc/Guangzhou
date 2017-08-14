#include "vehiclestatehelp.h"
#include "ui_vehiclestatehelp.h"

VehicleStateHelp::VehicleStateHelp(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleStateHelp)
{
    ui->setupUi(this);
}

VehicleStateHelp::~VehicleStateHelp()
{
    delete ui;
}

void VehicleStateHelp::mouseReleaseEvent(QMouseEvent *)
{
    this->changePage(uVehicleStatePage);
}

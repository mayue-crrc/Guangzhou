#include "vehicleparameterhelp.h"
#include "ui_vehicleparameterhelp.h"

VehicleParameterHelp::VehicleParameterHelp(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleParameterHelp)
{
    ui->setupUi(this);
}

VehicleParameterHelp::~VehicleParameterHelp()
{
    delete ui;
}

void VehicleParameterHelp::mouseReleaseEvent(QMouseEvent *)
{
    this->changePage(uVehicleParameterPage);
}

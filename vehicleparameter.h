#ifndef VEHICLEPARAMETER_H
#define VEHICLEPARAMETER_H

#include "mybase.h"

class VehicleLogo;
class QLabel;

namespace Ui {
    class VehicleParameter;
}

class VehicleParameter : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleParameter(QWidget *parent = 0);
    ~VehicleParameter();
    void showEvent(QShowEvent *);
    void updatePage();

private:
    Ui::VehicleParameter *ui;
    VehicleLogo *vehicleLogo;
    void setPowerPlugState(QLabel *label, bool state);
};

#endif // VEHICLEPARAMETER_H

#ifndef VEHICLEPARAMETERHELP_H
#define VEHICLEPARAMETERHELP_H

#include <QWidget>
#include "mybase.h"

namespace Ui {
    class VehicleParameterHelp;
}

class VehicleParameterHelp : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleParameterHelp(QWidget *parent = 0);
    ~VehicleParameterHelp();
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::VehicleParameterHelp *ui;
};

#endif // VEHICLEPARAMETERHELP_H

#ifndef VEHICLESTATEHELP_H
#define VEHICLESTATEHELP_H

#include <QWidget>
#include "mybase.h"

namespace Ui {
    class VehicleStateHelp;
}

class VehicleStateHelp : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleStateHelp(QWidget *parent = 0);
    ~VehicleStateHelp();
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::VehicleStateHelp *ui;
};

#endif // VEHICLESTATEHELP_H

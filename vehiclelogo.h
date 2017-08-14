#ifndef VEHICLELOGO_H
#define VEHICLELOGO_H

#include <QWidget>

namespace Ui {
    class VehicleLogo;
}

class VehicleLogo : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleLogo(QWidget *parent = 0);
    ~VehicleLogo();
    void setLeftHeadState(bool active);
    void setRightHeadState(bool active);
    void setA1Number(QString number);
    void setB1Number(QString number);
    void setC1Number(QString number);
    void setD1Number(QString number);
    void setD2Number(QString number);
    void setC2Number(QString number);
    void setB2Number(QString number);
    void setA2Number(QString number);

private:
    Ui::VehicleLogo *ui;
};

#endif // VEHICLELOGO_H

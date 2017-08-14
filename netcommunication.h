#ifndef NETCOMMUNICATION_H
#define NETCOMMUNICATION_H

#include <QWidget>
#include "mybase.h"

class VehicleLogo;
class QLabel;

namespace Ui {
    class NetCommunication;
}

class NetCommunication : public MyBase
{
    Q_OBJECT

public:
    explicit NetCommunication(QWidget *parent = 0);
    ~NetCommunication();
    void showEvent(QShowEvent *event);
    void updatePage();

private:
    Ui::NetCommunication *ui;   
    VehicleLogo *vehicleLogo;

private:
    void setDeviceState(QLabel *label, bool state);
    void setDeviceStateMaster(QLabel *label, bool state, bool master);

private slots:
    void on_btnBack_clicked();
};

#endif // NETCOMMUNICATION_H

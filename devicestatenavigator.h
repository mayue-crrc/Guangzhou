#ifndef DEVICESTATENAVIGATOR_H
#define DEVICESTATENAVIGATOR_H

#include <QWidget>

namespace Ui {
    class DeviceStateNavigator;
}

class DeviceStateNavigator : public QWidget
{
    Q_OBJECT

public:
    explicit DeviceStateNavigator(QWidget *parent = 0);
    ~DeviceStateNavigator();

private:
    Ui::DeviceStateNavigator *ui;

private slots:
    void on_btnBcu_clicked();
    void on_btnDcdc_clicked();
    void on_btnSiv_clicked();
    void on_btnDcu_clicked();
};

#endif // DEVICESTATENAVIGATOR_H

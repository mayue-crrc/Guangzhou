#ifndef WHEELDIAMETERSET_H
#define WHEELDIAMETERSET_H

#include "mybase.h"

class KeyboardHorizon;
class VehicleLogo;
class QPushButton;
class QLabel;

namespace Ui {
    class WheelDiameterSet;
}

class QTimer;

class WheelDiameterSet : public MyBase
{
    Q_OBJECT

public:
    explicit WheelDiameterSet(QWidget *parent = 0);
    ~WheelDiameterSet();
    KeyboardHorizon *keyboard;
    VehicleLogo *vehicleLogo;
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::WheelDiameterSet *ui;
    QList<QPushButton *> buttons;
    QList<QLabel *> labels;
    QList<QLabel *> originLabels;
    int counter;
    QTimer *timer;
    void setWheelDiameterByIndex(int index);

public slots:
    void selectButton(int index);
    void myKeyPressEvent(QString);
    void mySelectEvent();
    void wheelDiamterCommandReset();
signals:

};

#endif // WHEELDIAMETERSET_H

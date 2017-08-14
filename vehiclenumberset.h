#ifndef VEHICLENUMBERSET_H
#define VEHICLENUMBERSET_H

#include "mybase.h"

class KeyboardVerticality;
class QPushButton;
class QTimer;

namespace Ui {
    class VehicleNumberSet;
}

class VehicleNumberSet : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleNumberSet(QWidget *parent = 0);
    ~VehicleNumberSet();
    void updatePage();
    void showEvent(QShowEvent *event);

private:
    Ui::VehicleNumberSet *ui;
    QList<QPushButton *> buttons;
    int counter;
    QList<QString *> vehicleNumber;
    QTimer *timer;

public:
    KeyboardVerticality *keyboardVerticality;

public slots:
    void keyboardEvent(QString key);
    void mySelect();
    void resetCommand();
signals:

};

#endif // VEHICLENUMBERSET_H

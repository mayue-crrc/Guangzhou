#ifndef MVBSTATE_H
#define MVBSTATE_H

#include <QWidget>
#include "mybase.h"

class VehicleLogo;
class QLabel;

namespace Ui {
    class MvbState;
}

class MvbState : public MyBase
{
    Q_OBJECT

public:
    explicit MvbState(QWidget *parent = 0);
    ~MvbState();
    void updatePage();
    void showEvent(QShowEvent *);
    void setRldState(QLabel *label, bool state);

private:
    Ui::MvbState *ui;
    VehicleLogo *vehicleLogo;

private:
    QString boolToQString(bool signal);

private slots:
    void on_btnBack_clicked();
};

#endif // MVBSTATE_H

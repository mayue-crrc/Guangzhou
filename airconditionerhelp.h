#ifndef AIRCONDITIONERHELP_H
#define AIRCONDITIONERHELP_H

#include "mybase.h"

namespace Ui {
    class AirConditionerHelp;
}

class AirConditionerHelp : public MyBase
{
    Q_OBJECT

public:
    explicit AirConditionerHelp(QWidget *parent = 0);
    ~AirConditionerHelp();
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::AirConditionerHelp *ui;
};

#endif // AIRCONDITIONERHELP_H

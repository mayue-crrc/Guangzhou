#ifndef BYPASS_H
#define BYPASS_H

#include "mybase.h"

namespace Ui {
    class Bypass;
}

class QLabel;

class Bypass : public MyBase
{
    Q_OBJECT

public:
    explicit Bypass(QWidget *parent = 0);
    ~Bypass();

public:
    void updatePage();

private:
    Ui::Bypass *ui;

private:
    void setBypassState(QLabel *label, bool state);
};

#endif // BYPASS_H

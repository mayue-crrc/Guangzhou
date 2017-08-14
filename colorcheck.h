#ifndef COLORCHECK_H
#define COLORCHECK_H

#include <QWidget>
#include "mybase.h"

namespace Ui {
    class ColorCheck;
}

class ColorCheck : public MyBase
{
    Q_OBJECT

public:
    explicit ColorCheck(QWidget *parent = 0);
    ~ColorCheck();
    void showEvent(QShowEvent *event);

private:
    Ui::ColorCheck *ui;
    int counter;

private slots:


private slots:
    void on_btnCheckColor_clicked();
};

#endif // COLORCHECK_H

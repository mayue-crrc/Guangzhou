#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "mybase.h"

class QPushButton;
class QVector<QPushButton>;

namespace Ui {
    class Navigator;
}

class Navigator : public MyBase
{
    Q_OBJECT

public:
    explicit Navigator(QWidget *parent = 0);
    ~Navigator();
    bool eventFilter(QObject *target, QEvent *event);
    QVector<QPushButton *> buttons;
    void updatePage();

public slots:

private:
    Ui::Navigator *ui;
    void setButtonStateBySignals();
};

#endif // NAVIGATOR_H

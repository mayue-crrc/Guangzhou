#ifndef DATETIMESET_H
#define DATETIMESET_H

#include "mybase.h"

class QLabel;
class KeyboardHorizon;
class QTimer;

namespace Ui {
    class DateTimeSet;
}

class DateTimeSet : public MyBase
{
    Q_OBJECT

public:
    explicit DateTimeSet(QWidget *parent = 0);
    ~DateTimeSet();
    void setSelectedLabel(int index);
    void showEvent(QShowEvent *event);

private:
    Ui::DateTimeSet *ui;
    QList<QLabel *> labels;
    KeyboardHorizon *keyboard;
    int counter;
    int year, month, day, hour, minute, second;
    QTimer *timer;
    void setHmiSetTimeCommand();

public slots:
    void selectLabel();
    void myKeyPressEvent(QString key);
    void resetHmiSetTimeCommand();
signals:

};

#endif // DATETIMESET_H

#ifndef FIREALARM_H
#define FIREALARM_H

#include "mybase.h"

namespace Ui {
    class FireAlarm;
}

class FireAlarmReset;
class QTimer;

class FireAlarm : public MyBase
{
    Q_OBJECT

public:
    explicit FireAlarm(QWidget *parent = 0);
    ~FireAlarm();
    void showEvent(QShowEvent *);
    void updatePage();

private:
    Ui::FireAlarm *ui;
    FireAlarmReset *fireAlarmReset;
    QTimer *timer;

private slots:
    void on_btnSetting_clicked();
    void reset(bool);
    void resetFlag();
};

#endif // FIREALARM_H

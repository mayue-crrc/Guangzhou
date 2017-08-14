#ifndef FIREALARMRESET_H
#define FIREALARMRESET_H

#include <QWidget>

namespace Ui {
    class FireAlarmReset;
}

class FireAlarmReset : public QWidget
{
    Q_OBJECT

public:
    explicit FireAlarmReset(QWidget *parent = 0);
    ~FireAlarmReset();

private:
    Ui::FireAlarmReset *ui;

private slots:
    void on_btnCancel_clicked();
    void on_btnReset_clicked();
signals:
    void reset(bool);
};

#endif // FIREALARMRESET_H

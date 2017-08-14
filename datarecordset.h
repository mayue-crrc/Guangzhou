#ifndef DATARECORDSET_H
#define DATARECORDSET_H

#include "mybase.h"

class QPushButton;
class KeyboardHorizon;
class QTimer;

namespace Ui {
    class DataRecordSet;
}

class DataRecordSet : public MyBase
{
    Q_OBJECT

public:
    explicit DataRecordSet(QWidget *parent = 0);
    ~DataRecordSet();
    void showEvent(QShowEvent *);
    void startTheTimer(unsigned short int time);

private:
    Ui::DataRecordSet *ui;
    KeyboardHorizon *keyboardHorizon;
    QList<QPushButton *> buttons;
    int counter;
    QTimer *timer;

private slots:
    void on_btnRecordDistanceSet_clicked();
    void on_btnRecordTimeSet_clicked();
    void on_btnRegeneratePowerSet_clicked();
    void on_btnBrakeConsuptionSet_clicked();
    void on_btnTractionConsumptionSet_clicked();
    void on_btnSivConsumptionSet_clicked();
    void on_btnConsumptionSet_clicked();
    void on_btnCompressor2Set_clicked();
    void on_btnCompressor1Set_clicked();
    void on_btnMileageSet_clicked();
    void myKeyPressEvent(QString key);
    void mySelection();
    void myRecordSet();
    void resetFlag();
};

#endif // DATARECORDSET_H

#ifndef TRACTIONTEST_H
#define TRACTIONTEST_H

#include "mybase.h"

namespace Ui {
    class TractionTest;
}

class QTimer;

class TractionTest : public MyBase
{
    Q_OBJECT

public:
    explicit TractionTest(QWidget *parent = 0);
    ~TractionTest();
    void showEvent(QShowEvent *);

private:
    Ui::TractionTest *ui;
    QTimer *timer;
    void setFlag();

private slots:
    void on_btnElectricBrakeCutout_clicked();
    void on_btnResistorTestB2_clicked();
    void on_btnResistorTestC2_clicked();
    void on_btnResistorTestD2_clicked();
    void on_btnResistorTestD1_clicked();
    void on_btnResistorTestC1_clicked();
    void on_btnResistorTestB1_clicked();
    void on_btnBack_clicked();
    void resetFlag();
};

#endif // TRACTIONTEST_H

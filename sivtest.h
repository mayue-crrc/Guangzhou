#ifndef SIVTEST_H
#define SIVTEST_H

#include "mybase.h"

namespace Ui {
    class SivTest;
}

class QTimer;

class SivTest : public MyBase
{
    Q_OBJECT

public:
    explicit SivTest(QWidget *parent = 0);
    ~SivTest();
    void showEvent(QShowEvent *);

private:
    Ui::SivTest *ui;
    QTimer *timer;
    void setFlag();

private slots:
    void on_btnSivCutoutA2_clicked();
    void on_btnSivCutoutC2_clicked();
    void on_btnSivCutoutC1_clicked();
    void on_btnSivCutoutA1_clicked();
    void on_btnBack_clicked();
    void resetFlag();
};

#endif // SIVTEST_H

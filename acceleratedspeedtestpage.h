#ifndef ACCELERATEDSPEEDTESTPAGE_H
#define ACCELERATEDSPEEDTESTPAGE_H

#include "mybase.h"

namespace Ui {
    class AcceleratedSpeedTestPage;
}

class AcceleratedSpeedTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit AcceleratedSpeedTestPage(QWidget *parent = 0);
    ~AcceleratedSpeedTestPage();
    void showEvent(QShowEvent *);
    void updatePage();

private:
    Ui::AcceleratedSpeedTestPage *ui;

private slots:
    void on_btnTest_pressed();
    void on_btnBack_clicked();
};

#endif // ACCELERATEDSPEEDTESTPAGE_H

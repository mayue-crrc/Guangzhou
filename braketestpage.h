#ifndef BRAKETESTPAGE_H
#define BRAKETESTPAGE_H

#include <QWidget>
#include "mybase.h"
#include <QList>

class QTimer;
class QLabel;

namespace Ui {
    class BrakeTestPage;
}

class BrakeTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit BrakeTestPage(QWidget *parent = 0);
    ~BrakeTestPage();
    void updatePage();

private:
    Ui::BrakeTestPage *ui;
    QTimer *timer;
    void checkResult(QLabel *, QList<bool> &);

private:
    void setSelfCheckFlag();

private slots:
    void on_btnCheck_clicked();
    void on_btnBack_clicked();
    void resetSelfCheckFlag();
};

#endif // BRAKETESTPAGE_H

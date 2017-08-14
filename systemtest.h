#ifndef SYSTEMTEST_H
#define SYSTEMTEST_H

#include "mybase.h"

class QPushButton;

namespace Ui {
    class SystemTest;
}

class SystemTest : public MyBase
{
    Q_OBJECT

public:
    explicit SystemTest(QWidget *parent = 0);
    ~SystemTest();
    void showEvent(QShowEvent *);

private:
    Ui::SystemTest *ui;
    bool getButtonState(QPushButton *button);
    QList<QPushButton *> buttons;

public slots:
    void mySelect();
signals:

private slots:
    void on_btnBack_clicked();
    void on_btnConfirm_clicked();
};

#endif // SYSTEMTEST_H

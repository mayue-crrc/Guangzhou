#ifndef PASSWORDSET_H
#define PASSWORDSET_H

#include <QWidget>
#include "mybase.h"

class KeyboardHorizon;
class QPushButton;

namespace Ui {
    class PasswordSet;
}

class PasswordSet : public MyBase
{
    Q_OBJECT

public:
    explicit PasswordSet(QWidget *parent = 0);
    ~PasswordSet();
    void showEvent(QShowEvent *);

private:
    Ui::PasswordSet *ui;
    KeyboardHorizon *keyboard;
    QList<QPushButton *> buttons;
    int counter;

private slots:
    void on_btn2Set_clicked();
    void on_btn1Set_clicked();
    void myKeyPressEvent(QString);
    void mySelect();
};

#endif // PASSWORDSET_H

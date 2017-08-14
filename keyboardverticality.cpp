#include "keyboardverticality.h"
#include "ui_keyboardverticality.h"

KeyboardVerticality::KeyboardVerticality(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyboardVerticality)
{
    ui->setupUi(this);

    QPushButton *buttons[] = {
                                ui->btn0,
                                ui->btn1,
                                ui->btn2,
                                ui->btn3,
                                ui->btn4,
                                ui->btn5,
                                ui->btn6,
                                ui->btn7,
                                ui->btn8,
                                ui->btn9,
                                ui->btnConfirm,
                                ui->btnDel,
                                ui->btnBack
                             };

    for (int i = 0; i < (sizeof buttons / sizeof (QPushButton *)); i ++)
    {
        connect(buttons[i], SIGNAL(clicked()), this, SLOT(myKeyPressEvent()));
    }
}

KeyboardVerticality::~KeyboardVerticality()
{
    delete ui;
}

void KeyboardVerticality::myKeyPressEvent()
{
    QString key = ((QPushButton *)this->sender())->text();

    emit this->myKeyPress(key);
}

void KeyboardVerticality::setConfirmState(bool lock)
{
    ui->btnConfirm->setEnabled(lock);
}

void KeyboardVerticality::setBackState(bool lock)
{
    ui->btnBack->setEnabled(lock);
}

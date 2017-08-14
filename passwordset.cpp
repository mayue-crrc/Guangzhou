#include "passwordset.h"
#include "ui_passwordset.h"
#include "keyboardhorizon.h"
#include "myfunction.h"
#include <QDebug>

#define LABEL_SELECTED ("background-color: rgb(0, 0, 255); border:2px solid white; color: white;")
#define LABEL_UNSELECTED ("background-color: black; border:2px solid white;; color: white;")

PasswordSet::PasswordSet(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::PasswordSet)
{
    ui->setupUi(this);

    this->keyboard = new KeyboardHorizon(this);
    this->keyboard->setGeometry(60, 460, this->keyboard->width(), this->keyboard->height());
    connect(this->keyboard, SIGNAL(myKeyPress(QString)), this, SLOT(myKeyPressEvent(QString)));

    // banding the signals and the slots
    buttons << ui->btn1Origin
            << ui->btn1New
            << ui->btn1Confirm
            << ui->btn2Origin
            << ui->btn2New
            << ui->btn2Confirm;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(mySelect()));
    }

    this->counter = 0;
    ui->btn1Origin->setStyleSheet(LABEL_SELECTED);

    // the confirm button is unavailiable in this page
    this->keyboard->hideButtonConfirm();
    this->keyboard->show();
}

PasswordSet::~PasswordSet()
{
    delete ui;
}

void PasswordSet::myKeyPressEvent(QString key)
{
    if (QString("返回") == key)
    {
        emit this->changePage(uTroubleShootingPage);
    }
    else if(QString("DEL") == key)
    {
        this->buttons.at(this->counter)->setText("");
    }
    else
    {
        QString text = this->buttons.at(this->counter)->text();

        text += key;
        this->buttons.at(this->counter)->setText(text);
    }
}

void PasswordSet::mySelect()
{
    for (int i = 0; i < this->buttons.length(); i ++)
    {
        if (this->sender() == this->buttons.at(i))
        {
            this->buttons.at(i)->setStyleSheet(LABEL_SELECTED);
            this->counter = i;
        }
        else
        {
            this->buttons.at(i)->setStyleSheet(LABEL_UNSELECTED);
        }
    }
}

void PasswordSet::showEvent(QShowEvent *)
{
    ui->lbl1Tips->hide();
    ui->lbl2Tips->hide();

    // clear all when come in
    foreach (QPushButton *button, this->buttons)
    {
        button->setText("");
    }
}

void PasswordSet::on_btn1Set_clicked()
{
    QString originalPassword = ui->btn1Origin->text(),
            newPassword = ui->btn1New->text(),
            confirmPassword = ui->btn1Confirm->text();

    if (originalPassword != this->database->troubleShootingPassword)
    {
        ui->lbl1Tips->setText("密码不正确，请重新输入！");
        ui->lbl1Tips->show();
    }
    else if (newPassword.length() == 0)
    {
        ui->lbl1Tips->setText("密码不能为空，请重新输入！");
        ui->lbl1Tips->show();
    }
    else if (QString::compare(newPassword, confirmPassword) != 0)
    {
        ui->lbl1Tips->setText("新密码不匹配，请重新输入！");
        ui->lbl1Tips->show();
    }
    else
    {
        MyFunction::set(QString("/Password/troubleShooting"), newPassword);
        this->database->troubleShootingPassword = newPassword;

        _LOG << "the troubleshooting password has been changed to" << newPassword;

        ui->lbl1Tips->setText("密码设置成功！");
        ui->lbl1Tips->show();
    }
}

void PasswordSet::on_btn2Set_clicked()
{
    QString originalPassword = ui->btn2Origin->text(),
            newPassword = ui->btn2New->text(),
            confirmPassword = ui->btn2Confirm->text();

    if (originalPassword != this->database->dataRecordSetPassword)
    {
        ui->lbl2Tips->setText("密码不正确，请重新输入！");
        ui->lbl2Tips->show();
    }
    else if (newPassword.length() == 0)
    {
        ui->lbl2Tips->setText("密码不能为空，请重新输入！");
        ui->lbl2Tips->show();
    }
    else if (QString::compare(newPassword, confirmPassword) != 0)
    {
        ui->lbl2Tips->setText("新密码不匹配，请重新输入！");
        ui->lbl2Tips->show();
    }
    else
    {
        MyFunction::set(QString("/Password/dataRecordSet"), newPassword);
        this->database->dataRecordSetPassword = newPassword;

        _LOG << "the date record set password has been changed to" << newPassword;

        ui->lbl2Tips->setText("密码设置成功！");
        ui->lbl2Tips->show();
    }
}

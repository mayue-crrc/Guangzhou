#include "troubleshootinglogin.h"
#include "ui_troubleshootinglogin.h"
#include "global.h"
#include <QDebug>
#include <QDateTime>

TroubleShootingLogin::TroubleShootingLogin(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::TroubleShootingLogin)
{
    ui->setupUi(this);

    this->password = QString("");
    this->targetPage = 1;

    ui->lblPasswordWrong->hide();

    QPushButton *buttons[] = {
                                ui->btn1,
                                ui->btn2,
                                ui->btn3,
                                ui->btn4,
                                ui->btn5,
                                ui->btn6,
                                ui->btn7,
                                ui->btn8,
                                ui->btn9,
                                ui->btn0,
                                ui->btnDel,
                                ui->btnConfirm,
                                ui->btnCancel
                             };

    for (int i = 0; i < (sizeof buttons) / (sizeof buttons[0]); i ++)
    {
        connect(buttons[i], SIGNAL(clicked()), this, SLOT(keyboardEvent()));
    }
}

TroubleShootingLogin::~TroubleShootingLogin()
{
    delete ui;
}

void TroubleShootingLogin::setPassword(QString password)
{
    this->password = password;
}

void TroubleShootingLogin::keyboardEvent()
{
    if (this->sender() == ui->btnConfirm)
    {
        int year, month, day, hour;
        QString dynamicPassword;

        year = QDate::currentDate().toString("yyyy").toUInt();
        month = QDate::currentDate().toString("MM").toUInt();
        day = QDate::currentDate().toString("dd").toUInt();
        hour = QTime::currentTime().toString("hh").toUInt();
        dynamicPassword = QString::number(year + month + day + hour);

        if (this->password == this->input)
        {
            ui->lblPasswordWrong->hide();
            this->input.clear();
            ui->lblPassword->setText("");

            emit this->changePage(this->targetPage);
        }
        else if (this->input == dynamicPassword)
        {
            ui->lblPasswordWrong->hide();
            this->input.clear();
            ui->lblPassword->setText("");

            emit this->changePage(this->targetPage);
        }
        else
        {
            this->input.clear();
            ui->lblPassword->setText("");

            ui->lblPasswordWrong->show();
        }
    }
    else if (this->sender() == ui->btnCancel)
    {
        // If the current page is the page of data record setting,
        // it would be back to the page of date record when the button of cancel clicked.
        if (uDataRecordSetLoginPage == this->currentPage)
        {
            emit this->changePage(uDataRecordPage);
        }
        else if (uTroubleShootingLoginPage == this->currentPage)
        {
            this->input.clear();
            ui->lblPassword->setText("");
        }
    }
    else if (this->sender() == ui->btnDel)
    {
        if (this->input.length() > 0)
        {
            this->input.remove(this->input.length() - 1, 1);
        }
    }
    else
    {
        if (this->input.length() < 6)
        {
            this->input += ((QPushButton *)this->sender())->text();
        }
    }

    ui->lblPassword->setText("");

    for (int i = 0; i < this->input.length(); i ++)
    {
        ui->lblPassword->setText(ui->lblPassword->text() + QString("*"));
    }
}

void TroubleShootingLogin::showEvent(QShowEvent *)
{
    // set the password according to the type of the page
    if (uTroubleShootingLoginPage == this->currentPage)
    {
        this->setPassword(this->database->troubleShootingPassword);
        this->targetPage = uTroubleShootingPage;
    }
    else if (uDataRecordSetLoginPage == this->currentPage)
    {
        this->setPassword(this->database->dataRecordSetPassword);
        this->targetPage = uDataRecordSetPage;
    }
}

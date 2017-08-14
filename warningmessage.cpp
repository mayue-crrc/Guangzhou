#include "warningmessage.h"
#include "ui_warningmessage.h"

WarningMessage::WarningMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WarningMessage)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
}

WarningMessage::~WarningMessage()
{
    delete ui;
}

void WarningMessage::setConfirmButtonState(bool state)
{
    if (state)
    {
        ui->btnConfirm->show();
    }
    else
    {
        ui->btnConfirm->hide();
    }
}

void WarningMessage::on_btnConfirm_clicked()
{
    this->close();
}

void WarningMessage::setMessage(QString message)
{
    ui->lblMessage->setText(message);
}

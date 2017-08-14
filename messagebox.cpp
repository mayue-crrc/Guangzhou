#include "messagebox.h"
#include "ui_messagebox.h"

MessageBox::MessageBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageBox)
{
    ui->setupUi(this);
}

MessageBox::~MessageBox()
{
    delete ui;
}

void MessageBox::on_btnConfirm_clicked()
{
    this->hide();
}

void MessageBox::setMessage(QString message)
{
    ui->lblMessage->setText(message);
}

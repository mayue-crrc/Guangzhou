#include "colorcheck.h"
#include "ui_colorcheck.h"
#include "mybase.h"

#define COLOR_CHECK1 QString("border-image: url(:/images/colorCheck1.png);")
#define COLOR_CHECK2 QString("border-image: url(:/images/colorCheck2.png);")
#define COLOR_CHECK3 QString("border-image: url(:/images/colorCheck3.png);")

ColorCheck::ColorCheck(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ColorCheck)
{
    ui->setupUi(this);
}

ColorCheck::~ColorCheck()
{
    delete ui;
}

void ColorCheck::showEvent(QShowEvent *)
{
    this->counter = 0;
    ui->btnCheckColor->setStyleSheet(COLOR_CHECK1);
}

void ColorCheck::on_btnCheckColor_clicked()
{
    if (this->counter == 0)
    {
        ui->btnCheckColor->setStyleSheet(COLOR_CHECK2);
        this->counter ++;
    }
    else if (this->counter == 1)
    {
        ui->btnCheckColor->setStyleSheet(COLOR_CHECK3);
        this->counter ++;
    }
    else
    {
        emit this->changePage(uTroubleShootingPage);
    }
}

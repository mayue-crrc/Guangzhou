#include "lcutestpage.h"
#include "ui_lcutestpage.h"

LcuTestPage::LcuTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::LcuTestPage)
{
    ui->setupUi(this);
}

LcuTestPage::~LcuTestPage()
{
    delete ui;
}

void LcuTestPage::updatePage()
{

}

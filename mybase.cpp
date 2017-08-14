#include "mybase.h"

MyBase::MyBase(QWidget *parent) :
    QWidget(parent)
{
    if (parent != NULL)
    {
        connect(this, SIGNAL(changePage(int)), parent, SLOT(changePage(int)));
    }
}

int MyBase::currentPage = uVehicleStatePage;
Database *MyBase::database = NULL;

void MyBase::setMyBase(pagePosition position, QString name)
{
    if (position == uTop)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }
    else if (position == uMiddle)
    {
        this->setGeometry(0, 100, this->width(), this->height());
    }
    else if (position == uBottom)
    {
        this->setGeometry(0, 700, this->width(), this->height());
    }
    else if (position == uHuge)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }

    this->name = name;

    this->hide();
}

void MyBase::updatePage()
{

}

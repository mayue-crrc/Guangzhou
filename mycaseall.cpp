#include "mycaseall.h"
#include "ui_mycaseall.h"
#include "crrcfault.h"
#include <QDebug>

#define _MY_CASE_MAX_ITEM 8
#define _ITEM_UNSELECTED "color: white; border: 2px groove, gray; border-color: gray; border-width: 0px; font: 18px, \"微软雅黑\"; background-color: black;"
#define _ITEM_SELECTED "color: black; border: 2px groove, gray; border-color: gray; border-width: 0px; font: 18px, \"微软雅黑\"; background-color: yellow;"

MyCaseAll::MyCaseAll(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MyCaseAll)
{
    ui->setupUi(this);

    this->line1 << ui->btnLine1Number << ui->btnLine1Level << ui->btnLine1Code << ui->btnLine1Name << ui->btnLine1Time << ui->btnLine1EndTime;
    this->line2 << ui->btnLine2Number << ui->btnLine2Level << ui->btnLine2Code << ui->btnLine2Name << ui->btnLine2Time << ui->btnLine2EndTime;
    this->line3 << ui->btnLine3Number << ui->btnLine3Level << ui->btnLine3Code << ui->btnLine3Name << ui->btnLine3Time << ui->btnLine3EndTime;
    this->line4 << ui->btnLine4Number << ui->btnLine4Level << ui->btnLine4Code << ui->btnLine4Name << ui->btnLine4Time << ui->btnLine4EndTime;
    this->line5 << ui->btnLine5Number << ui->btnLine5Level << ui->btnLine5Code << ui->btnLine5Name << ui->btnLine5Time << ui->btnLine5EndTime;
    this->line6 << ui->btnLine6Number << ui->btnLine6Level << ui->btnLine6Code << ui->btnLine6Name << ui->btnLine6Time << ui->btnLine6EndTime;
    this->line7 << ui->btnLine7Number << ui->btnLine7Level << ui->btnLine7Code << ui->btnLine7Name << ui->btnLine7Time << ui->btnLine7EndTime;
    this->line8 << ui->btnLine8Number << ui->btnLine8Level << ui->btnLine8Code << ui->btnLine8Name << ui->btnLine8Time << ui->btnLine8EndTime;

    this->page = 1;

    this->clearLine(this->line1);
    this->clearLine(this->line2);
    this->clearLine(this->line3);
    this->clearLine(this->line4);
    this->clearLine(this->line5);
    this->clearLine(this->line6);
    this->clearLine(this->line7);
    this->clearLine(this->line8);

    QList<QPushButton *> buttons;

    buttons << ui->btnLine1Name << ui->btnLine2Name << ui->btnLine3Name << ui->btnLine4Name
                << ui->btnLine5Name << ui->btnLine6Name << ui->btnLine7Name << ui->btnLine8Name;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(itemSelected()), Qt::AutoConnection);
    }

    ui->txtDescription->setWordWrap(true);

    this->userSelectLine = 0;
}

MyCaseAll::~MyCaseAll()
{
    delete ui;
}

void MyCaseAll::on_btnReal_clicked()
{
    this->changePage(uCasePage);
}

void MyCaseAll::installCrrcFault(CrrcFault *crrcFault)
{
    this->crrcFault = crrcFault;
}


void MyCaseAll::updatePage()
{
    if (this->crrcFault->getHistoryFaultListSize() == 0)
    {
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(1));
    }
    else if (this->crrcFault->getHistoryFaultListSize() % _MY_CASE_MAX_ITEM == 0)
    {
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM));

        if (this->page > (this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM))
        {
            this->page = this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM;
        }
    }
    else
    {
        ui->lblPage->setText(QString::number(this->page) + QString(" / ") + QString::number(this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM + 1));

        if (this->page > (this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM + 1))
        {
            this->page = this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM + 1;
        }
    }

    this->clearLine(this->line1);
    this->clearLine(this->line2);
    this->clearLine(this->line3);
    this->clearLine(this->line4);
    this->clearLine(this->line5);
    this->clearLine(this->line6);
    this->clearLine(this->line7);
    this->clearLine(this->line8);

    for (int i = 0; i < this->crrcFault->getHistoryFaultListSize(); i ++)
    {
        if (this->page * _MY_CASE_MAX_ITEM > i && (this->page - 1) * _MY_CASE_MAX_ITEM <= i)
        {
            QList<QString> content;

            // for whole metro
            if (this->crrcFault->getHistoryFaultPosition(i).size() != 0)
            {
                content << QString::number(i + 1)
                        << QString::number(this->crrcFault->getHistoryFaultLevel(i))
                        << this->crrcFault->getHistoryFaultCode(i)
                        << (this->crrcFault->getHistoryFaultPosition(i) + QString("车 ") +  this->crrcFault->getHistoryFaultDevice(i) + QString(" ") + this->crrcFault->getHistoryFaultName(i))
                        << (this->crrcFault->getHistoryFaultStartDate(i) + QString("\n") + this->crrcFault->getHistoryFaultStartTime(i))
                        << (this->crrcFault->getHistoryFaultEndDate(i) + QString("\n") + this->crrcFault->getHistoryFaultEndTime(i));
            }
            else
            {
                content << QString::number(i + 1)
                        << QString::number(this->crrcFault->getHistoryFaultLevel(i))
                        << this->crrcFault->getHistoryFaultCode(i)
                        << (this->crrcFault->getHistoryFaultPosition(i) + QString("") +  this->crrcFault->getHistoryFaultDevice(i) + QString(" ") + this->crrcFault->getHistoryFaultName(i))
                        << (this->crrcFault->getHistoryFaultStartDate(i) + QString("\n") + this->crrcFault->getHistoryFaultStartTime(i))
                        << (this->crrcFault->getHistoryFaultEndDate(i) + QString("\n") + this->crrcFault->getHistoryFaultEndTime(i));
            }

            this->fillTable(i % 8, content);
        }
    }

    // the description of the error
    if (0 == this->userSelectLine)
    {
        ui->txtDescription->setText("");
    }
    else if ((this->page - 1) * _MY_CASE_MAX_ITEM + this->userSelectLine - 1 >= this->crrcFault->getHistoryFaultListSize())
    {
        ui->txtDescription->setText("");
    }
    else
    {
        ui->txtDescription->setText(this->crrcFault->getHistoryFaultDescription((this->page - 1) * _MY_CASE_MAX_ITEM + this->userSelectLine - 1));
    }
}

void MyCaseAll::itemSelected()
{
    if (((QPushButton *)this->sender())->text().isEmpty())
    {
        return;
    }

    if (this->sender() == ui->btnLine1Name)
    {
        this->selectLine(1);
    }
    else if (this->sender() == ui->btnLine2Name)
    {
        this->selectLine(2);
    }
    else if (this->sender() == ui->btnLine3Name)
    {
        this->selectLine(3);
    }
    else if (this->sender() == ui->btnLine4Name)
    {
        this->selectLine(4);
    }
    else if (this->sender() == ui->btnLine5Name)
    {
        this->selectLine(5);
    }
    else if (this->sender() == ui->btnLine6Name)
    {
        this->selectLine(6);
    }
    else if (this->sender() == ui->btnLine7Name)
    {
        this->selectLine(7);
    }
    else if (this->sender() == ui->btnLine8Name)
    {
        this->selectLine(8);
    }
}

void MyCaseAll::on_btnNextPage_clicked()
{
    if (this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM > this->page)
    {
        this->page ++;
        this->selectLine(0);
    }
    else if (this->crrcFault->getHistoryFaultListSize() / _MY_CASE_MAX_ITEM == this->page
                && this->crrcFault->getHistoryFaultListSize() % _MY_CASE_MAX_ITEM != 0)
    {
        this->page ++;
        this->selectLine(0);
    }
}

void MyCaseAll::on_btnPreviousPage_clicked()
{
    if (this->page > 1)
    {
        this->page --;
        this->selectLine(0);
    }
}

void MyCaseAll::fillLine(QList<QPushButton *> &line, QList<QString> &content)
{
    if (content.size() != 6)
    {
        _LOG << "the size of the fault item is not 5, please check it";

        return;
    }
    else if (line.size() != 6)
    {
        _LOG << "the size of the line item is not 5, please check it";

        return;
    }

    for (int i = 0; i < line.size(); i ++)
    {
        line.at(i)->setText(content.at(i));
    }
}

void MyCaseAll::clearLine(QList<QPushButton *> &line)
{
    if (line.size() != 6)
    {
        _LOG << "the size of the line item is not 5, please check it";

        return;
    }

    foreach (QPushButton *button, line)
    {
        button->setText("");
    }
}


void MyCaseAll::fillTable(int i, QList<QString> &content)
{
    switch (i)
    {
    case 0:
        this->fillLine(this->line1, content);
        break;
    case 1:
        this->fillLine(this->line2, content);
        break;
    case 2:
        this->fillLine(this->line3, content);
        break;
    case 3:
        this->fillLine(this->line4, content);
        break;
    case 4:
        this->fillLine(this->line5, content);
        break;
    case 5:
        this->fillLine(this->line6, content);
        break;
    case 6:
        this->fillLine(this->line7, content);
        break;
    case 7:
        this->fillLine(this->line8, content);
        break;
    }
}

void MyCaseAll::selectLine(int i)
{
    ui->btnLine1Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine1Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine1Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine1Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine1EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine2Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine2Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine2Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine2Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine2EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine3Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine3Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine3Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine3Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine3EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine4Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine4Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine4Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine4Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine4EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine5Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine5Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine5Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine5Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine5EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine6Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine6Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine6Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine6Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine6EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine7Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine7Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine7Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine7Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine7EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->btnLine8Level->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine8Code->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine8Name->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine8Time->setStyleSheet(_ITEM_UNSELECTED);
    ui->btnLine8EndTime->setStyleSheet(_ITEM_UNSELECTED);

    ui->txtDescription->setText("");

    switch (i)
    {
    case 1:
        ui->btnLine1Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine1Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine1Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine1Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine1EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 2:
        ui->btnLine2Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine2Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine2Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine2Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine2EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 3:
        ui->btnLine3Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine3Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine3Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine3Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine3EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 4:
        ui->btnLine4Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine4Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine4Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine4Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine4EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 5:
        ui->btnLine5Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine5Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine5Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine5Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine5EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 6:
        ui->btnLine6Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine6Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine6Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine6Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine6EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 7:
        ui->btnLine7Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine7Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine7Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine7Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine7EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    case 8:
        ui->btnLine8Level->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine8Code->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine8Name->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine8Time->setStyleSheet(_ITEM_SELECTED);
        ui->btnLine8EndTime->setStyleSheet(_ITEM_SELECTED);
        break;
    }

    this->userSelectLine = i;
}

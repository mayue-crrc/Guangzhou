#ifndef MYCASE_H
#define MYCASE_H

#include "mybase.h"

class CrrcFault;
class QPushButton;

namespace Ui {
    class MyCase;
}

class MyCase : public MyBase
{
    Q_OBJECT

public:
    explicit MyCase(QWidget *parent = 0);
    ~MyCase();
    void updatePage();
    void installCrrcFault(CrrcFault *crrcFault);

private:
    Ui::MyCase *ui;
    CrrcFault *crrcFault;
    int page;
    void fillLine(QList<QPushButton *> &line, QList<QString> &content);
    void fillTable(int i, QList<QString> &content);
    void clearLine(QList<QPushButton *> &line);
    QList<QPushButton *> line1, line2, line3, line4, line5, line6, line7, line8;
    void selectLine(int i);
    int userSelectLine;

private slots:
    void on_btnAll_clicked();
    void on_btnPreviousPage_clicked();
    void on_btnNextPage_clicked();
    void itemSelected();
};

#endif // MYCASE_H

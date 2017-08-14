#ifndef MYCASEALL_H
#define MYCASEALL_H

#include "mybase.h"

class CrrcFault;
class QPushButton;

namespace Ui {
    class MyCaseAll;
}

class MyCaseAll : public MyBase
{
    Q_OBJECT

public:
    explicit MyCaseAll(QWidget *parent = 0);
    ~MyCaseAll();
    void updatePage();
    void installCrrcFault(CrrcFault *crrcFault);

private:
    Ui::MyCaseAll *ui;
    CrrcFault *crrcFault;
    int page;
    void fillLine(QList<QPushButton *> &line, QList<QString> &content);
    void fillTable(int i, QList<QString> &content);
    void clearLine(QList<QPushButton *> &line);
    QList<QPushButton *> line1, line2, line3, line4, line5, line6, line7, line8;
    void selectLine(int i);
    int userSelectLine;

private slots:
    void on_btnPreviousPage_clicked();
    void on_btnNextPage_clicked();
    void on_btnReal_clicked();
    void itemSelected();
};

#endif // MYCASEALL_H

#ifndef HISTORYFAULT_H
#define HISTORYFAULT_H

#include <QWidget>
#include "mybase.h"

class CrrcFault;
class QPushButton;

namespace Ui {
    class HistoryFault;
}

class HistoryFault : public MyBase
{
    Q_OBJECT

public:
    explicit HistoryFault(QWidget *parent = 0);
    ~HistoryFault();
    void updatePage();
    void installCrrcFault(CrrcFault *crrcFault);

private:
    Ui::HistoryFault *ui;
    CrrcFault *crrcFault;
    int page;
    void fillLine(QList<QPushButton *> &line, QList<QString> &content);
    void fillTable(int i, QList<QString> &content);
    void clearLine(QList<QPushButton *> &line);
    QList<QPushButton *> line1, line2, line3, line4, line5, line6, line7, line8, line9, line10;

private slots:
    void on_btnPreviousPage_clicked();
    void on_btnNextPage_clicked();
    void on_btnBack_clicked();
};

#endif // HISTORYFAULT_H

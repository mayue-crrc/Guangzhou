#ifndef ALLPORTS_H
#define ALLPORTS_H

#include <QWidget>
#include "mybase.h"

class QPushButton;

enum all_ports_page
{
    uCcuPageA,
    uCcuPageB,
    uHmiPage,
    uErmPage,
    uRiomPage,
    uTcuPage,
    uSivPage,
    uBcuPageA,
    uBcuPageB,
    uEdcuPageA,
    uEdcuPageB,
    uFauPage,
    uHvacPage,
    uPaPage,
    uDcdcPage,
    uTdsPage,
    uAtcPage
};

namespace Ui {
    class AllPorts;
}

class AllPorts : public MyBase
{
    Q_OBJECT

public:
    explicit AllPorts(QWidget *parent = 0);
    ~AllPorts();
    void updatePage();

private:
    Ui::AllPorts *ui;
    enum all_ports_page page;
    QList<QPushButton *> buttons;
    void paintEvent(QPaintEvent *);
    QMap<unsigned short int, struct port_data> devicePorts;
    void getItsPorts(QList<struct port *> ports);

private slots:
    void on_btnBack_clicked();
    void myKeyPress();
};

#endif // ALLPORTS_H

#ifndef PORTDATA_H
#define PORTDATA_H

#include <QWidget>
#include <QList>
#include "mybase.h"

class MessageBox;

namespace Ui {
    class PortData;
}

class PortData : public MyBase
{
    Q_OBJECT

public:
    explicit PortData(QWidget *parent = 0);
    ~PortData();
    void paintEvent(QPaintEvent *);
    void updatePage();

private:
    Ui::PortData *ui;
    bool inputFlag;
    QString port;
    MessageBox *messageBox;
    unsigned short int *pointer;

private slots:
    void on_btnBack_clicked();
    void on_btnSearch_clicked();
    void on_btnInputPort_clicked();
    void keyboardEvent();
};

#endif // PORTDATA_H

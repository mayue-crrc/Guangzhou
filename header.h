#ifndef HEADER_H
#define HEADER_H

#include "mybase.h"

class QTimer;

namespace Ui {
    class Header;
}

class Header : public MyBase
{
    Q_OBJECT

public:
    explicit Header(QWidget *parent = 0);
    ~Header();
    void updatePage();
    void setPageName(QString name);

private:
    void setRunningMode();
    void setDirection();
    void setNetVoltage();
    void setSpeed();
    void setHandleLevel();
    void setStation();
    void setCommunicationState(bool state);

private:
    Ui::Header *ui;

private slots:
    void on_btnHelp_clicked();
};

#endif // HEADER_H

#ifndef TROUBLESHOOTINGLOGIN_H
#define TROUBLESHOOTINGLOGIN_H

#include "mybase.h"

namespace Ui {
    class TroubleShootingLogin;
}

class TroubleShootingLogin : public MyBase
{
    Q_OBJECT

public:
    explicit TroubleShootingLogin(QWidget *parent = 0);
    ~TroubleShootingLogin();
    void showEvent(QShowEvent *);
    void setPassword(QString password);

private:
    Ui::TroubleShootingLogin *ui;
    QString password, input;
    int targetPage;

public slots:
    void keyboardEvent();
signals:

};

#endif // TROUBLESHOOTINGLOGIN_H

#ifndef HANDSHANKTEST_H
#define HANDSHANKTEST_H

#include <QWidget>
#include "mybase.h"

namespace Ui {
    class HandShankTest;
}

class HandShankTest : public MyBase
{
    Q_OBJECT

public:
    explicit HandShankTest(QWidget *parent = 0);
    ~HandShankTest();
    void updatePage();

private:
    Ui::HandShankTest *ui;
    QString createDcuContent(bool forward, bool backward, bool traction, bool brake);

private slots:
    void on_btnBack_clicked();
};

#endif // HANDSHANKTEST_H

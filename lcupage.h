#ifndef LCUPAGE_H
#define LCUPAGE_H

#include "mybase.h"

namespace Ui {
    class LcuPage;
}

class LcuPage : public MyBase
{
    Q_OBJECT

public:
    explicit LcuPage(QWidget *parent = 0);
    ~LcuPage();
    void paintEvent(QPaintEvent *);
    void updatePage();

private:
    Ui::LcuPage *ui;

private slots:
    void on_btnBack_clicked();
};

#endif // LCUPAGE_H

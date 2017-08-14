#ifndef LCUTESTPAGE_H
#define LCUTESTPAGE_H

#include "mybase.h"

namespace Ui {
    class LcuTestPage;
}

class LcuTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit LcuTestPage(QWidget *parent = 0);
    ~LcuTestPage();
    void updatePage();

private:
    Ui::LcuTestPage *ui;
};

#endif // LCUTESTPAGE_H

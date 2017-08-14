#ifndef HMIPOSITIONSET_H
#define HMIPOSITIONSET_H

#include <QWidget>
#include "mybase.h"

namespace Ui {
    class HmiPositionSet;
}

class HmiPositionSet : public MyBase
{
    Q_OBJECT

public:
    explicit HmiPositionSet(QWidget *parent = 0);
    ~HmiPositionSet();
    void showEvent(QShowEvent *);

private:
    Ui::HmiPositionSet *ui;

private slots:
    void on_btnReboot_clicked();
    void on_btnBack_clicked();
    void on_btnA2_clicked();
    void on_btnA1_clicked();
};

#endif // HMIPOSITIONSET_H

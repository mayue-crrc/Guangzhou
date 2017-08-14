#ifndef COMPRESSORTEST_H
#define COMPRESSORTEST_H

#include <QWidget>
#include "mybase.h"
#include <QTimer>

namespace Ui {
    class CompressorTest;
}

class CompressorTest : public MyBase
{
    Q_OBJECT

public:
    explicit CompressorTest(QWidget *parent = 0);
    ~CompressorTest();
    void showEvent(QShowEvent *);

private:
    Ui::CompressorTest *ui;
    QTimer *timer;

private slots:
    void on_btnCompressorTest_clicked();
    void on_btnBack_clicked();

private slots:
    void commandReset();
};

#endif // COMPRESSORTEST_H

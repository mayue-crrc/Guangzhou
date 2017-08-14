#ifndef SOFTWAREVERSION_H
#define SOFTWAREVERSION_H

#include <QWidget>
#include "mybase.h"

class VehicleLogo;
class QLabel;

namespace Ui {
    class SoftwareVersion;
}

class SoftwareVersion : public MyBase
{
    Q_OBJECT

public:
    explicit SoftwareVersion(QWidget *parent = 0);
    ~SoftwareVersion();
    VehicleLogo *vehicleLogo;
    void updatePage();

private:
    Ui::SoftwareVersion *ui;
    void showEvent(QShowEvent *event);
    void fillLine(QList<QLabel *> &line, QList<QString> &content);
    void showNetworkVersionPage1();
    void showNetworkVersionPage2();
    void showConverterVersionPage1();
    void showConverterVersionPage2();
    void showDoorVersionPage1();
    void showOthersVersionPage1();
    void showPage1();
    void showPage2();
    void showPage3();
    void showPage4();
    int page;
    int item;

private:
    QList<QLabel *> line1, line2, line3, line4, line5,
                    line6, line7, line8, line9, line10, line11;

private slots:
    void on_btnOthers_pressed();
    void on_btnDoor_pressed();
    void on_btnConverter_pressed();
    void on_btnNetwork_pressed();
    void on_btnDown_clicked();
    void on_btnUp_clicked();
    void on_btnBack_clicked();
};

#endif // SOFTWAREVERSION_H

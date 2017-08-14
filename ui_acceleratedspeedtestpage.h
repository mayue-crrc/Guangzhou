/********************************************************************************
** Form generated from reading UI file 'acceleratedspeedtestpage.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCELERATEDSPEEDTESTPAGE_H
#define UI_ACCELERATEDSPEEDTESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcceleratedSpeedTestPage
{
public:
    QLabel *lblTitle1;
    QLabel *lblTitle1_2;
    QLabel *lblTitle1_3;
    QLabel *lblTractionEndSpeed;
    QLabel *lblAcceleratePlus;
    QLabel *lblTractionDistance;
    QPushButton *btnTest;
    QLabel *label_6;
    QLabel *lblTips;
    QPushButton *btnBack;
    QLabel *lblTitle1_4;
    QLabel *lblTitle1_5;
    QLabel *lblTitle1_6;
    QLabel *lblTitle1_7;
    QLabel *lblTractionStartSpeed;
    QLabel *lblBrakeStartSpeed;
    QLabel *lblBrakeEndSpeed;
    QLabel *lblAccelerateMinus;
    QLabel *lblBrakeDistance;

    void setupUi(QWidget *AcceleratedSpeedTestPage)
    {
        if (AcceleratedSpeedTestPage->objectName().isEmpty())
            AcceleratedSpeedTestPage->setObjectName(QString::fromUtf8("AcceleratedSpeedTestPage"));
        AcceleratedSpeedTestPage->resize(1024, 600);
        AcceleratedSpeedTestPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"}"));
        lblTitle1 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1->setObjectName(QString::fromUtf8("lblTitle1"));
        lblTitle1->setGeometry(QRect(420, 110, 170, 50));
        lblTitle1->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1->setAlignment(Qt::AlignCenter);
        lblTitle1_2 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1_2->setObjectName(QString::fromUtf8("lblTitle1_2"));
        lblTitle1_2->setGeometry(QRect(590, 110, 170, 50));
        lblTitle1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_2->setAlignment(Qt::AlignCenter);
        lblTitle1_3 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1_3->setObjectName(QString::fromUtf8("lblTitle1_3"));
        lblTitle1_3->setGeometry(QRect(760, 110, 170, 50));
        lblTitle1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_3->setAlignment(Qt::AlignCenter);
        lblTractionEndSpeed = new QLabel(AcceleratedSpeedTestPage);
        lblTractionEndSpeed->setObjectName(QString::fromUtf8("lblTractionEndSpeed"));
        lblTractionEndSpeed->setGeometry(QRect(420, 160, 170, 50));
        lblTractionEndSpeed->setAlignment(Qt::AlignCenter);
        lblAcceleratePlus = new QLabel(AcceleratedSpeedTestPage);
        lblAcceleratePlus->setObjectName(QString::fromUtf8("lblAcceleratePlus"));
        lblAcceleratePlus->setGeometry(QRect(590, 160, 170, 50));
        lblAcceleratePlus->setAlignment(Qt::AlignCenter);
        lblTractionDistance = new QLabel(AcceleratedSpeedTestPage);
        lblTractionDistance->setObjectName(QString::fromUtf8("lblTractionDistance"));
        lblTractionDistance->setGeometry(QRect(760, 160, 170, 50));
        lblTractionDistance->setAlignment(Qt::AlignCenter);
        btnTest = new QPushButton(AcceleratedSpeedTestPage);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));
        btnTest->setGeometry(QRect(760, 280, 170, 50));
        btnTest->setFocusPolicy(Qt::NoFocus);
        btnTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        label_6 = new QLabel(AcceleratedSpeedTestPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 400, 60, 61));
        label_6->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 0px;\n"
"color: black;\n"
"border-radius: 5px;"));
        label_6->setAlignment(Qt::AlignCenter);
        lblTips = new QLabel(AcceleratedSpeedTestPage);
        lblTips->setObjectName(QString::fromUtf8("lblTips"));
        lblTips->setGeometry(QRect(70, 380, 883, 101));
        lblTips->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips->setAlignment(Qt::AlignCenter);
        btnBack = new QPushButton(AcceleratedSpeedTestPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(910, 520, 85, 51));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        lblTitle1_4 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1_4->setObjectName(QString::fromUtf8("lblTitle1_4"));
        lblTitle1_4->setGeometry(QRect(250, 110, 170, 50));
        lblTitle1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_4->setAlignment(Qt::AlignCenter);
        lblTitle1_5 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1_5->setObjectName(QString::fromUtf8("lblTitle1_5"));
        lblTitle1_5->setGeometry(QRect(80, 110, 170, 50));
        lblTitle1_5->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_5->setAlignment(Qt::AlignCenter);
        lblTitle1_6 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1_6->setObjectName(QString::fromUtf8("lblTitle1_6"));
        lblTitle1_6->setGeometry(QRect(80, 160, 170, 50));
        lblTitle1_6->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_6->setAlignment(Qt::AlignCenter);
        lblTitle1_7 = new QLabel(AcceleratedSpeedTestPage);
        lblTitle1_7->setObjectName(QString::fromUtf8("lblTitle1_7"));
        lblTitle1_7->setGeometry(QRect(80, 210, 170, 50));
        lblTitle1_7->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_7->setAlignment(Qt::AlignCenter);
        lblTractionStartSpeed = new QLabel(AcceleratedSpeedTestPage);
        lblTractionStartSpeed->setObjectName(QString::fromUtf8("lblTractionStartSpeed"));
        lblTractionStartSpeed->setGeometry(QRect(250, 160, 170, 50));
        lblTractionStartSpeed->setAlignment(Qt::AlignCenter);
        lblBrakeStartSpeed = new QLabel(AcceleratedSpeedTestPage);
        lblBrakeStartSpeed->setObjectName(QString::fromUtf8("lblBrakeStartSpeed"));
        lblBrakeStartSpeed->setGeometry(QRect(250, 210, 170, 50));
        lblBrakeStartSpeed->setAlignment(Qt::AlignCenter);
        lblBrakeEndSpeed = new QLabel(AcceleratedSpeedTestPage);
        lblBrakeEndSpeed->setObjectName(QString::fromUtf8("lblBrakeEndSpeed"));
        lblBrakeEndSpeed->setGeometry(QRect(420, 210, 170, 50));
        lblBrakeEndSpeed->setAlignment(Qt::AlignCenter);
        lblAccelerateMinus = new QLabel(AcceleratedSpeedTestPage);
        lblAccelerateMinus->setObjectName(QString::fromUtf8("lblAccelerateMinus"));
        lblAccelerateMinus->setGeometry(QRect(590, 210, 170, 50));
        lblAccelerateMinus->setAlignment(Qt::AlignCenter);
        lblBrakeDistance = new QLabel(AcceleratedSpeedTestPage);
        lblBrakeDistance->setObjectName(QString::fromUtf8("lblBrakeDistance"));
        lblBrakeDistance->setGeometry(QRect(760, 210, 170, 50));
        lblBrakeDistance->setAlignment(Qt::AlignCenter);
        lblTitle1->raise();
        lblTitle1_2->raise();
        lblTitle1_3->raise();
        lblTractionEndSpeed->raise();
        lblAcceleratePlus->raise();
        lblTractionDistance->raise();
        btnTest->raise();
        lblTips->raise();
        btnBack->raise();
        lblTitle1_4->raise();
        lblTitle1_5->raise();
        lblTitle1_6->raise();
        lblTitle1_7->raise();
        lblTractionStartSpeed->raise();
        lblBrakeStartSpeed->raise();
        lblBrakeEndSpeed->raise();
        lblAccelerateMinus->raise();
        lblBrakeDistance->raise();
        label_6->raise();

        retranslateUi(AcceleratedSpeedTestPage);

        QMetaObject::connectSlotsByName(AcceleratedSpeedTestPage);
    } // setupUi

    void retranslateUi(QWidget *AcceleratedSpeedTestPage)
    {
        AcceleratedSpeedTestPage->setWindowTitle(QApplication::translate("AcceleratedSpeedTestPage", "Form", 0, QApplication::UnicodeUTF8));
        lblTitle1->setText(QApplication::translate("AcceleratedSpeedTestPage", "\347\273\210\346\255\242\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lblTitle1_2->setText(QApplication::translate("AcceleratedSpeedTestPage", "\345\212\240\345\207\217\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lblTitle1_3->setText(QApplication::translate("AcceleratedSpeedTestPage", "\350\267\235\347\246\273", 0, QApplication::UnicodeUTF8));
        lblTractionEndSpeed->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m/s", 0, QApplication::UnicodeUTF8));
        lblAcceleratePlus->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m/s\302\262", 0, QApplication::UnicodeUTF8));
        lblTractionDistance->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m", 0, QApplication::UnicodeUTF8));
        btnTest->setText(QApplication::translate("AcceleratedSpeedTestPage", "\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AcceleratedSpeedTestPage", "\346\223\215\344\275\234\n"
"\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        lblTips->setText(QApplication::translate("AcceleratedSpeedTestPage", " \345\234\250\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\347\232\204\346\235\241\344\273\266\344\270\213\357\274\214\345\215\225\345\207\273\346\214\211\351\222\256\350\277\233\350\241\214\346\265\213\350\257\225\343\200\202\n"
"\346\214\211\351\222\256\346\214\211\344\270\213\350\241\250\347\244\272\346\277\200\346\264\273\346\265\213\350\257\225\357\274\214\346\214\211\351\224\256\345\274\271\350\265\267\350\241\250\347\244\272\345\217\226\346\266\210\346\265\213\350\257\225\343\200\202", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("AcceleratedSpeedTestPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lblTitle1_4->setText(QApplication::translate("AcceleratedSpeedTestPage", "\350\265\267\345\247\213\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        lblTitle1_5->setText(QApplication::translate("AcceleratedSpeedTestPage", "\345\267\245\345\206\265", 0, QApplication::UnicodeUTF8));
        lblTitle1_6->setText(QApplication::translate("AcceleratedSpeedTestPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        lblTitle1_7->setText(QApplication::translate("AcceleratedSpeedTestPage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        lblTractionStartSpeed->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m/s", 0, QApplication::UnicodeUTF8));
        lblBrakeStartSpeed->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m/s", 0, QApplication::UnicodeUTF8));
        lblBrakeEndSpeed->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m/s", 0, QApplication::UnicodeUTF8));
        lblAccelerateMinus->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m/s\302\262", 0, QApplication::UnicodeUTF8));
        lblBrakeDistance->setText(QApplication::translate("AcceleratedSpeedTestPage", "0m", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AcceleratedSpeedTestPage: public Ui_AcceleratedSpeedTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCELERATEDSPEEDTESTPAGE_H

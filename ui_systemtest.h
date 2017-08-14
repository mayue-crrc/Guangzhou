/********************************************************************************
** Form generated from reading UI file 'systemtest.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMTEST_H
#define UI_SYSTEMTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemTest
{
public:
    QPushButton *btnConfirm;
    QPushButton *btnBack;
    QPushButton *btnBrakeTest;
    QPushButton *btnBrakeResistorTest;
    QPushButton *btnSivTest;
    QPushButton *btnCompressorTest;
    QPushButton *btnHandShank;
    QPushButton *btnAcceleratedSpeed;
    QPushButton *btnLcuTest;

    void setupUi(QWidget *SystemTest)
    {
        if (SystemTest->objectName().isEmpty())
            SystemTest->setObjectName(QString::fromUtf8("SystemTest"));
        SystemTest->resize(1024, 600);
        SystemTest->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"}"));
        btnConfirm = new QPushButton(SystemTest);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(920, 420, 85, 51));
        btnConfirm->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        btnBack = new QPushButton(SystemTest);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(920, 490, 85, 51));
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
        btnBrakeTest = new QPushButton(SystemTest);
        btnBrakeTest->setObjectName(QString::fromUtf8("btnBrakeTest"));
        btnBrakeTest->setGeometry(QRect(70, 40, 591, 51));
        btnBrakeTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));
        btnBrakeResistorTest = new QPushButton(SystemTest);
        btnBrakeResistorTest->setObjectName(QString::fromUtf8("btnBrakeResistorTest"));
        btnBrakeResistorTest->setGeometry(QRect(70, 120, 591, 51));
        btnBrakeResistorTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));
        btnSivTest = new QPushButton(SystemTest);
        btnSivTest->setObjectName(QString::fromUtf8("btnSivTest"));
        btnSivTest->setGeometry(QRect(70, 200, 591, 51));
        btnSivTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));
        btnCompressorTest = new QPushButton(SystemTest);
        btnCompressorTest->setObjectName(QString::fromUtf8("btnCompressorTest"));
        btnCompressorTest->setGeometry(QRect(70, 280, 591, 51));
        btnCompressorTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));
        btnHandShank = new QPushButton(SystemTest);
        btnHandShank->setObjectName(QString::fromUtf8("btnHandShank"));
        btnHandShank->setGeometry(QRect(70, 360, 591, 51));
        btnHandShank->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));
        btnAcceleratedSpeed = new QPushButton(SystemTest);
        btnAcceleratedSpeed->setObjectName(QString::fromUtf8("btnAcceleratedSpeed"));
        btnAcceleratedSpeed->setGeometry(QRect(70, 440, 591, 51));
        btnAcceleratedSpeed->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));
        btnLcuTest = new QPushButton(SystemTest);
        btnLcuTest->setObjectName(QString::fromUtf8("btnLcuTest"));
        btnLcuTest->setGeometry(QRect(70, 520, 591, 51));
        btnLcuTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 22px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: black;\n"
"	border:2px solid white;\n"
"	border-radius: 8px;\n"
"}"));

        retranslateUi(SystemTest);

        QMetaObject::connectSlotsByName(SystemTest);
    } // setupUi

    void retranslateUi(QWidget *SystemTest)
    {
        SystemTest->setWindowTitle(QApplication::translate("SystemTest", "Form", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("SystemTest", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SystemTest", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnBrakeTest->setText(QApplication::translate("SystemTest", "\345\210\266\345\212\250\347\263\273\347\273\237\350\207\252\346\243\200", 0, QApplication::UnicodeUTF8));
        btnBrakeResistorTest->setText(QApplication::translate("SystemTest", "\347\211\265\345\274\225\347\263\273\347\273\237\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnSivTest->setText(QApplication::translate("SystemTest", "\350\276\205\345\212\251\347\263\273\347\273\237\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnCompressorTest->setText(QApplication::translate("SystemTest", "\347\251\272\345\216\213\346\234\272\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnHandShank->setText(QApplication::translate("SystemTest", "\345\217\270\346\216\247\345\231\250\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnAcceleratedSpeed->setText(QApplication::translate("SystemTest", "\345\212\240\345\207\217\351\200\237\345\272\246\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnLcuTest->setText(QApplication::translate("SystemTest", "LCU\345\210\207\346\215\242\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SystemTest: public Ui_SystemTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMTEST_H

/********************************************************************************
** Form generated from reading UI file 'portdata.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTDATA_H
#define UI_PORTDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortData
{
public:
    QGroupBox *groupBox;
    QPushButton *btnDel;
    QPushButton *btnC;
    QPushButton *btnE;
    QPushButton *btnF;
    QPushButton *btnSearch;
    QPushButton *btnB;
    QPushButton *btnBack;
    QPushButton *btnD;
    QPushButton *btnA;
    QPushButton *btnInputPort;
    QPushButton *btn0;
    QPushButton *btn8;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btn1;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn5;

    void setupUi(QWidget *PortData)
    {
        if (PortData->objectName().isEmpty())
            PortData->setObjectName(QString::fromUtf8("PortData"));
        PortData->resize(1024, 768);
        PortData->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(24, 24, 24);\n"
"	border:1px solid white;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255);\n"
"	border:1px solid white;\n"
"	border-radius: 0px;\n"
"}"));
        groupBox = new QGroupBox(PortData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 647, 1024, 121));
        btnDel = new QPushButton(groupBox);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setGeometry(QRect(615, 60, 98, 50));
        btnC = new QPushButton(groupBox);
        btnC->setObjectName(QString::fromUtf8("btnC"));
        btnC->setGeometry(QRect(207, 60, 98, 50));
        btnE = new QPushButton(groupBox);
        btnE->setObjectName(QString::fromUtf8("btnE"));
        btnE->setGeometry(QRect(411, 60, 98, 50));
        btnF = new QPushButton(groupBox);
        btnF->setObjectName(QString::fromUtf8("btnF"));
        btnF->setGeometry(QRect(513, 60, 98, 50));
        btnSearch = new QPushButton(groupBox);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setGeometry(QRect(819, 60, 98, 50));
        btnB = new QPushButton(groupBox);
        btnB->setObjectName(QString::fromUtf8("btnB"));
        btnB->setGeometry(QRect(105, 60, 98, 50));
        btnBack = new QPushButton(groupBox);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(921, 60, 98, 50));
        btnD = new QPushButton(groupBox);
        btnD->setObjectName(QString::fromUtf8("btnD"));
        btnD->setGeometry(QRect(309, 60, 98, 50));
        btnA = new QPushButton(groupBox);
        btnA->setObjectName(QString::fromUtf8("btnA"));
        btnA->setGeometry(QRect(3, 60, 98, 50));
        btnInputPort = new QPushButton(groupBox);
        btnInputPort->setObjectName(QString::fromUtf8("btnInputPort"));
        btnInputPort->setGeometry(QRect(717, 60, 98, 50));
        btnInputPort->setStyleSheet(QString::fromUtf8("color: rgb(2, 232, 2);"));
        btn0 = new QPushButton(PortData);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(920, 650, 98, 50));
        btn8 = new QPushButton(PortData);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(716, 650, 98, 50));
        btn6 = new QPushButton(PortData);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(512, 650, 98, 50));
        btn7 = new QPushButton(PortData);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(614, 650, 98, 50));
        btn9 = new QPushButton(PortData);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(818, 650, 98, 50));
        btn4 = new QPushButton(PortData);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(308, 650, 98, 50));
        btn1 = new QPushButton(PortData);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(2, 650, 98, 50));
        btn3 = new QPushButton(PortData);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(206, 650, 98, 50));
        btn2 = new QPushButton(PortData);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(104, 650, 98, 50));
        btn5 = new QPushButton(PortData);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(410, 650, 98, 50));

        retranslateUi(PortData);

        QMetaObject::connectSlotsByName(PortData);
    } // setupUi

    void retranslateUi(QWidget *PortData)
    {
        PortData->setWindowTitle(QApplication::translate("PortData", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PortData", "GroupBox", 0, QApplication::UnicodeUTF8));
        btnDel->setText(QApplication::translate("PortData", "Del", 0, QApplication::UnicodeUTF8));
        btnC->setText(QApplication::translate("PortData", "C", 0, QApplication::UnicodeUTF8));
        btnE->setText(QApplication::translate("PortData", "E", 0, QApplication::UnicodeUTF8));
        btnF->setText(QApplication::translate("PortData", "F", 0, QApplication::UnicodeUTF8));
        btnSearch->setText(QApplication::translate("PortData", "\345\274\200\345\247\213\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        btnB->setText(QApplication::translate("PortData", "B", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("PortData", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnD->setText(QApplication::translate("PortData", "D", 0, QApplication::UnicodeUTF8));
        btnA->setText(QApplication::translate("PortData", "A", 0, QApplication::UnicodeUTF8));
        btnInputPort->setText(QApplication::translate("PortData", "Text Input", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("PortData", "0", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("PortData", "8", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("PortData", "6", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("PortData", "7", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("PortData", "9", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("PortData", "4", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("PortData", "1", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("PortData", "3", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("PortData", "2", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("PortData", "5", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortData: public Ui_PortData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTDATA_H

/********************************************************************************
** Form generated from reading UI file 'allports.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLPORTS_H
#define UI_ALLPORTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllPorts
{
public:
    QPushButton *btnHmi;
    QPushButton *btnCcuA;
    QPushButton *btnErm;
    QPushButton *btnRiom;
    QPushButton *btnBcuA;
    QPushButton *btnTcu;
    QPushButton *btnSiv;
    QPushButton *btnEdcuA;
    QPushButton *btnEdcuB;
    QPushButton *btnFau;
    QPushButton *btnPa;
    QPushButton *btnHvac;
    QPushButton *btnBack;
    QPushButton *btnBcuB;
    QPushButton *btnAtc;
    QPushButton *btnDcdc;
    QPushButton *btnTds;
    QPushButton *btnCcuB;

    void setupUi(QWidget *AllPorts)
    {
        if (AllPorts->objectName().isEmpty())
            AllPorts->setObjectName(QString::fromUtf8("AllPorts"));
        AllPorts->resize(1024, 768);
        AllPorts->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnHmi = new QPushButton(AllPorts);
        btnHmi->setObjectName(QString::fromUtf8("btnHmi"));
        btnHmi->setGeometry(QRect(940, 30, 71, 30));
        btnHmi->setStyleSheet(QString::fromUtf8(""));
        btnCcuA = new QPushButton(AllPorts);
        btnCcuA->setObjectName(QString::fromUtf8("btnCcuA"));
        btnCcuA->setGeometry(QRect(940, 70, 71, 30));
        btnCcuA->setStyleSheet(QString::fromUtf8(""));
        btnErm = new QPushButton(AllPorts);
        btnErm->setObjectName(QString::fromUtf8("btnErm"));
        btnErm->setGeometry(QRect(940, 150, 71, 30));
        btnErm->setStyleSheet(QString::fromUtf8(""));
        btnRiom = new QPushButton(AllPorts);
        btnRiom->setObjectName(QString::fromUtf8("btnRiom"));
        btnRiom->setGeometry(QRect(940, 190, 71, 30));
        btnRiom->setStyleSheet(QString::fromUtf8(""));
        btnBcuA = new QPushButton(AllPorts);
        btnBcuA->setObjectName(QString::fromUtf8("btnBcuA"));
        btnBcuA->setGeometry(QRect(940, 230, 71, 30));
        btnBcuA->setStyleSheet(QString::fromUtf8(""));
        btnTcu = new QPushButton(AllPorts);
        btnTcu->setObjectName(QString::fromUtf8("btnTcu"));
        btnTcu->setGeometry(QRect(940, 310, 71, 30));
        btnTcu->setStyleSheet(QString::fromUtf8(""));
        btnSiv = new QPushButton(AllPorts);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(940, 350, 71, 30));
        btnSiv->setStyleSheet(QString::fromUtf8(""));
        btnEdcuA = new QPushButton(AllPorts);
        btnEdcuA->setObjectName(QString::fromUtf8("btnEdcuA"));
        btnEdcuA->setGeometry(QRect(940, 390, 71, 30));
        btnEdcuA->setStyleSheet(QString::fromUtf8(""));
        btnEdcuB = new QPushButton(AllPorts);
        btnEdcuB->setObjectName(QString::fromUtf8("btnEdcuB"));
        btnEdcuB->setGeometry(QRect(940, 430, 71, 30));
        btnEdcuB->setStyleSheet(QString::fromUtf8(""));
        btnFau = new QPushButton(AllPorts);
        btnFau->setObjectName(QString::fromUtf8("btnFau"));
        btnFau->setGeometry(QRect(940, 470, 71, 30));
        btnFau->setStyleSheet(QString::fromUtf8(""));
        btnPa = new QPushButton(AllPorts);
        btnPa->setObjectName(QString::fromUtf8("btnPa"));
        btnPa->setGeometry(QRect(940, 510, 71, 30));
        btnPa->setStyleSheet(QString::fromUtf8(""));
        btnHvac = new QPushButton(AllPorts);
        btnHvac->setObjectName(QString::fromUtf8("btnHvac"));
        btnHvac->setGeometry(QRect(940, 550, 71, 30));
        btnHvac->setStyleSheet(QString::fromUtf8(""));
        btnBack = new QPushButton(AllPorts);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(940, 710, 71, 31));
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
        btnBcuB = new QPushButton(AllPorts);
        btnBcuB->setObjectName(QString::fromUtf8("btnBcuB"));
        btnBcuB->setGeometry(QRect(940, 270, 71, 30));
        btnBcuB->setStyleSheet(QString::fromUtf8(""));
        btnAtc = new QPushButton(AllPorts);
        btnAtc->setObjectName(QString::fromUtf8("btnAtc"));
        btnAtc->setGeometry(QRect(940, 590, 71, 30));
        btnAtc->setStyleSheet(QString::fromUtf8(""));
        btnDcdc = new QPushButton(AllPorts);
        btnDcdc->setObjectName(QString::fromUtf8("btnDcdc"));
        btnDcdc->setGeometry(QRect(940, 630, 71, 30));
        btnDcdc->setStyleSheet(QString::fromUtf8(""));
        btnTds = new QPushButton(AllPorts);
        btnTds->setObjectName(QString::fromUtf8("btnTds"));
        btnTds->setGeometry(QRect(940, 670, 71, 30));
        btnTds->setStyleSheet(QString::fromUtf8(""));
        btnCcuB = new QPushButton(AllPorts);
        btnCcuB->setObjectName(QString::fromUtf8("btnCcuB"));
        btnCcuB->setGeometry(QRect(940, 110, 71, 30));
        btnCcuB->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(AllPorts);

        QMetaObject::connectSlotsByName(AllPorts);
    } // setupUi

    void retranslateUi(QWidget *AllPorts)
    {
        AllPorts->setWindowTitle(QApplication::translate("AllPorts", "Form", 0, QApplication::UnicodeUTF8));
        btnHmi->setText(QApplication::translate("AllPorts", "HMI", 0, QApplication::UnicodeUTF8));
        btnCcuA->setText(QApplication::translate("AllPorts", "CCU A", 0, QApplication::UnicodeUTF8));
        btnErm->setText(QApplication::translate("AllPorts", "ERM", 0, QApplication::UnicodeUTF8));
        btnRiom->setText(QApplication::translate("AllPorts", "RIOM", 0, QApplication::UnicodeUTF8));
        btnBcuA->setText(QApplication::translate("AllPorts", "GWV A", 0, QApplication::UnicodeUTF8));
        btnTcu->setText(QApplication::translate("AllPorts", "VVVF", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("AllPorts", "SIV", 0, QApplication::UnicodeUTF8));
        btnEdcuA->setText(QApplication::translate("AllPorts", "EDCU A", 0, QApplication::UnicodeUTF8));
        btnEdcuB->setText(QApplication::translate("AllPorts", "EDCU B", 0, QApplication::UnicodeUTF8));
        btnFau->setText(QApplication::translate("AllPorts", "FAMU", 0, QApplication::UnicodeUTF8));
        btnPa->setText(QApplication::translate("AllPorts", "ASCU", 0, QApplication::UnicodeUTF8));
        btnHvac->setText(QApplication::translate("AllPorts", "ACCP", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("AllPorts", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnBcuB->setText(QApplication::translate("AllPorts", "GWV B", 0, QApplication::UnicodeUTF8));
        btnAtc->setText(QApplication::translate("AllPorts", "ATCC", 0, QApplication::UnicodeUTF8));
        btnDcdc->setText(QApplication::translate("AllPorts", "BCG", 0, QApplication::UnicodeUTF8));
        btnTds->setText(QApplication::translate("AllPorts", "TDS", 0, QApplication::UnicodeUTF8));
        btnCcuB->setText(QApplication::translate("AllPorts", "CCU B", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AllPorts: public Ui_AllPorts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLPORTS_H

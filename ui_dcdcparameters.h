/********************************************************************************
** Form generated from reading UI file 'dcdcparameters.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCDCPARAMETERS_H
#define UI_DCDCPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DcdcParameters
{
public:
    QPushButton *btnBack;
    QPushButton *btnPa;
    QPushButton *btnHvac;
    QPushButton *btnEdcuB;
    QPushButton *btnFau;
    QLabel *lblPage;
    QPushButton *btnBcu;
    QPushButton *btnSiv;
    QPushButton *btnUp;
    QPushButton *btnDcu;
    QPushButton *btnDown;
    QPushButton *btnDcdc;

    void setupUi(QWidget *DcdcParameters)
    {
        if (DcdcParameters->objectName().isEmpty())
            DcdcParameters->setObjectName(QString::fromUtf8("DcdcParameters"));
        DcdcParameters->resize(1024, 600);
        DcdcParameters->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white"
                        "; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnBack = new QPushButton(DcdcParameters);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(930, 540, 71, 31));
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
        btnPa = new QPushButton(DcdcParameters);
        btnPa->setObjectName(QString::fromUtf8("btnPa"));
        btnPa->setGeometry(QRect(930, 340, 71, 30));
        btnPa->setStyleSheet(QString::fromUtf8(""));
        btnHvac = new QPushButton(DcdcParameters);
        btnHvac->setObjectName(QString::fromUtf8("btnHvac"));
        btnHvac->setGeometry(QRect(930, 380, 71, 30));
        btnHvac->setStyleSheet(QString::fromUtf8(""));
        btnEdcuB = new QPushButton(DcdcParameters);
        btnEdcuB->setObjectName(QString::fromUtf8("btnEdcuB"));
        btnEdcuB->setGeometry(QRect(930, 260, 71, 30));
        btnEdcuB->setStyleSheet(QString::fromUtf8(""));
        btnFau = new QPushButton(DcdcParameters);
        btnFau->setObjectName(QString::fromUtf8("btnFau"));
        btnFau->setGeometry(QRect(930, 300, 71, 30));
        btnFau->setStyleSheet(QString::fromUtf8(""));
        lblPage = new QLabel(DcdcParameters);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(930, 460, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lblPage->setFont(font);
        lblPage->setLayoutDirection(Qt::LeftToRight);
        lblPage->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        lblPage->setAlignment(Qt::AlignCenter);
        btnBcu = new QPushButton(DcdcParameters);
        btnBcu->setObjectName(QString::fromUtf8("btnBcu"));
        btnBcu->setGeometry(QRect(930, 220, 71, 30));
        btnBcu->setStyleSheet(QString::fromUtf8(""));
        btnSiv = new QPushButton(DcdcParameters);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(930, 140, 71, 30));
        btnSiv->setStyleSheet(QString::fromUtf8(""));
        btnUp = new QPushButton(DcdcParameters);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setGeometry(QRect(930, 420, 71, 30));
        btnUp->setStyleSheet(QString::fromUtf8(""));
        btnDcu = new QPushButton(DcdcParameters);
        btnDcu->setObjectName(QString::fromUtf8("btnDcu"));
        btnDcu->setGeometry(QRect(930, 100, 71, 30));
        btnDcu->setStyleSheet(QString::fromUtf8(""));
        btnDown = new QPushButton(DcdcParameters);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setGeometry(QRect(930, 500, 71, 30));
        btnDown->setStyleSheet(QString::fromUtf8(""));
        btnDcdc = new QPushButton(DcdcParameters);
        btnDcdc->setObjectName(QString::fromUtf8("btnDcdc"));
        btnDcdc->setGeometry(QRect(930, 180, 71, 30));
        btnDcdc->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));

        retranslateUi(DcdcParameters);

        QMetaObject::connectSlotsByName(DcdcParameters);
    } // setupUi

    void retranslateUi(QWidget *DcdcParameters)
    {
        DcdcParameters->setWindowTitle(QApplication::translate("DcdcParameters", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("DcdcParameters", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnPa->setText(QApplication::translate("DcdcParameters", "--", 0, QApplication::UnicodeUTF8));
        btnHvac->setText(QApplication::translate("DcdcParameters", "--", 0, QApplication::UnicodeUTF8));
        btnEdcuB->setText(QApplication::translate("DcdcParameters", "--", 0, QApplication::UnicodeUTF8));
        btnFau->setText(QApplication::translate("DcdcParameters", "--", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("DcdcParameters", "1 / 1", 0, QApplication::UnicodeUTF8));
        btnBcu->setText(QApplication::translate("DcdcParameters", "BCU", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("DcdcParameters", "SIV", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("DcdcParameters", "\342\226\262", 0, QApplication::UnicodeUTF8));
        btnDcu->setText(QApplication::translate("DcdcParameters", "DCU", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("DcdcParameters", "\342\226\274", 0, QApplication::UnicodeUTF8));
        btnDcdc->setText(QApplication::translate("DcdcParameters", "DCDC", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DcdcParameters: public Ui_DcdcParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCDCPARAMETERS_H

/********************************************************************************
** Form generated from reading UI file 'othersparameters.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERSPARAMETERS_H
#define UI_OTHERSPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OthersParameters
{
public:
    QPushButton *btnBcu;
    QPushButton *btnDown;
    QPushButton *btnTcu;
    QLabel *label_2;
    QPushButton *btnBack;
    QPushButton *btnSiv;
    QPushButton *btnUp;
    QPushButton *btnOther;
    QLabel *label;

    void setupUi(QWidget *OthersParameters)
    {
        if (OthersParameters->objectName().isEmpty())
            OthersParameters->setObjectName(QString::fromUtf8("OthersParameters"));
        OthersParameters->resize(1024, 600);
        OthersParameters->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnBcu = new QPushButton(OthersParameters);
        btnBcu->setObjectName(QString::fromUtf8("btnBcu"));
        btnBcu->setGeometry(QRect(930, 200, 80, 60));
        btnBcu->setStyleSheet(QString::fromUtf8(""));
        btnDown = new QPushButton(OthersParameters);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setGeometry(QRect(930, 410, 80, 60));
        btnDown->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnTcu = new QPushButton(OthersParameters);
        btnTcu->setObjectName(QString::fromUtf8("btnTcu"));
        btnTcu->setGeometry(QRect(930, 130, 80, 60));
        label_2 = new QLabel(OthersParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(920, 10, 101, 581));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label_2->setAlignment(Qt::AlignCenter);
        btnBack = new QPushButton(OthersParameters);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(930, 480, 80, 60));
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
        btnSiv = new QPushButton(OthersParameters);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(930, 60, 80, 60));
        btnUp = new QPushButton(OthersParameters);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setGeometry(QRect(930, 340, 80, 60));
        btnUp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnOther = new QPushButton(OthersParameters);
        btnOther->setObjectName(QString::fromUtf8("btnOther"));
        btnOther->setGeometry(QRect(930, 270, 80, 60));
        btnOther->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        label = new QLabel(OthersParameters);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(770, 540, 66, 41));
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2->raise();
        btnBcu->raise();
        btnDown->raise();
        btnTcu->raise();
        btnBack->raise();
        btnSiv->raise();
        btnUp->raise();
        btnOther->raise();
        label->raise();

        retranslateUi(OthersParameters);

        QMetaObject::connectSlotsByName(OthersParameters);
    } // setupUi

    void retranslateUi(QWidget *OthersParameters)
    {
        OthersParameters->setWindowTitle(QApplication::translate("OthersParameters", "Form", 0, QApplication::UnicodeUTF8));
        btnBcu->setText(QApplication::translate("OthersParameters", "GWV", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("OthersParameters", "\342\206\220", 0, QApplication::UnicodeUTF8));
        btnTcu->setText(QApplication::translate("OthersParameters", "VVVF", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        btnBack->setText(QApplication::translate("OthersParameters", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("OthersParameters", "SIV", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("OthersParameters", "\342\206\222", 0, QApplication::UnicodeUTF8));
        btnOther->setText(QApplication::translate("OthersParameters", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OthersParameters", "1 / 1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OthersParameters: public Ui_OthersParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERSPARAMETERS_H

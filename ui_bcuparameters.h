/********************************************************************************
** Form generated from reading UI file 'bcuparameters.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BCUPARAMETERS_H
#define UI_BCUPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BcuParameters
{
public:
    QPushButton *btnDcu;
    QPushButton *btnBcu;
    QPushButton *btnBack;
    QPushButton *btnOthers;
    QLabel *label_2;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QLabel *label;
    QPushButton *btnSiv;

    void setupUi(QWidget *BcuParameters)
    {
        if (BcuParameters->objectName().isEmpty())
            BcuParameters->setObjectName(QString::fromUtf8("BcuParameters"));
        BcuParameters->resize(1024, 600);
        BcuParameters->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnDcu = new QPushButton(BcuParameters);
        btnDcu->setObjectName(QString::fromUtf8("btnDcu"));
        btnDcu->setGeometry(QRect(930, 130, 80, 60));
        btnBcu = new QPushButton(BcuParameters);
        btnBcu->setObjectName(QString::fromUtf8("btnBcu"));
        btnBcu->setGeometry(QRect(930, 200, 80, 60));
        btnBcu->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnBack = new QPushButton(BcuParameters);
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
        btnOthers = new QPushButton(BcuParameters);
        btnOthers->setObjectName(QString::fromUtf8("btnOthers"));
        btnOthers->setGeometry(QRect(930, 270, 80, 60));
        label_2 = new QLabel(BcuParameters);
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
        btnUp = new QPushButton(BcuParameters);
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
        btnDown = new QPushButton(BcuParameters);
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
        label = new QLabel(BcuParameters);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(770, 540, 66, 41));
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        label->setAlignment(Qt::AlignCenter);
        btnSiv = new QPushButton(BcuParameters);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(930, 60, 80, 60));
        label_2->raise();
        btnDcu->raise();
        btnBcu->raise();
        btnBack->raise();
        btnOthers->raise();
        btnUp->raise();
        btnDown->raise();
        label->raise();
        btnSiv->raise();

        retranslateUi(BcuParameters);

        QMetaObject::connectSlotsByName(BcuParameters);
    } // setupUi

    void retranslateUi(QWidget *BcuParameters)
    {
        BcuParameters->setWindowTitle(QApplication::translate("BcuParameters", "Form", 0, QApplication::UnicodeUTF8));
        btnDcu->setText(QApplication::translate("BcuParameters", "VVVF", 0, QApplication::UnicodeUTF8));
        btnBcu->setText(QApplication::translate("BcuParameters", "GWV", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("BcuParameters", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnOthers->setText(QApplication::translate("BcuParameters", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        btnUp->setText(QApplication::translate("BcuParameters", "\342\206\222", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("BcuParameters", "\342\206\220", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BcuParameters", "1 / 1", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("BcuParameters", "SIV", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BcuParameters: public Ui_BcuParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BCUPARAMETERS_H

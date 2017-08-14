/********************************************************************************
** Form generated from reading UI file 'digtalioa2.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGTALIOA2_H
#define UI_DIGTALIOA2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigtalIoA2
{
public:
    QPushButton *btnD1;
    QPushButton *btnC2;
    QPushButton *btnB1;
    QPushButton *btnA2;
    QPushButton *btnA1;
    QLabel *label_107;
    QPushButton *btnC1;
    QPushButton *btnB2;
    QPushButton *btnD2;
    QPushButton *btnDown;
    QLabel *lblPage;
    QPushButton *btnUp;
    QPushButton *btnBack;

    void setupUi(QWidget *DigtalIoA2)
    {
        if (DigtalIoA2->objectName().isEmpty())
            DigtalIoA2->setObjectName(QString::fromUtf8("DigtalIoA2"));
        DigtalIoA2->resize(1024, 600);
        DigtalIoA2->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnD1 = new QPushButton(DigtalIoA2);
        btnD1->setObjectName(QString::fromUtf8("btnD1"));
        btnD1->setGeometry(QRect(930, 210, 81, 51));
        btnD1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnC2 = new QPushButton(DigtalIoA2);
        btnC2->setObjectName(QString::fromUtf8("btnC2"));
        btnC2->setGeometry(QRect(930, 330, 81, 51));
        btnC2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnB1 = new QPushButton(DigtalIoA2);
        btnB1->setObjectName(QString::fromUtf8("btnB1"));
        btnB1->setGeometry(QRect(930, 90, 81, 51));
        btnB1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnA2 = new QPushButton(DigtalIoA2);
        btnA2->setObjectName(QString::fromUtf8("btnA2"));
        btnA2->setGeometry(QRect(930, 450, 81, 51));
        btnA2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnA1 = new QPushButton(DigtalIoA2);
        btnA1->setObjectName(QString::fromUtf8("btnA1"));
        btnA1->setGeometry(QRect(930, 30, 81, 51));
        btnA1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        label_107 = new QLabel(DigtalIoA2);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(910, 0, 2, 600));
        label_107->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: white;"));
        label_107->setAlignment(Qt::AlignCenter);
        btnC1 = new QPushButton(DigtalIoA2);
        btnC1->setObjectName(QString::fromUtf8("btnC1"));
        btnC1->setGeometry(QRect(930, 150, 81, 51));
        btnC1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnB2 = new QPushButton(DigtalIoA2);
        btnB2->setObjectName(QString::fromUtf8("btnB2"));
        btnB2->setGeometry(QRect(930, 390, 81, 51));
        btnB2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnD2 = new QPushButton(DigtalIoA2);
        btnD2->setObjectName(QString::fromUtf8("btnD2"));
        btnD2->setGeometry(QRect(930, 270, 81, 51));
        btnD2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));
        btnDown = new QPushButton(DigtalIoA2);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setGeometry(QRect(800, 534, 81, 51));
        btnDown->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 40px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 40px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 40px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        lblPage = new QLabel(DigtalIoA2);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(630, 534, 71, 51));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lblPage->setFont(font);
        lblPage->setLayoutDirection(Qt::LeftToRight);
        lblPage->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        lblPage->setAlignment(Qt::AlignCenter);
        btnUp = new QPushButton(DigtalIoA2);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setGeometry(QRect(710, 534, 81, 51));
        btnUp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 40px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 40px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 40px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnBack = new QPushButton(DigtalIoA2);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(930, 510, 81, 51));
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

        retranslateUi(DigtalIoA2);

        QMetaObject::connectSlotsByName(DigtalIoA2);
    } // setupUi

    void retranslateUi(QWidget *DigtalIoA2)
    {
        DigtalIoA2->setWindowTitle(QApplication::translate("DigtalIoA2", "Form", 0, QApplication::UnicodeUTF8));
        btnD1->setText(QApplication::translate("DigtalIoA2", "D1", 0, QApplication::UnicodeUTF8));
        btnC2->setText(QApplication::translate("DigtalIoA2", "C2", 0, QApplication::UnicodeUTF8));
        btnB1->setText(QApplication::translate("DigtalIoA2", "B1", 0, QApplication::UnicodeUTF8));
        btnA2->setText(QApplication::translate("DigtalIoA2", "A2", 0, QApplication::UnicodeUTF8));
        btnA1->setText(QApplication::translate("DigtalIoA2", "A1", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        btnC1->setText(QApplication::translate("DigtalIoA2", "C1", 0, QApplication::UnicodeUTF8));
        btnB2->setText(QApplication::translate("DigtalIoA2", "B2", 0, QApplication::UnicodeUTF8));
        btnD2->setText(QApplication::translate("DigtalIoA2", "D2", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("DigtalIoA2", "\342\206\222", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("DigtalIoA2", "1 / 1", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("DigtalIoA2", "\342\206\220", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("DigtalIoA2", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DigtalIoA2: public Ui_DigtalIoA2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGTALIOA2_H

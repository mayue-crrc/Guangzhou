/********************************************************************************
** Form generated from reading UI file 'digtalioothers.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGTALIOOTHERS_H
#define UI_DIGTALIOOTHERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigtalIoOthers
{
public:
    QPushButton *btnDown;
    QPushButton *btnD1;
    QLabel *lblPage;
    QPushButton *btnC2;
    QPushButton *btnB1;
    QPushButton *btnA2;
    QLabel *label_107;
    QPushButton *btnC1;
    QPushButton *btnBack;
    QPushButton *btnUp;
    QPushButton *btnB2;
    QPushButton *btnD2;
    QPushButton *btnA1;

    void setupUi(QWidget *DigtalIoOthers)
    {
        if (DigtalIoOthers->objectName().isEmpty())
            DigtalIoOthers->setObjectName(QString::fromUtf8("DigtalIoOthers"));
        DigtalIoOthers->resize(1024, 600);
        DigtalIoOthers->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnDown = new QPushButton(DigtalIoOthers);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setGeometry(QRect(800, 530, 81, 51));
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
        btnD1 = new QPushButton(DigtalIoOthers);
        btnD1->setObjectName(QString::fromUtf8("btnD1"));
        btnD1->setGeometry(QRect(930, 210, 81, 51));
        lblPage = new QLabel(DigtalIoOthers);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(630, 536, 71, 41));
        QFont font;
        font.setFamily(QString::fromUtf8(",\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lblPage->setFont(font);
        lblPage->setLayoutDirection(Qt::LeftToRight);
        lblPage->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        lblPage->setAlignment(Qt::AlignCenter);
        btnC2 = new QPushButton(DigtalIoOthers);
        btnC2->setObjectName(QString::fromUtf8("btnC2"));
        btnC2->setGeometry(QRect(930, 330, 81, 51));
        btnB1 = new QPushButton(DigtalIoOthers);
        btnB1->setObjectName(QString::fromUtf8("btnB1"));
        btnB1->setGeometry(QRect(930, 90, 81, 51));
        btnA2 = new QPushButton(DigtalIoOthers);
        btnA2->setObjectName(QString::fromUtf8("btnA2"));
        btnA2->setGeometry(QRect(930, 450, 81, 51));
        btnA2->setStyleSheet(QString::fromUtf8(""));
        label_107 = new QLabel(DigtalIoOthers);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(910, 0, 2, 600));
        label_107->setStyleSheet(QString::fromUtf8("border: 0px;\n"
"background-color: white;"));
        label_107->setAlignment(Qt::AlignCenter);
        btnC1 = new QPushButton(DigtalIoOthers);
        btnC1->setObjectName(QString::fromUtf8("btnC1"));
        btnC1->setGeometry(QRect(930, 150, 81, 51));
        btnBack = new QPushButton(DigtalIoOthers);
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
        btnUp = new QPushButton(DigtalIoOthers);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setGeometry(QRect(710, 530, 81, 51));
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
        btnB2 = new QPushButton(DigtalIoOthers);
        btnB2->setObjectName(QString::fromUtf8("btnB2"));
        btnB2->setGeometry(QRect(930, 390, 81, 51));
        btnD2 = new QPushButton(DigtalIoOthers);
        btnD2->setObjectName(QString::fromUtf8("btnD2"));
        btnD2->setGeometry(QRect(930, 270, 81, 51));
        btnA1 = new QPushButton(DigtalIoOthers);
        btnA1->setObjectName(QString::fromUtf8("btnA1"));
        btnA1->setGeometry(QRect(930, 30, 81, 51));
        btnA1->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(DigtalIoOthers);

        QMetaObject::connectSlotsByName(DigtalIoOthers);
    } // setupUi

    void retranslateUi(QWidget *DigtalIoOthers)
    {
        DigtalIoOthers->setWindowTitle(QApplication::translate("DigtalIoOthers", "Form", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("DigtalIoOthers", "\342\206\222", 0, QApplication::UnicodeUTF8));
        btnD1->setText(QApplication::translate("DigtalIoOthers", "D1", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("DigtalIoOthers", "1 / 1", 0, QApplication::UnicodeUTF8));
        btnC2->setText(QApplication::translate("DigtalIoOthers", "C2", 0, QApplication::UnicodeUTF8));
        btnB1->setText(QApplication::translate("DigtalIoOthers", "B1", 0, QApplication::UnicodeUTF8));
        btnA2->setText(QApplication::translate("DigtalIoOthers", "A2", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        btnC1->setText(QApplication::translate("DigtalIoOthers", "C1", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("DigtalIoOthers", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("DigtalIoOthers", "\342\206\220", 0, QApplication::UnicodeUTF8));
        btnB2->setText(QApplication::translate("DigtalIoOthers", "B2", 0, QApplication::UnicodeUTF8));
        btnD2->setText(QApplication::translate("DigtalIoOthers", "D2", 0, QApplication::UnicodeUTF8));
        btnA1->setText(QApplication::translate("DigtalIoOthers", "A1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DigtalIoOthers: public Ui_DigtalIoOthers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGTALIOOTHERS_H

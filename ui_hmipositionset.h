/********************************************************************************
** Form generated from reading UI file 'hmipositionset.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMIPOSITIONSET_H
#define UI_HMIPOSITIONSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HmiPositionSet
{
public:
    QLabel *label_7;
    QLabel *label_107;
    QPushButton *btnA1;
    QLabel *label_8;
    QPushButton *btnA2;
    QPushButton *btnBack;
    QPushButton *btnReboot;

    void setupUi(QWidget *HmiPositionSet)
    {
        if (HmiPositionSet->objectName().isEmpty())
            HmiPositionSet->setObjectName(QString::fromUtf8("HmiPositionSet"));
        HmiPositionSet->resize(1024, 600);
        HmiPositionSet->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_7 = new QLabel(HmiPositionSet);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 100, 141, 40));
        label_7->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_107 = new QLabel(HmiPositionSet);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(240, 120, 561, 211));
        label_107->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        label_107->setAlignment(Qt::AlignCenter);
        btnA1 = new QPushButton(HmiPositionSet);
        btnA1->setObjectName(QString::fromUtf8("btnA1"));
        btnA1->setGeometry(QRect(310, 150, 111, 51));
        label_8 = new QLabel(HmiPositionSet);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 350, 561, 40));
        label_8->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: red;"));
        label_8->setAlignment(Qt::AlignCenter);
        btnA2 = new QPushButton(HmiPositionSet);
        btnA2->setObjectName(QString::fromUtf8("btnA2"));
        btnA2->setGeometry(QRect(630, 150, 111, 51));
        btnBack = new QPushButton(HmiPositionSet);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(925, 530, 85, 41));
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
        btnReboot = new QPushButton(HmiPositionSet);
        btnReboot->setObjectName(QString::fromUtf8("btnReboot"));
        btnReboot->setGeometry(QRect(630, 250, 111, 51));
        btnReboot->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_107->raise();
        btnA1->raise();
        label_8->raise();
        btnA2->raise();
        btnBack->raise();
        btnReboot->raise();
        label_7->raise();

        retranslateUi(HmiPositionSet);

        QMetaObject::connectSlotsByName(HmiPositionSet);
    } // setupUi

    void retranslateUi(QWidget *HmiPositionSet)
    {
        HmiPositionSet->setWindowTitle(QApplication::translate("HmiPositionSet", "Form", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("HmiPositionSet", "HMI\344\275\215\347\275\256\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        label_107->setText(QString());
        btnA1->setText(QApplication::translate("HmiPositionSet", "A1", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("HmiPositionSet", "\350\256\276\347\275\256\345\256\214\346\210\220\345\220\216\357\274\214\351\234\200\350\246\201\351\207\215\346\226\260\345\220\257\345\212\250HMI", 0, QApplication::UnicodeUTF8));
        btnA2->setText(QApplication::translate("HmiPositionSet", "A2", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("HmiPositionSet", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnReboot->setText(QApplication::translate("HmiPositionSet", "\351\207\215\346\226\260\345\220\257\345\212\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HmiPositionSet: public Ui_HmiPositionSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMIPOSITIONSET_H

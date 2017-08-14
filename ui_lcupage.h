/********************************************************************************
** Form generated from reading UI file 'lcupage.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LCUPAGE_H
#define UI_LCUPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LcuPage
{
public:
    QPushButton *btnTemperatureSet;
    QPushButton *btnTemperatureSet_3;
    QPushButton *btnBack;
    QPushButton *btnPrevious;
    QPushButton *btnNext;
    QLabel *lblPage;

    void setupUi(QWidget *LcuPage)
    {
        if (LcuPage->objectName().isEmpty())
            LcuPage->setObjectName(QString::fromUtf8("LcuPage"));
        LcuPage->resize(1024, 600);
        LcuPage->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white"
                        "; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnTemperatureSet = new QPushButton(LcuPage);
        btnTemperatureSet->setObjectName(QString::fromUtf8("btnTemperatureSet"));
        btnTemperatureSet->setGeometry(QRect(920, 20, 100, 51));
        btnTemperatureSet->setFocusPolicy(Qt::NoFocus);
        btnTemperatureSet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnTemperatureSet_3 = new QPushButton(LcuPage);
        btnTemperatureSet_3->setObjectName(QString::fromUtf8("btnTemperatureSet_3"));
        btnTemperatureSet_3->setGeometry(QRect(920, 90, 100, 51));
        btnTemperatureSet_3->setFocusPolicy(Qt::NoFocus);
        btnBack = new QPushButton(LcuPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(920, 530, 100, 51));
        btnBack->setFocusPolicy(Qt::NoFocus);
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
        btnPrevious = new QPushButton(LcuPage);
        btnPrevious->setObjectName(QString::fromUtf8("btnPrevious"));
        btnPrevious->setGeometry(QRect(920, 460, 100, 51));
        btnPrevious->setFocusPolicy(Qt::NoFocus);
        btnPrevious->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnNext = new QPushButton(LcuPage);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(920, 360, 100, 51));
        btnNext->setFocusPolicy(Qt::NoFocus);
        btnNext->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	font: 30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 30px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
""
                        "  border-right-color: white; border-bottom-color: white;\n"
"}"));
        lblPage = new QLabel(LcuPage);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(920, 420, 101, 31));
        lblPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px groove, gray;\n"
"    border-color: gray;\n"
"	font: 17px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblPage->setAlignment(Qt::AlignCenter);

        retranslateUi(LcuPage);

        QMetaObject::connectSlotsByName(LcuPage);
    } // setupUi

    void retranslateUi(QWidget *LcuPage)
    {
        LcuPage->setWindowTitle(QApplication::translate("LcuPage", "Form", 0, QApplication::UnicodeUTF8));
        btnTemperatureSet->setText(QApplication::translate("LcuPage", "A1\350\275\246LCU", 0, QApplication::UnicodeUTF8));
        btnTemperatureSet_3->setText(QApplication::translate("LcuPage", "A2\350\275\246LCU", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("LcuPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnPrevious->setText(QApplication::translate("LcuPage", "\342\206\220", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("LcuPage", "\342\206\222", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("LcuPage", "2 / 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LcuPage: public Ui_LcuPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LCUPAGE_H

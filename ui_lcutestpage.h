/********************************************************************************
** Form generated from reading UI file 'lcutestpage.ui'
**
** Created: Tue Jun 20 23:39:17 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LCUTESTPAGE_H
#define UI_LCUTESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LcuTestPage
{
public:
    QPushButton *btnBack;
    QLabel *lblTips;
    QLabel *label_6;
    QPushButton *btnTest;
    QPushButton *btnTest_2;
    QLabel *lblTractionStartSpeed;
    QLabel *lblTitle1_6;
    QPushButton *btnTest_7;
    QLabel *lblTitle1_7;
    QPushButton *btnTest_3;
    QLabel *lblTractionStartSpeed_2;
    QPushButton *btnTest_4;
    QPushButton *btnTest_8;
    QLabel *lblTips_2;
    QLabel *lblTips_3;

    void setupUi(QWidget *LcuTestPage)
    {
        if (LcuTestPage->objectName().isEmpty())
            LcuTestPage->setObjectName(QString::fromUtf8("LcuTestPage"));
        LcuTestPage->resize(1024, 600);
        LcuTestPage->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnBack = new QPushButton(LcuTestPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(910, 520, 85, 51));
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
        lblTips = new QLabel(LcuTestPage);
        lblTips->setObjectName(QString::fromUtf8("lblTips"));
        lblTips->setGeometry(QRect(70, 380, 883, 101));
        lblTips->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(LcuTestPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 400, 60, 61));
        label_6->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 0px;\n"
"color: black;\n"
"border-radius: 5px;"));
        label_6->setAlignment(Qt::AlignCenter);
        btnTest = new QPushButton(LcuTestPage);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));
        btnTest->setGeometry(QRect(100, 160, 141, 50));
        btnTest->setFocusPolicy(Qt::NoFocus);
        btnTest->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
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
        btnTest_2 = new QPushButton(LcuTestPage);
        btnTest_2->setObjectName(QString::fromUtf8("btnTest_2"));
        btnTest_2->setGeometry(QRect(320, 160, 141, 50));
        btnTest_2->setFocusPolicy(Qt::NoFocus);
        btnTest_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lblTractionStartSpeed = new QLabel(LcuTestPage);
        lblTractionStartSpeed->setObjectName(QString::fromUtf8("lblTractionStartSpeed"));
        lblTractionStartSpeed->setGeometry(QRect(281, 90, 181, 50));
        lblTractionStartSpeed->setAlignment(Qt::AlignCenter);
        lblTitle1_6 = new QLabel(LcuTestPage);
        lblTitle1_6->setObjectName(QString::fromUtf8("lblTitle1_6"));
        lblTitle1_6->setGeometry(QRect(100, 90, 181, 50));
        lblTitle1_6->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_6->setAlignment(Qt::AlignCenter);
        btnTest_7 = new QPushButton(LcuTestPage);
        btnTest_7->setObjectName(QString::fromUtf8("btnTest_7"));
        btnTest_7->setGeometry(QRect(320, 230, 141, 50));
        btnTest_7->setFocusPolicy(Qt::NoFocus);
        btnTest_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lblTitle1_7 = new QLabel(LcuTestPage);
        lblTitle1_7->setObjectName(QString::fromUtf8("lblTitle1_7"));
        lblTitle1_7->setGeometry(QRect(560, 90, 181, 50));
        lblTitle1_7->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 230);\n"
"color: black;"));
        lblTitle1_7->setAlignment(Qt::AlignCenter);
        btnTest_3 = new QPushButton(LcuTestPage);
        btnTest_3->setObjectName(QString::fromUtf8("btnTest_3"));
        btnTest_3->setGeometry(QRect(560, 160, 141, 50));
        btnTest_3->setFocusPolicy(Qt::NoFocus);
        btnTest_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lblTractionStartSpeed_2 = new QLabel(LcuTestPage);
        lblTractionStartSpeed_2->setObjectName(QString::fromUtf8("lblTractionStartSpeed_2"));
        lblTractionStartSpeed_2->setGeometry(QRect(741, 90, 181, 50));
        lblTractionStartSpeed_2->setAlignment(Qt::AlignCenter);
        btnTest_4 = new QPushButton(LcuTestPage);
        btnTest_4->setObjectName(QString::fromUtf8("btnTest_4"));
        btnTest_4->setGeometry(QRect(780, 160, 141, 50));
        btnTest_4->setFocusPolicy(Qt::NoFocus);
        btnTest_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
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
        btnTest_8 = new QPushButton(LcuTestPage);
        btnTest_8->setObjectName(QString::fromUtf8("btnTest_8"));
        btnTest_8->setGeometry(QRect(780, 230, 141, 50));
        btnTest_8->setFocusPolicy(Qt::NoFocus);
        btnTest_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lblTips_2 = new QLabel(LcuTestPage);
        lblTips_2->setObjectName(QString::fromUtf8("lblTips_2"));
        lblTips_2->setGeometry(QRect(70, 60, 421, 241));
        lblTips_2->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips_2->setAlignment(Qt::AlignCenter);
        lblTips_3 = new QLabel(LcuTestPage);
        lblTips_3->setObjectName(QString::fromUtf8("lblTips_3"));
        lblTips_3->setGeometry(QRect(530, 60, 421, 241));
        lblTips_3->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: rgb(0, 255, 0);"));
        lblTips_3->setAlignment(Qt::AlignCenter);
        lblTips_2->raise();
        lblTips_3->raise();
        btnBack->raise();
        lblTips->raise();
        label_6->raise();
        btnTest->raise();
        btnTest_2->raise();
        lblTractionStartSpeed->raise();
        lblTitle1_6->raise();
        btnTest_7->raise();
        lblTitle1_7->raise();
        btnTest_3->raise();
        lblTractionStartSpeed_2->raise();
        btnTest_4->raise();
        btnTest_8->raise();

        retranslateUi(LcuTestPage);

        QMetaObject::connectSlotsByName(LcuTestPage);
    } // setupUi

    void retranslateUi(QWidget *LcuTestPage)
    {
        LcuTestPage->setWindowTitle(QApplication::translate("LcuTestPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("LcuTestPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lblTips->setText(QApplication::translate("LcuTestPage", " \345\234\250\345\217\270\346\234\272\345\256\244\345\215\240\346\234\211\347\232\204\346\235\241\344\273\266\344\270\213\357\274\214\345\215\225\345\207\273\346\214\211\351\222\256\350\277\233\350\241\214\346\265\213\350\257\225\343\200\202", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("LcuTestPage", "\346\223\215\344\275\234\n"
"\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        btnTest->setText(QApplication::translate("LcuTestPage", "\346\211\213\345\212\250\345\210\207\346\215\242\350\207\263A\347\273\204", 0, QApplication::UnicodeUTF8));
        btnTest_2->setText(QApplication::translate("LcuTestPage", "\346\211\213\345\212\250\345\210\207\346\215\242\350\207\263B\347\273\204", 0, QApplication::UnicodeUTF8));
        lblTractionStartSpeed->setText(QApplication::translate("LcuTestPage", "A\347\273\204", 0, QApplication::UnicodeUTF8));
        lblTitle1_6->setText(QApplication::translate("LcuTestPage", "A1\350\275\246LCU\345\275\223\345\211\215\345\267\245\344\275\234\347\273\204", 0, QApplication::UnicodeUTF8));
        btnTest_7->setText(QApplication::translate("LcuTestPage", "\350\207\252\345\212\250\345\210\207\346\215\242", 0, QApplication::UnicodeUTF8));
        lblTitle1_7->setText(QApplication::translate("LcuTestPage", "A2\350\275\246LCU\345\275\223\345\211\215\345\267\245\344\275\234\347\273\204", 0, QApplication::UnicodeUTF8));
        btnTest_3->setText(QApplication::translate("LcuTestPage", "\346\211\213\345\212\250\345\210\207\346\215\242\350\207\263A\347\273\204", 0, QApplication::UnicodeUTF8));
        lblTractionStartSpeed_2->setText(QApplication::translate("LcuTestPage", "B\347\273\204", 0, QApplication::UnicodeUTF8));
        btnTest_4->setText(QApplication::translate("LcuTestPage", "\346\211\213\345\212\250\345\210\207\346\215\242\350\207\263B\347\273\204", 0, QApplication::UnicodeUTF8));
        btnTest_8->setText(QApplication::translate("LcuTestPage", "\350\207\252\345\212\250\345\210\207\346\215\242", 0, QApplication::UnicodeUTF8));
        lblTips_2->setText(QString());
        lblTips_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LcuTestPage: public Ui_LcuTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LCUTESTPAGE_H

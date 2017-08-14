/********************************************************************************
** Form generated from reading UI file 'dcuparameters.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCUPARAMETERS_H
#define UI_DCUPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DcuParameters
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
    QLabel *lblPage;

    void setupUi(QWidget *DcuParameters)
    {
        if (DcuParameters->objectName().isEmpty())
            DcuParameters->setObjectName(QString::fromUtf8("DcuParameters"));
        DcuParameters->resize(1024, 600);
        DcuParameters->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        btnBcu = new QPushButton(DcuParameters);
        btnBcu->setObjectName(QString::fromUtf8("btnBcu"));
        btnBcu->setGeometry(QRect(930, 200, 80, 60));
        btnBcu->setStyleSheet(QString::fromUtf8(""));
        btnDown = new QPushButton(DcuParameters);
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
        btnTcu = new QPushButton(DcuParameters);
        btnTcu->setObjectName(QString::fromUtf8("btnTcu"));
        btnTcu->setGeometry(QRect(930, 130, 80, 60));
        btnTcu->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        label_2 = new QLabel(DcuParameters);
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
        btnBack = new QPushButton(DcuParameters);
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
        btnSiv = new QPushButton(DcuParameters);
        btnSiv->setObjectName(QString::fromUtf8("btnSiv"));
        btnSiv->setGeometry(QRect(930, 60, 80, 60));
        btnUp = new QPushButton(DcuParameters);
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
        btnOther = new QPushButton(DcuParameters);
        btnOther->setObjectName(QString::fromUtf8("btnOther"));
        btnOther->setGeometry(QRect(930, 270, 80, 60));
        lblPage = new QLabel(DcuParameters);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(770, 540, 66, 41));
        lblPage->setFont(font);
        lblPage->setLayoutDirection(Qt::LeftToRight);
        lblPage->setStyleSheet(QString::fromUtf8("	border: 0px;"));
        lblPage->setAlignment(Qt::AlignCenter);
        label_2->raise();
        btnBcu->raise();
        btnDown->raise();
        btnTcu->raise();
        btnBack->raise();
        btnSiv->raise();
        btnUp->raise();
        btnOther->raise();
        lblPage->raise();

        retranslateUi(DcuParameters);

        QMetaObject::connectSlotsByName(DcuParameters);
    } // setupUi

    void retranslateUi(QWidget *DcuParameters)
    {
        DcuParameters->setWindowTitle(QApplication::translate("DcuParameters", "Form", 0, QApplication::UnicodeUTF8));
        btnBcu->setText(QApplication::translate("DcuParameters", "GWV", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("DcuParameters", "\342\206\220", 0, QApplication::UnicodeUTF8));
        btnTcu->setText(QApplication::translate("DcuParameters", "VVVF", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        btnBack->setText(QApplication::translate("DcuParameters", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnSiv->setText(QApplication::translate("DcuParameters", "SIV", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("DcuParameters", "\342\206\222", 0, QApplication::UnicodeUTF8));
        btnOther->setText(QApplication::translate("DcuParameters", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("DcuParameters", "1 / 1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DcuParameters: public Ui_DcuParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCUPARAMETERS_H

/********************************************************************************
** Form generated from reading UI file 'mycase.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCASE_H
#define UI_MYCASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCase
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblDescription;
    QLabel *label_6;
    QPushButton *btnNextPage;
    QPushButton *btnPreviousPage;
    QLabel *lblPage;
    QPushButton *btnLine1Time;
    QPushButton *btnLine2Time;
    QPushButton *btnLine3Time;
    QPushButton *btnLine4Time;
    QPushButton *btnLine5Time;
    QPushButton *btnLine6Time;
    QPushButton *btnLine7Time;
    QPushButton *btnLine8Time;
    QPushButton *btnLine1Name;
    QPushButton *btnLine2Name;
    QPushButton *btnLine3Name;
    QPushButton *btnLine4Name;
    QPushButton *btnLine5Name;
    QPushButton *btnLine6Name;
    QPushButton *btnLine7Name;
    QPushButton *btnLine8Name;
    QPushButton *btnLine1Code;
    QPushButton *btnLine2Code;
    QPushButton *btnLine3Code;
    QPushButton *btnLine4Code;
    QPushButton *btnLine5Code;
    QPushButton *btnLine6Code;
    QPushButton *btnLine7Code;
    QPushButton *btnLine8Code;
    QPushButton *btnLine5Level;
    QPushButton *btnLine2Level;
    QPushButton *btnLine1Level;
    QPushButton *btnLine8Level;
    QPushButton *btnLine7Level;
    QPushButton *btnLine4Level;
    QPushButton *btnLine3Level;
    QPushButton *btnLine6Level;
    QPushButton *btnLine1Number;
    QPushButton *btnLine2Number;
    QPushButton *btnLine3Number;
    QPushButton *btnLine4Number;
    QPushButton *btnLine5Number;
    QPushButton *btnLine6Number;
    QPushButton *btnLine7Number;
    QPushButton *btnLine8Number;
    QLabel *txtDescription;
    QPushButton *btnReal;
    QPushButton *btnAll;

    void setupUi(QWidget *MyCase)
    {
        if (MyCase->objectName().isEmpty())
            MyCase->setObjectName(QString::fromUtf8("MyCase"));
        MyCase->resize(1024, 600);
        MyCase->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"	background-color: black;\n"
"}"));
        label = new QLabel(MyCase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 60, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(MyCase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(68, 20, 92, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(MyCase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(158, 20, 90, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(MyCase);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(246, 20, 541, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(MyCase);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(783, 20, 145, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_5->setAlignment(Qt::AlignCenter);
        lblDescription = new QLabel(MyCase);
        lblDescription->setObjectName(QString::fromUtf8("lblDescription"));
        lblDescription->setGeometry(QRect(40, 480, 901, 101));
        lblDescription->setStyleSheet(QString::fromUtf8("border-radius: 12px;"));
        lblDescription->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(MyCase);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 500, 60, 61));
        label_6->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 0px;\n"
"color: black;\n"
"border-radius: 5px;"));
        label_6->setAlignment(Qt::AlignCenter);
        btnNextPage = new QPushButton(MyCase);
        btnNextPage->setObjectName(QString::fromUtf8("btnNextPage"));
        btnNextPage->setGeometry(QRect(950, 320, 71, 41));
        btnNextPage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
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
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnPreviousPage = new QPushButton(MyCase);
        btnPreviousPage->setObjectName(QString::fromUtf8("btnPreviousPage"));
        btnPreviousPage->setGeometry(QRect(950, 370, 71, 41));
        btnPreviousPage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 33px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
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
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        lblPage = new QLabel(MyCase);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(950, 420, 71, 30));
        lblPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	border: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblPage->setAlignment(Qt::AlignCenter);
        btnLine1Time = new QPushButton(MyCase);
        btnLine1Time->setObjectName(QString::fromUtf8("btnLine1Time"));
        btnLine1Time->setGeometry(QRect(783, 60, 145, 41));
        btnLine1Time->setFocusPolicy(Qt::NoFocus);
        btnLine1Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine2Time = new QPushButton(MyCase);
        btnLine2Time->setObjectName(QString::fromUtf8("btnLine2Time"));
        btnLine2Time->setGeometry(QRect(783, 110, 145, 41));
        btnLine2Time->setFocusPolicy(Qt::NoFocus);
        btnLine2Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine3Time = new QPushButton(MyCase);
        btnLine3Time->setObjectName(QString::fromUtf8("btnLine3Time"));
        btnLine3Time->setGeometry(QRect(783, 160, 145, 41));
        btnLine3Time->setFocusPolicy(Qt::NoFocus);
        btnLine3Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine4Time = new QPushButton(MyCase);
        btnLine4Time->setObjectName(QString::fromUtf8("btnLine4Time"));
        btnLine4Time->setGeometry(QRect(783, 210, 145, 41));
        btnLine4Time->setFocusPolicy(Qt::NoFocus);
        btnLine4Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine5Time = new QPushButton(MyCase);
        btnLine5Time->setObjectName(QString::fromUtf8("btnLine5Time"));
        btnLine5Time->setGeometry(QRect(783, 260, 145, 41));
        btnLine5Time->setFocusPolicy(Qt::NoFocus);
        btnLine5Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine6Time = new QPushButton(MyCase);
        btnLine6Time->setObjectName(QString::fromUtf8("btnLine6Time"));
        btnLine6Time->setGeometry(QRect(783, 310, 145, 41));
        btnLine6Time->setFocusPolicy(Qt::NoFocus);
        btnLine6Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine7Time = new QPushButton(MyCase);
        btnLine7Time->setObjectName(QString::fromUtf8("btnLine7Time"));
        btnLine7Time->setGeometry(QRect(783, 360, 145, 41));
        btnLine7Time->setFocusPolicy(Qt::NoFocus);
        btnLine7Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine8Time = new QPushButton(MyCase);
        btnLine8Time->setObjectName(QString::fromUtf8("btnLine8Time"));
        btnLine8Time->setGeometry(QRect(783, 410, 145, 41));
        btnLine8Time->setFocusPolicy(Qt::NoFocus);
        btnLine8Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine1Name = new QPushButton(MyCase);
        btnLine1Name->setObjectName(QString::fromUtf8("btnLine1Name"));
        btnLine1Name->setGeometry(QRect(246, 60, 541, 41));
        btnLine1Name->setFocusPolicy(Qt::NoFocus);
        btnLine1Name->setStyleSheet(QString::fromUtf8(""));
        btnLine2Name = new QPushButton(MyCase);
        btnLine2Name->setObjectName(QString::fromUtf8("btnLine2Name"));
        btnLine2Name->setGeometry(QRect(246, 110, 541, 41));
        btnLine2Name->setFocusPolicy(Qt::NoFocus);
        btnLine2Name->setStyleSheet(QString::fromUtf8(""));
        btnLine3Name = new QPushButton(MyCase);
        btnLine3Name->setObjectName(QString::fromUtf8("btnLine3Name"));
        btnLine3Name->setGeometry(QRect(246, 160, 541, 41));
        btnLine3Name->setFocusPolicy(Qt::NoFocus);
        btnLine3Name->setStyleSheet(QString::fromUtf8(""));
        btnLine4Name = new QPushButton(MyCase);
        btnLine4Name->setObjectName(QString::fromUtf8("btnLine4Name"));
        btnLine4Name->setGeometry(QRect(246, 210, 541, 41));
        btnLine4Name->setFocusPolicy(Qt::NoFocus);
        btnLine4Name->setStyleSheet(QString::fromUtf8(""));
        btnLine5Name = new QPushButton(MyCase);
        btnLine5Name->setObjectName(QString::fromUtf8("btnLine5Name"));
        btnLine5Name->setGeometry(QRect(246, 260, 541, 41));
        btnLine5Name->setFocusPolicy(Qt::NoFocus);
        btnLine5Name->setStyleSheet(QString::fromUtf8(""));
        btnLine6Name = new QPushButton(MyCase);
        btnLine6Name->setObjectName(QString::fromUtf8("btnLine6Name"));
        btnLine6Name->setGeometry(QRect(246, 310, 541, 41));
        btnLine6Name->setFocusPolicy(Qt::NoFocus);
        btnLine6Name->setStyleSheet(QString::fromUtf8(""));
        btnLine7Name = new QPushButton(MyCase);
        btnLine7Name->setObjectName(QString::fromUtf8("btnLine7Name"));
        btnLine7Name->setGeometry(QRect(246, 360, 541, 41));
        btnLine7Name->setFocusPolicy(Qt::NoFocus);
        btnLine7Name->setStyleSheet(QString::fromUtf8(""));
        btnLine8Name = new QPushButton(MyCase);
        btnLine8Name->setObjectName(QString::fromUtf8("btnLine8Name"));
        btnLine8Name->setGeometry(QRect(246, 410, 541, 41));
        btnLine8Name->setFocusPolicy(Qt::NoFocus);
        btnLine8Name->setStyleSheet(QString::fromUtf8(""));
        btnLine1Code = new QPushButton(MyCase);
        btnLine1Code->setObjectName(QString::fromUtf8("btnLine1Code"));
        btnLine1Code->setGeometry(QRect(158, 60, 90, 41));
        btnLine1Code->setFocusPolicy(Qt::NoFocus);
        btnLine1Code->setStyleSheet(QString::fromUtf8(""));
        btnLine2Code = new QPushButton(MyCase);
        btnLine2Code->setObjectName(QString::fromUtf8("btnLine2Code"));
        btnLine2Code->setGeometry(QRect(158, 110, 90, 41));
        btnLine2Code->setFocusPolicy(Qt::NoFocus);
        btnLine2Code->setStyleSheet(QString::fromUtf8(""));
        btnLine3Code = new QPushButton(MyCase);
        btnLine3Code->setObjectName(QString::fromUtf8("btnLine3Code"));
        btnLine3Code->setGeometry(QRect(158, 160, 90, 41));
        btnLine3Code->setFocusPolicy(Qt::NoFocus);
        btnLine3Code->setStyleSheet(QString::fromUtf8(""));
        btnLine4Code = new QPushButton(MyCase);
        btnLine4Code->setObjectName(QString::fromUtf8("btnLine4Code"));
        btnLine4Code->setGeometry(QRect(158, 210, 90, 41));
        btnLine4Code->setFocusPolicy(Qt::NoFocus);
        btnLine4Code->setStyleSheet(QString::fromUtf8(""));
        btnLine5Code = new QPushButton(MyCase);
        btnLine5Code->setObjectName(QString::fromUtf8("btnLine5Code"));
        btnLine5Code->setGeometry(QRect(158, 260, 90, 41));
        btnLine5Code->setFocusPolicy(Qt::NoFocus);
        btnLine5Code->setStyleSheet(QString::fromUtf8(""));
        btnLine6Code = new QPushButton(MyCase);
        btnLine6Code->setObjectName(QString::fromUtf8("btnLine6Code"));
        btnLine6Code->setGeometry(QRect(158, 310, 90, 41));
        btnLine6Code->setFocusPolicy(Qt::NoFocus);
        btnLine6Code->setStyleSheet(QString::fromUtf8(""));
        btnLine7Code = new QPushButton(MyCase);
        btnLine7Code->setObjectName(QString::fromUtf8("btnLine7Code"));
        btnLine7Code->setGeometry(QRect(158, 360, 90, 41));
        btnLine7Code->setFocusPolicy(Qt::NoFocus);
        btnLine7Code->setStyleSheet(QString::fromUtf8(""));
        btnLine8Code = new QPushButton(MyCase);
        btnLine8Code->setObjectName(QString::fromUtf8("btnLine8Code"));
        btnLine8Code->setGeometry(QRect(158, 410, 90, 41));
        btnLine8Code->setFocusPolicy(Qt::NoFocus);
        btnLine8Code->setStyleSheet(QString::fromUtf8(""));
        btnLine5Level = new QPushButton(MyCase);
        btnLine5Level->setObjectName(QString::fromUtf8("btnLine5Level"));
        btnLine5Level->setGeometry(QRect(68, 260, 92, 41));
        btnLine5Level->setFocusPolicy(Qt::NoFocus);
        btnLine5Level->setStyleSheet(QString::fromUtf8(""));
        btnLine2Level = new QPushButton(MyCase);
        btnLine2Level->setObjectName(QString::fromUtf8("btnLine2Level"));
        btnLine2Level->setGeometry(QRect(68, 110, 92, 41));
        btnLine2Level->setFocusPolicy(Qt::NoFocus);
        btnLine2Level->setStyleSheet(QString::fromUtf8(""));
        btnLine1Level = new QPushButton(MyCase);
        btnLine1Level->setObjectName(QString::fromUtf8("btnLine1Level"));
        btnLine1Level->setGeometry(QRect(68, 60, 92, 41));
        btnLine1Level->setFocusPolicy(Qt::NoFocus);
        btnLine1Level->setStyleSheet(QString::fromUtf8(""));
        btnLine8Level = new QPushButton(MyCase);
        btnLine8Level->setObjectName(QString::fromUtf8("btnLine8Level"));
        btnLine8Level->setGeometry(QRect(68, 410, 92, 41));
        btnLine8Level->setFocusPolicy(Qt::NoFocus);
        btnLine8Level->setStyleSheet(QString::fromUtf8(""));
        btnLine7Level = new QPushButton(MyCase);
        btnLine7Level->setObjectName(QString::fromUtf8("btnLine7Level"));
        btnLine7Level->setGeometry(QRect(68, 360, 92, 41));
        btnLine7Level->setFocusPolicy(Qt::NoFocus);
        btnLine7Level->setStyleSheet(QString::fromUtf8(""));
        btnLine4Level = new QPushButton(MyCase);
        btnLine4Level->setObjectName(QString::fromUtf8("btnLine4Level"));
        btnLine4Level->setGeometry(QRect(68, 210, 92, 41));
        btnLine4Level->setFocusPolicy(Qt::NoFocus);
        btnLine4Level->setStyleSheet(QString::fromUtf8(""));
        btnLine3Level = new QPushButton(MyCase);
        btnLine3Level->setObjectName(QString::fromUtf8("btnLine3Level"));
        btnLine3Level->setGeometry(QRect(68, 160, 92, 41));
        btnLine3Level->setFocusPolicy(Qt::NoFocus);
        btnLine3Level->setStyleSheet(QString::fromUtf8(""));
        btnLine6Level = new QPushButton(MyCase);
        btnLine6Level->setObjectName(QString::fromUtf8("btnLine6Level"));
        btnLine6Level->setGeometry(QRect(68, 310, 92, 41));
        btnLine6Level->setFocusPolicy(Qt::NoFocus);
        btnLine6Level->setStyleSheet(QString::fromUtf8(""));
        btnLine1Number = new QPushButton(MyCase);
        btnLine1Number->setObjectName(QString::fromUtf8("btnLine1Number"));
        btnLine1Number->setGeometry(QRect(10, 60, 60, 41));
        btnLine1Number->setFocusPolicy(Qt::NoFocus);
        btnLine1Number->setStyleSheet(QString::fromUtf8(""));
        btnLine2Number = new QPushButton(MyCase);
        btnLine2Number->setObjectName(QString::fromUtf8("btnLine2Number"));
        btnLine2Number->setGeometry(QRect(10, 110, 60, 41));
        btnLine2Number->setFocusPolicy(Qt::NoFocus);
        btnLine2Number->setStyleSheet(QString::fromUtf8(""));
        btnLine3Number = new QPushButton(MyCase);
        btnLine3Number->setObjectName(QString::fromUtf8("btnLine3Number"));
        btnLine3Number->setGeometry(QRect(10, 160, 60, 41));
        btnLine3Number->setFocusPolicy(Qt::NoFocus);
        btnLine3Number->setStyleSheet(QString::fromUtf8(""));
        btnLine4Number = new QPushButton(MyCase);
        btnLine4Number->setObjectName(QString::fromUtf8("btnLine4Number"));
        btnLine4Number->setGeometry(QRect(10, 210, 60, 41));
        btnLine4Number->setFocusPolicy(Qt::NoFocus);
        btnLine4Number->setStyleSheet(QString::fromUtf8(""));
        btnLine5Number = new QPushButton(MyCase);
        btnLine5Number->setObjectName(QString::fromUtf8("btnLine5Number"));
        btnLine5Number->setGeometry(QRect(10, 260, 60, 41));
        btnLine5Number->setFocusPolicy(Qt::NoFocus);
        btnLine5Number->setStyleSheet(QString::fromUtf8(""));
        btnLine6Number = new QPushButton(MyCase);
        btnLine6Number->setObjectName(QString::fromUtf8("btnLine6Number"));
        btnLine6Number->setGeometry(QRect(10, 310, 60, 41));
        btnLine6Number->setFocusPolicy(Qt::NoFocus);
        btnLine6Number->setStyleSheet(QString::fromUtf8(""));
        btnLine7Number = new QPushButton(MyCase);
        btnLine7Number->setObjectName(QString::fromUtf8("btnLine7Number"));
        btnLine7Number->setGeometry(QRect(10, 360, 60, 41));
        btnLine7Number->setFocusPolicy(Qt::NoFocus);
        btnLine7Number->setStyleSheet(QString::fromUtf8(""));
        btnLine8Number = new QPushButton(MyCase);
        btnLine8Number->setObjectName(QString::fromUtf8("btnLine8Number"));
        btnLine8Number->setGeometry(QRect(10, 410, 60, 41));
        btnLine8Number->setFocusPolicy(Qt::NoFocus);
        btnLine8Number->setStyleSheet(QString::fromUtf8(""));
        txtDescription = new QLabel(MyCase);
        txtDescription->setObjectName(QString::fromUtf8("txtDescription"));
        txtDescription->setGeometry(QRect(80, 490, 851, 81));
        txtDescription->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        txtDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnReal = new QPushButton(MyCase);
        btnReal->setObjectName(QString::fromUtf8("btnReal"));
        btnReal->setGeometry(QRect(950, 70, 71, 61));
        btnReal->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 19px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"	background-color: rgb(0, 0, 255); \n"
"	border:2px solid white; \n"
"	border-left-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                        stop: 0 gray, stop: 1 black); 			border-top-color: qlineargradient(x1: 0, y1: 0, x2: 0, 										y2: 1, stop: 0 gray, stop: 1 black);\n"
"  border-right-color: white; border-bottom-color: white;\n"
"}"));
        btnAll = new QPushButton(MyCase);
        btnAll->setObjectName(QString::fromUtf8("btnAll"));
        btnAll->setGeometry(QRect(950, 140, 71, 61));
        btnAll->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 19px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:2px solid white; \n"
"    border-right-color: rgb(113, 113, 198); \n"
"    border-bottom-color: rgb(113, 113, 198);\n"
"}"));

        retranslateUi(MyCase);

        QMetaObject::connectSlotsByName(MyCase);
    } // setupUi

    void retranslateUi(QWidget *MyCase)
    {
        MyCase->setWindowTitle(QApplication::translate("MyCase", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MyCase", "No.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MyCase", "\347\255\211\347\272\247", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MyCase", "\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MyCase", "\344\272\213\344\273\266\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MyCase", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        lblDescription->setText(QString());
        label_6->setText(QApplication::translate("MyCase", "\346\223\215\344\275\234\n"
"\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        btnNextPage->setText(QApplication::translate("MyCase", "\342\206\222", 0, QApplication::UnicodeUTF8));
        btnPreviousPage->setText(QApplication::translate("MyCase", "\342\206\220", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("MyCase", "1 / 1", 0, QApplication::UnicodeUTF8));
        btnLine1Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine2Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine3Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine4Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine6Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine7Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine8Time->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine1Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine2Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine3Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine4Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine6Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine7Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine8Name->setText(QApplication::translate("MyCase", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine1Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine2Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine3Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine4Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine5Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine6Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine7Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine8Code->setText(QApplication::translate("MyCase", "1101", 0, QApplication::UnicodeUTF8));
        btnLine5Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine2Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine1Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine8Level->setText(QApplication::translate("MyCase", "\350\277\207\347\250\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnLine7Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine4Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine3Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine6Level->setText(QApplication::translate("MyCase", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine1Number->setText(QApplication::translate("MyCase", "1", 0, QApplication::UnicodeUTF8));
        btnLine2Number->setText(QApplication::translate("MyCase", "2", 0, QApplication::UnicodeUTF8));
        btnLine3Number->setText(QApplication::translate("MyCase", "3", 0, QApplication::UnicodeUTF8));
        btnLine4Number->setText(QApplication::translate("MyCase", "4", 0, QApplication::UnicodeUTF8));
        btnLine5Number->setText(QApplication::translate("MyCase", "5", 0, QApplication::UnicodeUTF8));
        btnLine6Number->setText(QApplication::translate("MyCase", "6", 0, QApplication::UnicodeUTF8));
        btnLine7Number->setText(QApplication::translate("MyCase", "7", 0, QApplication::UnicodeUTF8));
        btnLine8Number->setText(QApplication::translate("MyCase", "8", 0, QApplication::UnicodeUTF8));
        txtDescription->setText(QApplication::translate("MyCase", "Description", 0, QApplication::UnicodeUTF8));
        btnReal->setText(QApplication::translate("MyCase", "\345\256\236\346\227\266\n"
"\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnAll->setText(QApplication::translate("MyCase", "\346\211\200\346\234\211\n"
"\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyCase: public Ui_MyCase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCASE_H

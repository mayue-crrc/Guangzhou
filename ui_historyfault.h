/********************************************************************************
** Form generated from reading UI file 'historyfault.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYFAULT_H
#define UI_HISTORYFAULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryFault
{
public:
    QLabel *label;
    QLabel *lblPage;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *btnNextPage;
    QLabel *label_4;
    QPushButton *btnPreviousPage;
    QLabel *label_2;
    QPushButton *btnBack;
    QPushButton *btnLine3Code;
    QPushButton *btnLine3Name;
    QPushButton *btnLine3Level;
    QPushButton *btnLine7Code;
    QPushButton *btnLine8Time;
    QPushButton *btnLine4Level;
    QPushButton *btnLine5Time;
    QPushButton *btnLine1Time;
    QPushButton *btnLine2Number;
    QPushButton *btnLine4Name;
    QPushButton *btnLine2Level;
    QPushButton *btnLine2Time;
    QPushButton *btnLine5Name;
    QPushButton *btnLine5Number;
    QPushButton *btnLine1Number;
    QPushButton *btnLine1Code;
    QPushButton *btnLine6Code;
    QPushButton *btnLine2Code;
    QPushButton *btnLine6Name;
    QPushButton *btnLine5Level;
    QPushButton *btnLine7Time;
    QPushButton *btnLine8Number;
    QPushButton *btnLine4Time;
    QPushButton *btnLine6Level;
    QPushButton *btnLine7Name;
    QPushButton *btnLine7Level;
    QPushButton *btnLine1Level;
    QPushButton *btnLine4Number;
    QPushButton *btnLine3Time;
    QPushButton *btnLine5Code;
    QPushButton *btnLine8Name;
    QPushButton *btnLine6Time;
    QPushButton *btnLine7Number;
    QPushButton *btnLine8Code;
    QPushButton *btnLine8Level;
    QPushButton *btnLine1Name;
    QPushButton *btnLine4Code;
    QPushButton *btnLine3Number;
    QPushButton *btnLine2Name;
    QPushButton *btnLine6Number;
    QPushButton *btnLine10Code;
    QPushButton *btnLine10Level;
    QPushButton *btnLine10Time;
    QPushButton *btnLine9Code;
    QPushButton *btnLine9Name;
    QPushButton *btnLine10Name;
    QPushButton *btnLine9Level;
    QPushButton *btnLine10Number;
    QPushButton *btnLine9Number;
    QPushButton *btnLine9Time;
    QPushButton *btnLine8EndTime;
    QLabel *label_6;
    QPushButton *btnLine9EndTime;
    QPushButton *btnLine1EndTime;
    QPushButton *btnLine4EndTime;
    QPushButton *btnLine3EndTime;
    QPushButton *btnLine10EndTime;
    QPushButton *btnLine2EndTime;
    QPushButton *btnLine7EndTime;
    QPushButton *btnLine6EndTime;
    QPushButton *btnLine5EndTime;

    void setupUi(QWidget *HistoryFault)
    {
        if (HistoryFault->objectName().isEmpty())
            HistoryFault->setObjectName(QString::fromUtf8("HistoryFault"));
        HistoryFault->resize(1024, 600);
        HistoryFault->setStyleSheet(QString::fromUtf8("QLabel\n"
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
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 18px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label = new QLabel(HistoryFault);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 60, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label->setAlignment(Qt::AlignCenter);
        lblPage = new QLabel(HistoryFault);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(940, 420, 81, 30));
        lblPage->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border: 0px;\n"
"color: white;"));
        lblPage->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(HistoryFault);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(158, 30, 90, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(HistoryFault);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(722, 30, 111, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_5->setAlignment(Qt::AlignCenter);
        btnNextPage = new QPushButton(HistoryFault);
        btnNextPage->setObjectName(QString::fromUtf8("btnNextPage"));
        btnNextPage->setGeometry(QRect(950, 320, 61, 41));
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
        label_4 = new QLabel(HistoryFault);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(246, 30, 480, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_4->setAlignment(Qt::AlignCenter);
        btnPreviousPage = new QPushButton(HistoryFault);
        btnPreviousPage->setObjectName(QString::fromUtf8("btnPreviousPage"));
        btnPreviousPage->setGeometry(QRect(950, 370, 61, 41));
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
        label_2 = new QLabel(HistoryFault);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(68, 30, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_2->setAlignment(Qt::AlignCenter);
        btnBack = new QPushButton(HistoryFault);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(950, 510, 61, 41));
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
        btnLine3Code = new QPushButton(HistoryFault);
        btnLine3Code->setObjectName(QString::fromUtf8("btnLine3Code"));
        btnLine3Code->setGeometry(QRect(158, 170, 90, 41));
        btnLine3Code->setFocusPolicy(Qt::NoFocus);
        btnLine3Code->setStyleSheet(QString::fromUtf8(""));
        btnLine3Name = new QPushButton(HistoryFault);
        btnLine3Name->setObjectName(QString::fromUtf8("btnLine3Name"));
        btnLine3Name->setGeometry(QRect(246, 170, 480, 41));
        btnLine3Name->setFocusPolicy(Qt::NoFocus);
        btnLine3Name->setStyleSheet(QString::fromUtf8(""));
        btnLine3Level = new QPushButton(HistoryFault);
        btnLine3Level->setObjectName(QString::fromUtf8("btnLine3Level"));
        btnLine3Level->setGeometry(QRect(68, 170, 92, 41));
        btnLine3Level->setFocusPolicy(Qt::NoFocus);
        btnLine3Level->setStyleSheet(QString::fromUtf8(""));
        btnLine7Code = new QPushButton(HistoryFault);
        btnLine7Code->setObjectName(QString::fromUtf8("btnLine7Code"));
        btnLine7Code->setGeometry(QRect(158, 370, 90, 41));
        btnLine7Code->setFocusPolicy(Qt::NoFocus);
        btnLine7Code->setStyleSheet(QString::fromUtf8(""));
        btnLine8Time = new QPushButton(HistoryFault);
        btnLine8Time->setObjectName(QString::fromUtf8("btnLine8Time"));
        btnLine8Time->setGeometry(QRect(722, 420, 111, 41));
        btnLine8Time->setFocusPolicy(Qt::NoFocus);
        btnLine8Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine4Level = new QPushButton(HistoryFault);
        btnLine4Level->setObjectName(QString::fromUtf8("btnLine4Level"));
        btnLine4Level->setGeometry(QRect(68, 220, 92, 41));
        btnLine4Level->setFocusPolicy(Qt::NoFocus);
        btnLine4Level->setStyleSheet(QString::fromUtf8(""));
        btnLine5Time = new QPushButton(HistoryFault);
        btnLine5Time->setObjectName(QString::fromUtf8("btnLine5Time"));
        btnLine5Time->setGeometry(QRect(722, 270, 111, 41));
        btnLine5Time->setFocusPolicy(Qt::NoFocus);
        btnLine5Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine1Time = new QPushButton(HistoryFault);
        btnLine1Time->setObjectName(QString::fromUtf8("btnLine1Time"));
        btnLine1Time->setGeometry(QRect(722, 70, 111, 41));
        btnLine1Time->setFocusPolicy(Qt::NoFocus);
        btnLine1Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine2Number = new QPushButton(HistoryFault);
        btnLine2Number->setObjectName(QString::fromUtf8("btnLine2Number"));
        btnLine2Number->setGeometry(QRect(10, 120, 60, 41));
        btnLine2Number->setFocusPolicy(Qt::NoFocus);
        btnLine2Number->setStyleSheet(QString::fromUtf8(""));
        btnLine4Name = new QPushButton(HistoryFault);
        btnLine4Name->setObjectName(QString::fromUtf8("btnLine4Name"));
        btnLine4Name->setGeometry(QRect(246, 220, 480, 41));
        btnLine4Name->setFocusPolicy(Qt::NoFocus);
        btnLine4Name->setStyleSheet(QString::fromUtf8(""));
        btnLine2Level = new QPushButton(HistoryFault);
        btnLine2Level->setObjectName(QString::fromUtf8("btnLine2Level"));
        btnLine2Level->setGeometry(QRect(68, 120, 92, 41));
        btnLine2Level->setFocusPolicy(Qt::NoFocus);
        btnLine2Level->setStyleSheet(QString::fromUtf8(""));
        btnLine2Time = new QPushButton(HistoryFault);
        btnLine2Time->setObjectName(QString::fromUtf8("btnLine2Time"));
        btnLine2Time->setGeometry(QRect(722, 120, 111, 41));
        btnLine2Time->setFocusPolicy(Qt::NoFocus);
        btnLine2Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine5Name = new QPushButton(HistoryFault);
        btnLine5Name->setObjectName(QString::fromUtf8("btnLine5Name"));
        btnLine5Name->setGeometry(QRect(246, 270, 480, 41));
        btnLine5Name->setFocusPolicy(Qt::NoFocus);
        btnLine5Name->setStyleSheet(QString::fromUtf8(""));
        btnLine5Number = new QPushButton(HistoryFault);
        btnLine5Number->setObjectName(QString::fromUtf8("btnLine5Number"));
        btnLine5Number->setGeometry(QRect(10, 270, 60, 41));
        btnLine5Number->setFocusPolicy(Qt::NoFocus);
        btnLine5Number->setStyleSheet(QString::fromUtf8(""));
        btnLine1Number = new QPushButton(HistoryFault);
        btnLine1Number->setObjectName(QString::fromUtf8("btnLine1Number"));
        btnLine1Number->setGeometry(QRect(10, 70, 60, 41));
        btnLine1Number->setFocusPolicy(Qt::NoFocus);
        btnLine1Number->setStyleSheet(QString::fromUtf8(""));
        btnLine1Code = new QPushButton(HistoryFault);
        btnLine1Code->setObjectName(QString::fromUtf8("btnLine1Code"));
        btnLine1Code->setGeometry(QRect(158, 70, 90, 41));
        btnLine1Code->setFocusPolicy(Qt::NoFocus);
        btnLine1Code->setStyleSheet(QString::fromUtf8(""));
        btnLine6Code = new QPushButton(HistoryFault);
        btnLine6Code->setObjectName(QString::fromUtf8("btnLine6Code"));
        btnLine6Code->setGeometry(QRect(158, 320, 90, 41));
        btnLine6Code->setFocusPolicy(Qt::NoFocus);
        btnLine6Code->setStyleSheet(QString::fromUtf8(""));
        btnLine2Code = new QPushButton(HistoryFault);
        btnLine2Code->setObjectName(QString::fromUtf8("btnLine2Code"));
        btnLine2Code->setGeometry(QRect(158, 120, 90, 41));
        btnLine2Code->setFocusPolicy(Qt::NoFocus);
        btnLine2Code->setStyleSheet(QString::fromUtf8(""));
        btnLine6Name = new QPushButton(HistoryFault);
        btnLine6Name->setObjectName(QString::fromUtf8("btnLine6Name"));
        btnLine6Name->setGeometry(QRect(246, 320, 480, 41));
        btnLine6Name->setFocusPolicy(Qt::NoFocus);
        btnLine6Name->setStyleSheet(QString::fromUtf8(""));
        btnLine5Level = new QPushButton(HistoryFault);
        btnLine5Level->setObjectName(QString::fromUtf8("btnLine5Level"));
        btnLine5Level->setGeometry(QRect(68, 270, 92, 41));
        btnLine5Level->setFocusPolicy(Qt::NoFocus);
        btnLine5Level->setStyleSheet(QString::fromUtf8(""));
        btnLine7Time = new QPushButton(HistoryFault);
        btnLine7Time->setObjectName(QString::fromUtf8("btnLine7Time"));
        btnLine7Time->setGeometry(QRect(722, 370, 111, 41));
        btnLine7Time->setFocusPolicy(Qt::NoFocus);
        btnLine7Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine8Number = new QPushButton(HistoryFault);
        btnLine8Number->setObjectName(QString::fromUtf8("btnLine8Number"));
        btnLine8Number->setGeometry(QRect(10, 420, 60, 41));
        btnLine8Number->setFocusPolicy(Qt::NoFocus);
        btnLine8Number->setStyleSheet(QString::fromUtf8(""));
        btnLine4Time = new QPushButton(HistoryFault);
        btnLine4Time->setObjectName(QString::fromUtf8("btnLine4Time"));
        btnLine4Time->setGeometry(QRect(722, 220, 111, 41));
        btnLine4Time->setFocusPolicy(Qt::NoFocus);
        btnLine4Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine6Level = new QPushButton(HistoryFault);
        btnLine6Level->setObjectName(QString::fromUtf8("btnLine6Level"));
        btnLine6Level->setGeometry(QRect(68, 320, 92, 41));
        btnLine6Level->setFocusPolicy(Qt::NoFocus);
        btnLine6Level->setStyleSheet(QString::fromUtf8(""));
        btnLine7Name = new QPushButton(HistoryFault);
        btnLine7Name->setObjectName(QString::fromUtf8("btnLine7Name"));
        btnLine7Name->setGeometry(QRect(246, 370, 480, 41));
        btnLine7Name->setFocusPolicy(Qt::NoFocus);
        btnLine7Name->setStyleSheet(QString::fromUtf8(""));
        btnLine7Level = new QPushButton(HistoryFault);
        btnLine7Level->setObjectName(QString::fromUtf8("btnLine7Level"));
        btnLine7Level->setGeometry(QRect(68, 370, 92, 41));
        btnLine7Level->setFocusPolicy(Qt::NoFocus);
        btnLine7Level->setStyleSheet(QString::fromUtf8(""));
        btnLine1Level = new QPushButton(HistoryFault);
        btnLine1Level->setObjectName(QString::fromUtf8("btnLine1Level"));
        btnLine1Level->setGeometry(QRect(68, 70, 92, 41));
        btnLine1Level->setFocusPolicy(Qt::NoFocus);
        btnLine1Level->setStyleSheet(QString::fromUtf8(""));
        btnLine4Number = new QPushButton(HistoryFault);
        btnLine4Number->setObjectName(QString::fromUtf8("btnLine4Number"));
        btnLine4Number->setGeometry(QRect(10, 220, 60, 41));
        btnLine4Number->setFocusPolicy(Qt::NoFocus);
        btnLine4Number->setStyleSheet(QString::fromUtf8(""));
        btnLine3Time = new QPushButton(HistoryFault);
        btnLine3Time->setObjectName(QString::fromUtf8("btnLine3Time"));
        btnLine3Time->setGeometry(QRect(722, 170, 111, 41));
        btnLine3Time->setFocusPolicy(Qt::NoFocus);
        btnLine3Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine5Code = new QPushButton(HistoryFault);
        btnLine5Code->setObjectName(QString::fromUtf8("btnLine5Code"));
        btnLine5Code->setGeometry(QRect(158, 270, 90, 41));
        btnLine5Code->setFocusPolicy(Qt::NoFocus);
        btnLine5Code->setStyleSheet(QString::fromUtf8(""));
        btnLine8Name = new QPushButton(HistoryFault);
        btnLine8Name->setObjectName(QString::fromUtf8("btnLine8Name"));
        btnLine8Name->setGeometry(QRect(246, 420, 480, 41));
        btnLine8Name->setFocusPolicy(Qt::NoFocus);
        btnLine8Name->setStyleSheet(QString::fromUtf8(""));
        btnLine6Time = new QPushButton(HistoryFault);
        btnLine6Time->setObjectName(QString::fromUtf8("btnLine6Time"));
        btnLine6Time->setGeometry(QRect(722, 320, 111, 41));
        btnLine6Time->setFocusPolicy(Qt::NoFocus);
        btnLine6Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine7Number = new QPushButton(HistoryFault);
        btnLine7Number->setObjectName(QString::fromUtf8("btnLine7Number"));
        btnLine7Number->setGeometry(QRect(10, 370, 60, 41));
        btnLine7Number->setFocusPolicy(Qt::NoFocus);
        btnLine7Number->setStyleSheet(QString::fromUtf8(""));
        btnLine8Code = new QPushButton(HistoryFault);
        btnLine8Code->setObjectName(QString::fromUtf8("btnLine8Code"));
        btnLine8Code->setGeometry(QRect(158, 420, 90, 41));
        btnLine8Code->setFocusPolicy(Qt::NoFocus);
        btnLine8Code->setStyleSheet(QString::fromUtf8(""));
        btnLine8Level = new QPushButton(HistoryFault);
        btnLine8Level->setObjectName(QString::fromUtf8("btnLine8Level"));
        btnLine8Level->setGeometry(QRect(68, 420, 92, 41));
        btnLine8Level->setFocusPolicy(Qt::NoFocus);
        btnLine8Level->setStyleSheet(QString::fromUtf8(""));
        btnLine1Name = new QPushButton(HistoryFault);
        btnLine1Name->setObjectName(QString::fromUtf8("btnLine1Name"));
        btnLine1Name->setGeometry(QRect(246, 70, 480, 41));
        btnLine1Name->setFocusPolicy(Qt::NoFocus);
        btnLine1Name->setStyleSheet(QString::fromUtf8(""));
        btnLine4Code = new QPushButton(HistoryFault);
        btnLine4Code->setObjectName(QString::fromUtf8("btnLine4Code"));
        btnLine4Code->setGeometry(QRect(158, 220, 90, 41));
        btnLine4Code->setFocusPolicy(Qt::NoFocus);
        btnLine4Code->setStyleSheet(QString::fromUtf8(""));
        btnLine3Number = new QPushButton(HistoryFault);
        btnLine3Number->setObjectName(QString::fromUtf8("btnLine3Number"));
        btnLine3Number->setGeometry(QRect(10, 170, 60, 41));
        btnLine3Number->setFocusPolicy(Qt::NoFocus);
        btnLine3Number->setStyleSheet(QString::fromUtf8(""));
        btnLine2Name = new QPushButton(HistoryFault);
        btnLine2Name->setObjectName(QString::fromUtf8("btnLine2Name"));
        btnLine2Name->setGeometry(QRect(246, 120, 480, 41));
        btnLine2Name->setFocusPolicy(Qt::NoFocus);
        btnLine2Name->setStyleSheet(QString::fromUtf8(""));
        btnLine6Number = new QPushButton(HistoryFault);
        btnLine6Number->setObjectName(QString::fromUtf8("btnLine6Number"));
        btnLine6Number->setGeometry(QRect(10, 320, 60, 41));
        btnLine6Number->setFocusPolicy(Qt::NoFocus);
        btnLine6Number->setStyleSheet(QString::fromUtf8(""));
        btnLine10Code = new QPushButton(HistoryFault);
        btnLine10Code->setObjectName(QString::fromUtf8("btnLine10Code"));
        btnLine10Code->setGeometry(QRect(158, 520, 90, 41));
        btnLine10Code->setFocusPolicy(Qt::NoFocus);
        btnLine10Code->setStyleSheet(QString::fromUtf8(""));
        btnLine10Level = new QPushButton(HistoryFault);
        btnLine10Level->setObjectName(QString::fromUtf8("btnLine10Level"));
        btnLine10Level->setGeometry(QRect(68, 520, 92, 41));
        btnLine10Level->setFocusPolicy(Qt::NoFocus);
        btnLine10Level->setStyleSheet(QString::fromUtf8(""));
        btnLine10Time = new QPushButton(HistoryFault);
        btnLine10Time->setObjectName(QString::fromUtf8("btnLine10Time"));
        btnLine10Time->setGeometry(QRect(722, 520, 111, 41));
        btnLine10Time->setFocusPolicy(Qt::NoFocus);
        btnLine10Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine9Code = new QPushButton(HistoryFault);
        btnLine9Code->setObjectName(QString::fromUtf8("btnLine9Code"));
        btnLine9Code->setGeometry(QRect(158, 470, 90, 41));
        btnLine9Code->setFocusPolicy(Qt::NoFocus);
        btnLine9Code->setStyleSheet(QString::fromUtf8(""));
        btnLine9Name = new QPushButton(HistoryFault);
        btnLine9Name->setObjectName(QString::fromUtf8("btnLine9Name"));
        btnLine9Name->setGeometry(QRect(246, 470, 480, 41));
        btnLine9Name->setFocusPolicy(Qt::NoFocus);
        btnLine9Name->setStyleSheet(QString::fromUtf8(""));
        btnLine10Name = new QPushButton(HistoryFault);
        btnLine10Name->setObjectName(QString::fromUtf8("btnLine10Name"));
        btnLine10Name->setGeometry(QRect(246, 520, 480, 41));
        btnLine10Name->setFocusPolicy(Qt::NoFocus);
        btnLine10Name->setStyleSheet(QString::fromUtf8(""));
        btnLine9Level = new QPushButton(HistoryFault);
        btnLine9Level->setObjectName(QString::fromUtf8("btnLine9Level"));
        btnLine9Level->setGeometry(QRect(68, 470, 92, 41));
        btnLine9Level->setFocusPolicy(Qt::NoFocus);
        btnLine9Level->setStyleSheet(QString::fromUtf8(""));
        btnLine10Number = new QPushButton(HistoryFault);
        btnLine10Number->setObjectName(QString::fromUtf8("btnLine10Number"));
        btnLine10Number->setGeometry(QRect(10, 520, 60, 41));
        btnLine10Number->setFocusPolicy(Qt::NoFocus);
        btnLine10Number->setStyleSheet(QString::fromUtf8(""));
        btnLine9Number = new QPushButton(HistoryFault);
        btnLine9Number->setObjectName(QString::fromUtf8("btnLine9Number"));
        btnLine9Number->setGeometry(QRect(10, 470, 60, 41));
        btnLine9Number->setFocusPolicy(Qt::NoFocus);
        btnLine9Number->setStyleSheet(QString::fromUtf8(""));
        btnLine9Time = new QPushButton(HistoryFault);
        btnLine9Time->setObjectName(QString::fromUtf8("btnLine9Time"));
        btnLine9Time->setGeometry(QRect(722, 470, 111, 41));
        btnLine9Time->setFocusPolicy(Qt::NoFocus);
        btnLine9Time->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine8EndTime = new QPushButton(HistoryFault);
        btnLine8EndTime->setObjectName(QString::fromUtf8("btnLine8EndTime"));
        btnLine8EndTime->setGeometry(QRect(830, 420, 111, 41));
        btnLine8EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine8EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_6 = new QLabel(HistoryFault);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(830, 30, 111, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 191);"));
        label_6->setAlignment(Qt::AlignCenter);
        btnLine9EndTime = new QPushButton(HistoryFault);
        btnLine9EndTime->setObjectName(QString::fromUtf8("btnLine9EndTime"));
        btnLine9EndTime->setGeometry(QRect(830, 470, 111, 41));
        btnLine9EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine9EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine1EndTime = new QPushButton(HistoryFault);
        btnLine1EndTime->setObjectName(QString::fromUtf8("btnLine1EndTime"));
        btnLine1EndTime->setGeometry(QRect(830, 70, 111, 41));
        btnLine1EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine1EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine4EndTime = new QPushButton(HistoryFault);
        btnLine4EndTime->setObjectName(QString::fromUtf8("btnLine4EndTime"));
        btnLine4EndTime->setGeometry(QRect(830, 220, 111, 41));
        btnLine4EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine4EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine3EndTime = new QPushButton(HistoryFault);
        btnLine3EndTime->setObjectName(QString::fromUtf8("btnLine3EndTime"));
        btnLine3EndTime->setGeometry(QRect(830, 170, 111, 41));
        btnLine3EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine3EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine10EndTime = new QPushButton(HistoryFault);
        btnLine10EndTime->setObjectName(QString::fromUtf8("btnLine10EndTime"));
        btnLine10EndTime->setGeometry(QRect(830, 520, 111, 41));
        btnLine10EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine10EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine2EndTime = new QPushButton(HistoryFault);
        btnLine2EndTime->setObjectName(QString::fromUtf8("btnLine2EndTime"));
        btnLine2EndTime->setGeometry(QRect(830, 120, 111, 41));
        btnLine2EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine2EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine7EndTime = new QPushButton(HistoryFault);
        btnLine7EndTime->setObjectName(QString::fromUtf8("btnLine7EndTime"));
        btnLine7EndTime->setGeometry(QRect(830, 370, 111, 41));
        btnLine7EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine7EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine6EndTime = new QPushButton(HistoryFault);
        btnLine6EndTime->setObjectName(QString::fromUtf8("btnLine6EndTime"));
        btnLine6EndTime->setGeometry(QRect(830, 320, 111, 41));
        btnLine6EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine6EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnLine5EndTime = new QPushButton(HistoryFault);
        btnLine5EndTime->setObjectName(QString::fromUtf8("btnLine5EndTime"));
        btnLine5EndTime->setGeometry(QRect(830, 270, 111, 41));
        btnLine5EndTime->setFocusPolicy(Qt::NoFocus);
        btnLine5EndTime->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	border: 2px groove, gray;\n"
"    border-color: gray;\n"
"	border-width: 0px;\n"
"	font: 16px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        retranslateUi(HistoryFault);

        QMetaObject::connectSlotsByName(HistoryFault);
    } // setupUi

    void retranslateUi(QWidget *HistoryFault)
    {
        HistoryFault->setWindowTitle(QApplication::translate("HistoryFault", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HistoryFault", "No.", 0, QApplication::UnicodeUTF8));
        lblPage->setText(QApplication::translate("HistoryFault", "1 / 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("HistoryFault", "\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("HistoryFault", "\345\207\272\347\216\260\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        btnNextPage->setText(QApplication::translate("HistoryFault", "\342\206\222", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("HistoryFault", "\344\272\213\344\273\266\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        btnPreviousPage->setText(QApplication::translate("HistoryFault", "\342\206\220", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HistoryFault", "\347\255\211\347\272\247", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("HistoryFault", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnLine3Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine3Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine3Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine7Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine8Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine4Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine5Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine1Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine2Number->setText(QApplication::translate("HistoryFault", "2", 0, QApplication::UnicodeUTF8));
        btnLine4Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine2Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine2Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5Number->setText(QApplication::translate("HistoryFault", "5", 0, QApplication::UnicodeUTF8));
        btnLine1Number->setText(QApplication::translate("HistoryFault", "1", 0, QApplication::UnicodeUTF8));
        btnLine1Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine6Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine2Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine6Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine7Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine8Number->setText(QApplication::translate("HistoryFault", "8", 0, QApplication::UnicodeUTF8));
        btnLine4Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine6Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine7Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine7Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine1Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine4Number->setText(QApplication::translate("HistoryFault", "4", 0, QApplication::UnicodeUTF8));
        btnLine3Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine8Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine6Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine7Number->setText(QApplication::translate("HistoryFault", "7", 0, QApplication::UnicodeUTF8));
        btnLine8Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine8Level->setText(QApplication::translate("HistoryFault", "\350\277\207\347\250\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnLine1Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine4Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine3Number->setText(QApplication::translate("HistoryFault", "3", 0, QApplication::UnicodeUTF8));
        btnLine2Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine6Number->setText(QApplication::translate("HistoryFault", "6", 0, QApplication::UnicodeUTF8));
        btnLine10Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine10Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine10Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine9Code->setText(QApplication::translate("HistoryFault", "1101", 0, QApplication::UnicodeUTF8));
        btnLine9Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine10Name->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine9Level->setText(QApplication::translate("HistoryFault", "1\347\272\247\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLine10Number->setText(QApplication::translate("HistoryFault", "10", 0, QApplication::UnicodeUTF8));
        btnLine9Number->setText(QApplication::translate("HistoryFault", "9", 0, QApplication::UnicodeUTF8));
        btnLine9Time->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine8EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("HistoryFault", "\346\266\210\351\231\244\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        btnLine9EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine1EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine4EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine3EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine10EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine2EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine7EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine6EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
        btnLine5EndTime->setText(QApplication::translate("HistoryFault", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HistoryFault: public Ui_HistoryFault {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYFAULT_H

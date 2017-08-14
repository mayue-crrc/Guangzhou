/********************************************************************************
** Form generated from reading UI file 'header.ui'
**
** Created: Tue Jun 20 23:39:16 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADER_H
#define UI_HEADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Header
{
public:
    QPushButton *btnHelp;
    QLabel *lblPageTitle;
    QLabel *lblRunningMode;
    QLabel *lblTractionPercent;
    QLabel *lblDirection;
    QLabel *lblNextStation;
    QLabel *lblCurrentStation;
    QLabel *label_9;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblDate;
    QLabel *lblTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblVoltage;
    QLabel *lblSpeed;
    QLabel *lblNoCommunication;

    void setupUi(QWidget *Header)
    {
        if (Header->objectName().isEmpty())
            Header->setObjectName(QString::fromUtf8("Header"));
        Header->resize(1024, 100);
        Header->setLayoutDirection(Qt::LeftToRight);
        Header->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: white;\n"
"	font: 20px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        btnHelp = new QPushButton(Header);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setGeometry(QRect(0, 0, 71, 60));
        btnHelp->setFocusPolicy(Qt::NoFocus);
        btnHelp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 40px,  \"\345\276\256\350\275\257\351\233\205\351\273\221\";;\n"
"	color: rgb(0, 255, 0);\n"
"    background-color: rgb(200, 200, 200);\n"
"}"));
        lblPageTitle = new QLabel(Header);
        lblPageTitle->setObjectName(QString::fromUtf8("lblPageTitle"));
        lblPageTitle->setGeometry(QRect(300, 0, 171, 41));
        lblPageTitle->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"	font: 28px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblPageTitle->setAlignment(Qt::AlignCenter);
        lblRunningMode = new QLabel(Header);
        lblRunningMode->setObjectName(QString::fromUtf8("lblRunningMode"));
        lblRunningMode->setGeometry(QRect(0, 70, 81, 21));
        lblTractionPercent = new QLabel(Header);
        lblTractionPercent->setObjectName(QString::fromUtf8("lblTractionPercent"));
        lblTractionPercent->setGeometry(QRect(140, 70, 101, 21));
        lblTractionPercent->setAlignment(Qt::AlignCenter);
        lblDirection = new QLabel(Header);
        lblDirection->setObjectName(QString::fromUtf8("lblDirection"));
        lblDirection->setGeometry(QRect(340, 70, 91, 21));
        lblDirection->setAlignment(Qt::AlignCenter);
        lblNextStation = new QLabel(Header);
        lblNextStation->setObjectName(QString::fromUtf8("lblNextStation"));
        lblNextStation->setGeometry(QRect(520, 70, 221, 21));
        lblCurrentStation = new QLabel(Header);
        lblCurrentStation->setObjectName(QString::fromUtf8("lblCurrentStation"));
        lblCurrentStation->setGeometry(QRect(520, 30, 221, 21));
        label_9 = new QLabel(Header);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 98, 1024, 2));
        label_9->setStyleSheet(QString::fromUtf8("background-color: white"));
        layoutWidget = new QWidget(Header);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(749, 30, 271, 68));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblDate = new QLabel(layoutWidget);
        lblDate->setObjectName(QString::fromUtf8("lblDate"));
        lblDate->setMinimumSize(QSize(120, 0));
        lblDate->setMaximumSize(QSize(120, 16777215));
        lblDate->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblDate);

        lblTime = new QLabel(layoutWidget);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setMinimumSize(QSize(120, 0));
        lblTime->setMaximumSize(QSize(120, 16777215));
        lblTime->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblTime);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblVoltage = new QLabel(layoutWidget);
        lblVoltage->setObjectName(QString::fromUtf8("lblVoltage"));
        lblVoltage->setMaximumSize(QSize(120, 16777215));
        lblVoltage->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblVoltage);

        lblSpeed = new QLabel(layoutWidget);
        lblSpeed->setObjectName(QString::fromUtf8("lblSpeed"));
        lblSpeed->setMaximumSize(QSize(120, 16777215));
        lblSpeed->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblSpeed);


        verticalLayout->addLayout(horizontalLayout_2);

        lblNoCommunication = new QLabel(Header);
        lblNoCommunication->setObjectName(QString::fromUtf8("lblNoCommunication"));
        lblNoCommunication->setGeometry(QRect(100, 0, 171, 41));
        lblNoCommunication->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: red;\n"
"	font: 28px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        lblNoCommunication->setAlignment(Qt::AlignCenter);

        retranslateUi(Header);

        QMetaObject::connectSlotsByName(Header);
    } // setupUi

    void retranslateUi(QWidget *Header)
    {
        Header->setWindowTitle(QApplication::translate("Header", "Form", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("Header", "?", 0, QApplication::UnicodeUTF8));
        lblPageTitle->setText(QApplication::translate("Header", "\350\275\246\350\276\206\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        lblRunningMode->setText(QApplication::translate("Header", "ATP\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        lblTractionPercent->setText(QApplication::translate("Header", "\347\211\265\345\274\225\357\274\2150\357\274\205", 0, QApplication::UnicodeUTF8));
        lblDirection->setText(QApplication::translate("Header", "\345\220\221\345\211\215 \342\226\266", 0, QApplication::UnicodeUTF8));
        lblNextStation->setText(QApplication::translate("Header", "\344\270\213\344\270\200\347\253\231\357\274\232\357\274\215", 0, QApplication::UnicodeUTF8));
        lblCurrentStation->setText(QApplication::translate("Header", "\345\275\223\345\211\215\347\253\231\357\274\232\357\274\215", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Header", "ATP\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        lblDate->setText(QApplication::translate("Header", "2016-03-03", 0, QApplication::UnicodeUTF8));
        lblTime->setText(QApplication::translate("Header", "15:27:00", 0, QApplication::UnicodeUTF8));
        lblVoltage->setText(QApplication::translate("Header", "0V", 0, QApplication::UnicodeUTF8));
        lblSpeed->setText(QApplication::translate("Header", "0 km/h", 0, QApplication::UnicodeUTF8));
        lblNoCommunication->setText(QApplication::translate("Header", "\351\200\232\350\256\257\344\270\255\346\226\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Header: public Ui_Header {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADER_H

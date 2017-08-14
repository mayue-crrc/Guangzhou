#include "lcupage.h"
#include "ui_lcupage.h"
#include <QPainter>

#define _COLUMN 4
#define _ROW 33

LcuPage::LcuPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::LcuPage)
{
    ui->setupUi(this);
}

LcuPage::~LcuPage()
{
    delete ui;
}

void LcuPage::on_btnBack_clicked()
{
    this->changePage(uTroubleShootingPage);
}

void LcuPage::updatePage()
{
    this->update();
}

void LcuPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rect;

    rect = QRect(0, 0, 1024, 600);
    painter.setPen(Qt::black);
    painter.setBrush(Qt::black);
    painter.drawRect(rect);

    painter.setPen(Qt::white);
    painter.setBrush(Qt::black);

    QFont font;
    font.setFamily("微软雅黑");
    font.setPixelSize(15);

    painter.setFont(font);

    QString input, lineNumber, state;

    for (int i = 0; i < 33; i ++)
    {
        for (int j = 0; j < 4; j ++)
        {
            if (0 == i)
            {
                input = QString("输出");
                lineNumber = QString("线号");
                state = QString("状态");
            }
            else
            {
                input.sprintf("%03d", i + 32 * j);
                lineNumber = QString("");
                state = QString("");
            }




            // input
            painter.save();
            rect = QRect(10 + 225 * j, 20 + 17 * i, 60, 17);

            QLinearGradient gradient(rect.left(), rect.top(), rect.right(), rect.bottom());
            gradient.setColorAt(0, Qt::white);
            gradient.setColorAt(0.618, Qt::lightGray);
            gradient.setColorAt(1, Qt::white);
            painter.setBrush(gradient);
            painter.setPen(Qt::gray);
            painter.drawRect(rect);
            painter.setPen(Qt::black);
            painter.drawText(rect, Qt::AlignCenter, input);

            painter.restore();

            // line number
            rect = QRect(10 + 225 * j + 60, 20 + 17 * i, 105, 17);

            if (i == 0)
            {
                painter.save();

                QLinearGradient gradient(rect.left(), rect.top(), rect.right(), rect.bottom());
                gradient.setColorAt(0, Qt::white);
                gradient.setColorAt(0.618, Qt::lightGray);
                gradient.setColorAt(1, Qt::white);
                painter.setBrush(gradient);
                painter.setPen(Qt::gray);
                painter.drawRect(rect);
                painter.setPen(Qt::black);
                painter.drawText(rect, Qt::AlignCenter, lineNumber);

                painter.restore();
            }
            else
            {
                painter.drawRect(rect);
                painter.drawText(rect, Qt::AlignCenter, lineNumber);
            }

            // state
            rect = QRect(10 + 225 * j + 60 + 105, 20 + 17 * i, 60, 17);

            if (0 == i)
            {
                painter.save();

                QLinearGradient gradient(rect.left(), rect.top(), rect.right(), rect.bottom());
                gradient.setColorAt(0, Qt::white);
                gradient.setColorAt(0.618, Qt::lightGray);
                gradient.setColorAt(1, Qt::white);
                painter.setBrush(gradient);
                painter.setPen(Qt::gray);
                painter.drawRect(rect);
                painter.setPen(Qt::black);
                painter.drawText(rect, Qt::AlignCenter, state);

                painter.restore();
            }
            else
            {
                if (i < 7)
                {
                    painter.save();
                    painter.setPen(Qt::gray);
                    painter.setBrush(Qt::lightGray);
                    painter.drawRect(rect);
                    painter.setPen(Qt::black);
                    painter.drawText(rect, Qt::AlignCenter, "A");
                    painter.restore();
                }
                else if ( i < 10)
                {
                    painter.save();
                    painter.setPen(Qt::gray);
                    painter.setBrush(Qt::green);
                    painter.drawRect(rect);
                    painter.setPen(Qt::black);
                    painter.drawText(rect, Qt::AlignCenter, "B");
                    painter.restore();
                }
                else if (i < 20)
                {
                    painter.save();
                    painter.setPen(Qt::gray);
                    painter.setBrush(Qt::green);
                    painter.drawRect(rect);
                    painter.setPen(Qt::black);
                    painter.drawText(rect, Qt::AlignCenter, "A");
                    painter.restore();
                }
                else
                {
                    painter.save();
                    painter.setPen(Qt::gray);
                    painter.setBrush(Qt::black);
                    painter.drawRect(rect);
                    painter.setPen(Qt::black);
                    painter.drawText(rect, Qt::AlignCenter, "");
                    painter.restore();
                }
            }
        }
    }
}

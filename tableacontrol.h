#ifndef TABLEACONTROL_H
#define TABLEACONTROL_H

#include <QWidget>

namespace Ui {
    class TableAControl;
}

class QLabel;

class TableAControl : public QWidget
{
    Q_OBJECT

public:
    explicit TableAControl(QWidget *parent = 0);
    ~TableAControl();
    void fillLine(int line, const QList<QString> &contents);

private:
    Ui::TableAControl *ui;
    QList<QLabel *> line1, line2, line3, line4, line5,
                    line6, line7, line8, line9, line10, line11;
    void fill(QList<QLabel *> &line, const QList<QString> &content);
};

#endif // TABLEACONTROL_H

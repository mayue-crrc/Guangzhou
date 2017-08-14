#ifndef TABLECONTROL_H
#define TABLECONTROL_H

#include <QWidget>

namespace Ui {
    class TableControl;
}

class QLabel;

class TableControl : public QWidget
{
    Q_OBJECT

public:
    explicit TableControl(QWidget *parent = 0);
    ~TableControl();
    void fillTitle(const QList<QString> &titles);
    void fillLine(int line, const QList<QString> &contents);

private:
    Ui::TableControl *ui;
    QList<QLabel *> line1, line2, line3, line4, line5,
                    line6, line7, line8, line9, line10, line11;
    void fill(QList<QLabel *> &line, const QList<QString> &content);
};

#endif // TABLECONTROL_H

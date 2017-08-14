#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QWidget>

namespace Ui {
    class MessageBox;
}

class MessageBox : public QWidget
{
    Q_OBJECT

public:
    explicit MessageBox(QWidget *parent = 0);
    ~MessageBox();
    void setMessage(QString message);

private:
    Ui::MessageBox *ui;

private slots:
    void on_btnConfirm_clicked();
};

#endif // MESSAGEBOX_H

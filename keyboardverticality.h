#ifndef KEYBOARDVERTICALITY_H
#define KEYBOARDVERTICALITY_H

#include <QWidget>

namespace Ui {
    class KeyboardVerticality;
}

class KeyboardVerticality : public QWidget
{
    Q_OBJECT

public:
    explicit KeyboardVerticality(QWidget *parent = 0);
    ~KeyboardVerticality();
    void setConfirmState(bool lock);
    void setBackState(bool lock);

private:
    Ui::KeyboardVerticality *ui;

public slots:
    void myKeyPressEvent();
signals:
    void myKeyPress(QString key);
};

#endif // KEYBOARDVERTICALITY_H

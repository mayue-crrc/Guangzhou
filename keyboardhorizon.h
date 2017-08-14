#ifndef KEYBOARDHORIZON_H
#define KEYBOARDHORIZON_H

#include <QWidget>

namespace Ui {
    class KeyboardHorizon;
}

class KeyboardHorizon : public QWidget
{
    Q_OBJECT

public:
    explicit KeyboardHorizon(QWidget *parent = 0);
    ~KeyboardHorizon();
    void setConfirmState(bool lock);
    void setBackState(bool lock);
    void hideButtonConfirm();
    void setButtonConfirmState(bool state);

private:
    Ui::KeyboardHorizon *ui;

public slots:
    void myKeyPressEvent();
signals:
    void myKeyPress(QString key);
};

#endif // KEYBOARDHORIZON_H

#ifndef SETLIGHT_H
#define SETLIGHT_H

#include <QWidget>
#include "mybase.h"

class QPushButton;
class QLabel;

enum lightMode
{
    uManualMode = 0,
    uAutoMode
};

namespace Ui {
    class SetLight;
}

class SetLight : public MyBase
{
    Q_OBJECT

public:
    explicit SetLight(QWidget *parent = 0);
    ~SetLight();
    enum lightMode myLightMode;
    QList<QPushButton *> voiceButtons;
    QList<QLabel *> lightLabels;
    void showEvent(QShowEvent *);
    void setHmibackLight(int light);
    void setSound(int level);

private:
    Ui::SetLight *ui;
    void setLabelState(int i);

private slots:
    void setVoice();
    void setLightLevel();
};

#endif // SETLIGHT_H

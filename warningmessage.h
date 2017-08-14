#ifndef WARNINGMESSAGE_H
#define WARNINGMESSAGE_H

#include <QWidget>
#include <QString>

namespace Ui {
    class WarningMessage;
}

class WarningMessage : public QWidget
{
    Q_OBJECT

public:
    explicit WarningMessage(QWidget *parent = 0);
    ~WarningMessage();
    void setConfirmButtonState(bool state);
    void setMessage(QString message);

private:
    Ui::WarningMessage *ui;

private slots:
    void on_btnConfirm_clicked();
};

#endif // WARNINGMESSAGE_H

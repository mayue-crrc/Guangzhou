#ifndef DATARECORD_H
#define DATARECORD_H

#include "mybase.h"

namespace Ui {
    class DataRecord;
}

class DataRecord : public MyBase
{
    Q_OBJECT

public:
    explicit DataRecord(QWidget *parent = 0);
    ~DataRecord();
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::DataRecord *ui;

private slots:
    void on_btnBack_clicked();
    void on_btnRecordSet_clicked();
signals:

};

#endif // DATARECORD_H

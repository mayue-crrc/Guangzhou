#ifndef EDCUFAULTLIST_H
#define EDCUFAULTLIST_H

#include <QList>

class Database;

class EdcuFaultList
{
public:
    EdcuFaultList();
    void setSinkPort(QList<unsigned short int> &ports);
    void setSourcePort(QList<unsigned short int> &ports);
    void installDatabase(Database *database);
    void createList(bool edcu1Online, bool edcu2Online);

private:
    void copyPort(unsigned short int sink, unsigned short int source);
    unsigned short int hmiEdcu11, hmiEdcu12, hmiEdcu13;
    unsigned short int edcu11, edcu12, edcu13;
    unsigned short int edcu21, edcu22, edcu23;
    Database *database;
};

#endif // EDCUFAULTLIST_H

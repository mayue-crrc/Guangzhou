#ifndef ERMFAULTLIST_H
#define ERMFAULTLIST_H

#include <QList>

class Database;

class ErmFaultList
{
public:
    ErmFaultList();
    void installDatabase(Database *database);
    void createList(bool erm1Online, bool erm2Online);

private:
    void copyPort(unsigned short int sink, unsigned short int source);
    Database *database;
};

#endif // ERMFAULTLIST_H

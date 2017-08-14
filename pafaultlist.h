#ifndef PAFAULTLIST_H
#define PAFAULTLIST_H

class Database;

class PaFaultList
{
public:
    PaFaultList();
    void installDatabase(Database *database);
    void createList();

private:
    void copyPort(unsigned short int sink, unsigned short int source);
    Database *database;
};

#endif // PAFAULTLIST_H

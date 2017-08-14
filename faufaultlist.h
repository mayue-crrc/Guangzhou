#ifndef FAUFAULTLIST_H
#define FAUFAULTLIST_H

class Database;

class FauFaultList
{
public:
    FauFaultList();
    void installDatabase(Database *database);
    void createList();

private:
    void copyPort(unsigned short int sink, unsigned short int source);
    void copyCombinePort(unsigned short sink, unsigned short source1, unsigned short int source2);
    Database *database;
};

#endif // FAUFAULTLIST_H

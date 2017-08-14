#ifndef BCUFAULTLIST_H
#define BCUFAULTLIST_H

#include <QList>

class Database;

class BcuFaultList
{
public:
    BcuFaultList();
    void setSinkPort(QList<unsigned short int> &ports);
    void setSourcePort(QList<unsigned short int> &ports);
    void installDatabase(Database *database);
    void createList(bool edcu1Online, bool edcu2Online);

private:
    void copyPort(unsigned short int sink, unsigned short int source);
    unsigned short int hmiBcu0, hmiBcu1, hmiBcu2, hmiBcu3, hmiBcu4, hmiBcu5, hmiBcu6, hmiBcu7, hmiBcu8, hmiBcu9, hmiBcuA;
    unsigned short int bcu10, bcu11, bcu12, bcu13, bcu14, bcu15, bcu16, bcu17, bcu18, bcu19, bcu1A;
    unsigned short int bcu20, bcu21, bcu22, bcu23, bcu24, bcu25, bcu26, bcu27, bcu28, bcu29, bcu2A;
    Database *database;
};

#endif // BCUFAULTLIST_H

#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>


class DataBase
{
public:
    DataBase();
    void DataBase_init();
    void modifyData(QString name,int data);
};

#endif // DATABASE_H

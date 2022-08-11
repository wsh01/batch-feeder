#include "database.h"
#include <QStringList>

DataBase::DataBase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");  //创建数据库链接句柄
    db.setDatabaseName("my.db");//设置数据库名称
    if(!db.open())//打开数据库
    {
        qDebug()<<db.lastError().text();//输出错误信息
    }
}

void DataBase::DataBase_init()
{
    QSqlQuery query;//自动关联到默认连接名的数据库
    //创建自动设置表格
    if(!query.exec("create table if not exists auto_set(id integer primary key autoincrement,"
                   "name varchar(256) unique,data int)"))//创建表格语句
    {
        qDebug()<<query.lastError().text();  //输出错误信息
    }


    /*向自动设置表中初始化数据，先判断数据表是否为空，避免重复插入。因为表中name是unique的，重复插入会报错，
     * 所以判断条件为尝试插入一条数据，如果成功，则意味着表为空，可以继续初始化数据。若失败则表已经初始化过。*/
    if(query.exec("insert into auto_set values(0,'lineEdit_1_1', 0)"))
    {
        QStringList names;
        names<<"lineEdit_1_2"<<"lineEdit_1_3"<<"lineEdit_1_4"<<"lineEdit_1_5"<<"lineEdit_2_1"<<"lineEdit_2_2"
            <<"lineEdit_2_3"<<"lineEdit_2_4"<<"lineEdit_2_5"<<"lineEdit_3_1"<<"lineEdit_3_2"<<"lineEdit_3_3"<<"lineEdit_3_4"
           <<"lineEdit_3_5"<<"lineEdit_4_1"<<"lineEdit_4_2"<<"lineEdit_4_3"<<"lineEdit_4_4"<<"lineEdit_4_5"<<"lineEdit_5_1"
          <<"lineEdit_5_2"<<"lineEdit_6_1";

        query.prepare("insert into auto_set (name, data) "
                      "values (:name, :data)");
        //为每一列标题添加绑定值
        foreach (QString name, names)       //从names表里获取每个名字
        {
            query.bindValue(":name", name); //向绑定值里加入名字
            query.bindValue(":data",0);     //数据
            if(!query.exec())
            {
                qDebug()<<query.lastError().text();
            }//加入库中
        }
    }

    //创建手动设置表格
    if(!query.exec("create table if not exists maunal_set(id integer primary key autoincrement,"
                   "name varchar(256) unique,data int)"))//创建表格语句
    {
        qDebug()<<query.lastError().text();  //输出错误信息
    }
    //初始化手动设置表，方式同上
    if(query.exec("insert into maunal_set values(0,'lineEdit_1_1', 0)"))
    {
        QStringList names;
        names<<"lineEdit_1_2"<<"lineEdit_2_1"<<"lineEdit_2_2" <<"lineEdit_3_1";

        query.prepare("insert into maunal_set (name, data) "
                      "values (:name, :data)");
        //为每一列标题添加绑定值
        foreach (QString name, names)       //从names表里获取每个名字
        {
            query.bindValue(":name", name); //向绑定值里加入名字
            query.bindValue(":data",0);     //数据
            if(!query.exec())
            {
                qDebug()<<query.lastError().text();
            }//加入库中
        }
    }
    //创建参数设置表格
    if(!query.exec("create table if not exists parameter_set(id integer primary key autoincrement,"
                   "name varchar(256) unique,data int)"))//创建表格语句
    {
        qDebug()<<query.lastError().text();  //输出错误信息
    }
    //初始化手动设置表，方式同上
    if(query.exec("insert into parameter_set values(0,'lineEdit_1', 0)"))
    {
        QStringList names;
        names<<"lineEdit_2"<<"lineEdit_3"<<"lineEdit_4"<<"lineEdit_5"<<"lineEdit_6"<<"lineEdit_7"
            <<"lineEdit_8"<<"lineEdit_9"<<"lineEdit_10";

        query.prepare("insert into parameter_set (name, data) "
                      "values (:name, :data)");
        //为每一列标题添加绑定值
        foreach (QString name, names)       //从names表里获取每个名字
        {
            query.bindValue(":name", name); //向绑定值里加入名字
            query.bindValue(":data",0);     //数据
            if(!query.exec())
            {
                qDebug()<<query.lastError().text();
            }//加入库中
        }
    }
}

void DataBase::modifyData(QString name, int data) //更新参数数据
{
    QSqlQuery sqlQuery;
    sqlQuery.prepare("UPDATE student SET data=?, WHERE name=?");
    sqlQuery.addBindValue(data);
    sqlQuery.addBindValue(name);
    if(!sqlQuery.exec())
    {
        qDebug() << sqlQuery.lastError();
    }
    else
    {
        qDebug() << "updated data success!";
    }
}



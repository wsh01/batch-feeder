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

void DataBase::lineedit_data_init()//初始化所有QLineEdit的数据
{
//    QSqlQuery query;//自动关联到默认连接名的数据库
//    //创建自动设置表格
//    if(!query.exec("create table if not exists lineedit_data(id integer primary key autoincrement,"
//                   "name varchar(256) unique,data int)"))//创建表格语句
//    {
//        qDebug()<<query.lastError().text();  //输出错误信息
//    }


//    /*初始化所有QLineEdit的数据，先判断数据表是否为空，避免重复插入。因为表中name是unique的，重复插入会报错，
//     * 所以判断条件为尝试插入一条数据，如果成功，则意味着表为空，可以继续初始化数据。若失败则表已经初始化过。*/
//    if(query.exec("insert into lineedit_data values(0,'auto_lineEdit_1_1', 0)"))
//    {
//        QStringList names;
//        names<<"auto_lineEdit_1_2"<<"auto_lineEdit_1_3"<<"auto_lineEdit_1_4"<<"auto_lineEdit_1_5"<<"auto_lineEdit_2_1"
//            <<"auto_lineEdit_2_2"<<"auto_lineEdit_2_3"<<"auto_lineEdit_2_4"<<"auto_lineEdit_2_5"<<"auto_lineEdit_3_1"
//           <<"auto_lineEdit_3_2"<<"auto_lineEdit_3_3"<<"auto_lineEdit_3_4" <<"auto_lineEdit_3_5"<<"auto_lineEdit_4_1"
//          <<"auto_lineEdit_4_2"<<"auto_lineEdit_4_3"<<"auto_lineEdit_4_4"<<"auto_lineEdit_4_5"<<"auto_lineEdit_5_1"
//          <<"auto_lineEdit_5_2"<<"auto_lineEdit_6_1"
//         <<"maunal_lineEdit_1_1"<<"maunal_lineEdit_1_2"<<"maunal_lineEdit_2_1" <<"maunal_lineEdit_2_2" <<"maunal_lineEdit_3_1"
//           <<"para_lineEdit_1_1" <<"para_lineEdit_1_2" <<"para_lineEdit_2_1" <<"para_lineEdit_2_2" <<"para_lineEdit_3"
//             <<"para_lineEdit_4"<<"para_lineEdit_5"<<"para_lineEdit_6"<<"para_lineEdit_7"<<"para_lineEdit_8";

//        query.prepare("insert into lineedit_data (name, data) "
//                      "values (:name, :data)");
//        //为每一列标题添加绑定值
//        foreach (QString name, names)       //从names表里获取每个名字
//        {
//            query.bindValue(":name", name); //向绑定值里加入名字
//            query.bindValue(":data",0);     //数据
//            if(!query.exec())
//            {
//                qDebug()<<query.lastError().text();
//            }//加入库中
//        }
//    }
}




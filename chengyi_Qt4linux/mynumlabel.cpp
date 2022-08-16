#include "mynumlabel.h"

myNumLabel::myNumLabel(QWidget *parent)//继承Qlabel
            : QLabel(parent)
{

}

void myNumLabel::data_show()//塘号显示
{
    QString sql = QString("select * from lineedit_data where name='para_lineEdit_1_1'");
    //执行sql语句
    QSqlQuery query;
    if(!query.exec(sql))
    {
        qDebug()<<query.lastError().text();
        return;
    }
    //获取查询的数据
    if(query.next())//指向第一个数据
    {
        //查到记录
        qDebug()<<"//Label查到记录";
        QSqlRecord record = query.record();//一行数据是一条记录b
        this->setText(record.value("data").toString());
    }
    else
    {
        //未查到记录
        qDebug()<<"//未查到记录";
    }
}


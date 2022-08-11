#include "mylineedit.h"
#include <QSqlRecord>
myLineEdit::myLineEdit(QWidget *parent) :
    QLineEdit(parent)
{
 numkeyboard = new NumKeyboard(this);
}

//重写mousePressEvent事件,检测事件类型是不是点击了鼠标左键
void myLineEdit::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
        {
            numkeyboard->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
            numkeyboard->setStyleSheet("border:2px solid white;");
            numkeyboard->setText(this->text());  //当前的文本框的内容，this->指向的是SoftKeyLineEdit
            numkeyboard->exec();
            if(numkeyboard->valid)
            {
                this->setText(numkeyboard->getText());  //此处的setText是继承QLineEdit的，numkeyboard->setTex是自定义的，目的是获取当前的文本
            }
    }
}

void myLineEdit::updata()
{
    QString name = this->objectName();
    qDebug()<<name;
    //打包查询的sql语句
    QString sql = QString("select * from auto_set where name='%2'")
            .arg(name);
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
        qDebug()<<"//查到记录";
        QSqlRecord record = query.record();//一行数据是一条记录
        qDebug()<<"数据为："<<record.value("data").toString() ;
        this->setText(record.value("data").toString());
    }
    else
    {
        //未查到记录
        qDebug()<<"//未查到记录";
    }
}

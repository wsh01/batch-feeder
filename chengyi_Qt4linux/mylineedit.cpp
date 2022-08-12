#include "mylineedit.h"
#include <QSqlRecord>


myLineEdit::myLineEdit(QWidget *parent) :
    QLineEdit(parent)
{
    numkeyboard = new NumKeyboard(this);
    connect(this,SIGNAL(textChanged(QString)),this,SLOT(data_update()));//连接信号槽
    //原本想着data_show()也这样链接的，奈何没有合适的信号，而且 this->objectName();不知道为什么在构造函数中不起作用，只能在对应页面中显式调用了
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

void myLineEdit::data_update()//将lineedit修改后的数值更新至数据库
{
    QString name = this->objectName();
    QString ld_data=this->text();
    QString sql = QString("update lineedit_data set data='%1' where name='%2'")
            .arg(ld_data).arg(name);//sql命令
    QSqlQuery query;
    if(!query.exec(sql))
    {
        qDebug()<<query.lastError().text();
          qDebug()<<"update fail";
    }
    else
    {
        qDebug()<<"update success";
    }

}

void myLineEdit::data_show()//将数据库中的数值查询显示到lineedit
{
    QString name = this->objectName();
   // qDebug()<<name;
    //打包查询的sql语句
    QString sql = QString("select * from lineedit_data where name='%2'")
            .arg(name);//sql命令
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
 //       qDebug()<<"数据为："<<record.value("data").toString() ;
        this->setText(record.value("data").toString());
    }
    else
    {
        //未查到记录
        qDebug()<<"//未查到记录";
    }
}

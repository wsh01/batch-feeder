#include "datatimeshow.h"
#include <QDateTime>
#include <QString>

DataTimeShow::DataTimeShow(QWidget *parent):QLabel(parent)
{
    timer_calendar = new QTimer(this);//创建日期显示定时器
    connect(timer_calendar,SIGNAL(timeout()),this,SLOT(showDateTime()));//连接日期时间槽函数，每秒更新一次
    timer_calendar->start(1000);//每一秒溢出一次进入槽函数
}

void DataTimeShow::showDateTime()
{

    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    this->setText(str);
}

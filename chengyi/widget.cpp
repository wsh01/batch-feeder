#include "widget.h"
#include "ui_widget.h"
#include <QDateTime>
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer_calendar = new QTimer(this);//创建日期显示定时器
    connect(timer_calendar,SIGNAL(timeout()),this,SLOT(showDateTime()));//连接日期时间槽函数，每秒更新一次
    timer_calendar->start(1000);//每一秒溢出一次进入槽函数


    fTimer=new QTimer(this);  //创建辅助计时器定时器
    fTimer->stop();           //先默认关闭
    fTimer->setInterval(1000);//设置定时周期,单位：毫秒
    connect(fTimer,SIGNAL(timeout()),this,SLOT(showTime()));//连接运行时间槽函数，每秒更新一次
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showDateTime()  //显示当前日期时间
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_date->setText(str);
}

void Widget::showTime() //显示计时时间
{
    int tmMsec=fTimeCounter.elapsed();//start()后的毫秒数
    int m_sec = tmMsec/1000; //整秒
    int sec = m_sec%60;
    int min = m_sec/60;  //分钟
    QString str=QString::asprintf("%d 分 %d 秒",min,sec);   //格式
    ui->label_time_2->setText(str);   //显示
}

void Widget::on_btn_Start_clicked()//手动启动按钮槽函数
{
    fTimer->start(1000);      //开始计时，即开始刷新计数器显示,每秒一次
    fTimeCounter.start(); //开始计数
    ui->btn_Start->setEnabled(false); //更新按键状态
    ui->btn_Stop->setEnabled(true);
}

void Widget::on_btn_Stop_clicked()//手动停止按钮槽函数
{
    fTimer->stop();       //停止计时，即停止刷新计数器显示

    ui->btn_Start->setEnabled(true); //更新按键状态
    ui->btn_Stop->setEnabled(false);
}

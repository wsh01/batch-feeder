#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include "form_meun.h"
#include "form_history.h"
#include "form_maunal.h"
#include "form_auto.h"
#include "numkeyboard.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    ui->setupUi(this);

    Time_init();

    this->setFixedSize(800,480);//固定窗口大小
    this->setWindowFlags(Qt::FramelessWindowHint);//去除窗体边框


}

Widget::~Widget()
{
    delete ui;
}

void Widget::Time_init()  //投料时间显示初始化
{
    fTimer = new QTimer(this);  //创建辅助计时器定时器
    fTimer->stop();           //先默认关闭
//    fTimer->setInterval(1000);//设置定时周期,单位：毫秒
    connect(fTimer,SIGNAL(timeout()),this,SLOT(showTime()));//连接运行时间槽函数，每秒更新一次
}


void Widget::showTime() //显示投料计时时间
{
    int tmMsec=fTimeCounter.elapsed();//start()后的毫秒数
    int m_sec = tmMsec/1000; //整秒
    int sec = m_sec%60;
    int min = m_sec/60;  //分钟
//    QString str=QString::asprintf("%d 分 %d 秒",min,sec);   //格式
    QString str= QString("%1:%2").arg(min).arg(sec);
    ui->label_time->setText(str);   //显示
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

void Widget::on_btn_Meun_clicked()  //菜单页面显示
{
    Form_Meun *form_meun = new Form_Meun(this);
    form_meun->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_meun->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_meun->setWindowOpacity(1.0);//透明度
    form_meun->show();//显示
}

void Widget::on_btn_History_clicked()   //历史记录页面显示
{
    Form_History *form_history = new Form_History(this);
    form_history->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_history->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_history->setWindowOpacity(1.0);//透明度
    form_history->show();//显示
}

void Widget::on_btn_ManualSet_clicked()    //手动设置页面显示
{
    Form_Maunal *form_maunal = new Form_Maunal(this);
    form_maunal->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_maunal->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_maunal->setWindowOpacity(1.0);//透明度
    form_maunal->show();//显示
}

void Widget::on_btn_AutoSet_clicked()  //自动设置页面显示
{
    Form_Auto  *form_auto = new Form_Auto(this);
    form_auto->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_auto->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_auto->setWindowOpacity(1.0);//透明度
    form_auto->show();//显示
}





void Widget::on_btn_Add_clicked()  //加料按钮槽函数
{
    static int i=0;
    if(i%2)
    {
    ui->label_End->setStyleSheet("QLabel{color:rgb(255,255,255);}");
    ui->label_Adding->setStyleSheet("QLabel{color:rgb(0,0,0);}");
    ui->btn_Add->setStyleSheet("QPushButton{ background-color: rgb(0, 255, 0); }");
    ui->btn_Add->setText("加料");
    }
    else
    {
    ui->label_End->setStyleSheet("QLabel{color:rgb(0,0,0);}");
    ui->label_Adding->setStyleSheet("QLabel{color:rgb(255,255,0);}");
    ui->btn_Add->setStyleSheet("QPushButton{ background-color: rgb(255, 255, 0); }");
    ui->btn_Add->setText("加料中");
    }
     i++;
}

void Widget::on_btn_Auto_clicked()  //手/自动按钮槽函数
{
    static int i=0;
    if(i%2)
    {
    ui->label_Auto->setStyleSheet("QLabel{color:rgb(0,255,0);}");
    ui->label_Maunal->setStyleSheet("QLabel{color:rgb(0,0,0);}");
    ui->btn_Auto->setStyleSheet("QPushButton{ background-color: rgb(0, 255, 0); }");
    }
    else
    {
    ui->label_Auto->setStyleSheet("QLabel{color:rgb(0,0,0);}");
    ui->label_Maunal->setStyleSheet("QLabel{color:rgb(255,255,0);}");
    ui->btn_Auto->setStyleSheet("QPushButton{ background-color: rgb(255, 255, 0); }");
    }
    i++;
}

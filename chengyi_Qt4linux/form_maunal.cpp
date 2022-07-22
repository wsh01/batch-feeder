#include "form_maunal.h"
#include "ui_form_maunal.h"
#include <QDateTime>

Form_Maunal::Form_Maunal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Maunal)
{
    ui->setupUi(this);

    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    timer_calendar = new QTimer(this);//创建日期显示定时器
    connect(timer_calendar,SIGNAL(timeout()),this,SLOT(showDateTime()));//连接日期时间槽函数，每秒更新一次
    timer_calendar->start(1000);//每一秒溢出一次进入槽函数

}

Form_Maunal::~Form_Maunal()
{
    delete ui;
}

void Form_Maunal::showDateTime()  //显示当前日期时间
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_Data->setText(str);
}

#include "form_auto.h"
#include "ui_form_auto.h"
#include <QString>
#include <QDateTime>
#include "numkeyboard.h"

Form_Auto::Form_Auto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Auto)
{
    ui->setupUi(this);

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小

    timer_calendar = new QTimer(this);//创建日期显示定时器
    connect(timer_calendar,SIGNAL(timeout()),this,SLOT(showDateTime()));//连接日期时间槽函数，每秒更新一次
    timer_calendar->start(1000);//每一秒溢出一次进入槽函数

}

Form_Auto::~Form_Auto()
{
    delete ui;
}

void Form_Auto::showDateTime()  //显示当前日期时间
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_Date->setText(str);
}

void Form_Auto::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    NumKeyboard *numkeyboard = new NumKeyboard(this);
    numkeyboard->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    numkeyboard->setText(ui->lineEdit->text());  //当前的文本框的内容
    numkeyboard->exec();
    if(numkeyboard->valid)
    {
       ui->lineEdit->setText(numkeyboard->getText());  //获取当前的文本
    }
}

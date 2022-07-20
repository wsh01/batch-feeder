#include "form_history2.h"
#include "ui_form_history2.h"

Form_history2::Form_history2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_history2)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
//    bgpal.setColor (QPalette::Foreground, QColor (0,255,255,255));    //字体颜色
     setPalette (bgpal);


    this->setWindowFlags(Qt::FramelessWindowHint);//去除窗体边框
}

Form_history2::~Form_history2()
{
    delete ui;
}

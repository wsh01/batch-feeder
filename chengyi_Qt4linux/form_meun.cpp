#include "form_meun.h"
#include "ui_form_meun.h"

Form_Meun::Form_Meun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Meun)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
//    bgpal.setColor (QPalette::Foreground, QColor (0,255,255,255));    //字体颜色
     setPalette (bgpal);


    this->setWindowFlags(Qt::FramelessWindowHint);//去除窗体边框

}

Form_Meun::~Form_Meun()
{
    delete ui;
}

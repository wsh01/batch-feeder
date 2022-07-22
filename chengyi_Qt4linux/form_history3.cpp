#include "form_history3.h"
#include "ui_form_history3.h"

Form_history3::Form_history3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_history3)
{
    ui->setupUi(this);

    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
     setPalette (bgpal);

}

Form_history3::~Form_history3()
{
    delete ui;
}

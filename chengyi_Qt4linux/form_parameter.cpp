#include "form_parameter.h"
#include "ui_form_parameter.h"

Form_parameter::Form_parameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_parameter)
{
    ui->setupUi(this);
    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);
}

Form_parameter::~Form_parameter()
{
    delete ui;
}

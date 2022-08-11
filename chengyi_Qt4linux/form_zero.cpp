#include "form_zero.h"
#include "ui_form_zero.h"

Form_zero::Form_zero(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_zero)
{
    ui->setupUi(this);

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0,0,0));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小
}

Form_zero::~Form_zero()
{
    delete ui;
}

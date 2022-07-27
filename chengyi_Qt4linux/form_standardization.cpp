#include "form_standardization.h"
#include "ui_form_standardization.h"

Form_standardization::Form_standardization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_standardization)
{
    ui->setupUi(this);
    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);
}

Form_standardization::~Form_standardization()
{
    delete ui;
}

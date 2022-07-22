#include "form_history2.h"
#include "ui_form_history2.h"

Form_history2::Form_history2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_history2)
{
    ui->setupUi(this);
    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);
}

Form_history2::~Form_history2()
{
    delete ui;
}

#include "form_malfunction.h"
#include "ui_form_malfunction.h"

Form_malfunction::Form_malfunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_malfunction)
{
    ui->setupUi(this);


    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小

}

Form_malfunction::~Form_malfunction()
{
    delete ui;
}

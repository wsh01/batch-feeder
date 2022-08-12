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
    data_show();
}

Form_parameter::~Form_parameter()
{
    delete ui;
}
void Form_parameter::data_show()
{
    ui->para_lineEdit_1_1->data_show();
    ui->para_lineEdit_1_2->data_show();
    ui->para_lineEdit_2_1->data_show();
    ui->para_lineEdit_2_2->data_show();
    ui->para_lineEdit_3->data_show();
    ui->para_lineEdit_4->data_show();
    ui->para_lineEdit_5->data_show();
    ui->para_lineEdit_6->data_show();
    ui->para_lineEdit_7->data_show();
    ui->para_lineEdit_8->data_show();
}

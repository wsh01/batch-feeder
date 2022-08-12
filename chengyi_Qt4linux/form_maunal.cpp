#include "form_maunal.h"
#include "ui_form_maunal.h"

Form_Maunal::Form_Maunal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Maunal)
{
    ui->setupUi(this);

    this->setFixedSize(800,480);//固定窗口大小

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);
    data_show();
}

Form_Maunal::~Form_Maunal()
{
    delete ui;
}

void Form_Maunal::data_show()
{
    ui->maunal_lineEdit_1_1->data_show();
    ui->maunal_lineEdit_1_2->data_show();
    ui->maunal_lineEdit_2_1->data_show();
    ui->maunal_lineEdit_2_2->data_show();
    ui->maunal_lineEdit_3_1->data_show();
}

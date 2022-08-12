#include "form_auto.h"
#include "ui_form_auto.h"
#include <QString>
#include "numkeyboard.h"
#include "mylineedit.h"

Form_Auto::Form_Auto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Auto)
{
    ui->setupUi(this);

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小
    data_show();
}

Form_Auto::~Form_Auto()
{
    delete ui;
}

void Form_Auto::data_show()
{
    ui->auto_lineEdit_1_1->data_show();
    ui->auto_lineEdit_1_2->data_show();
    ui->auto_lineEdit_1_3->data_show();
    ui->auto_lineEdit_1_4->data_show();
    ui->auto_lineEdit_1_5->data_show();
    ui->auto_lineEdit_2_1->data_show();
    ui->auto_lineEdit_2_2->data_show();
    ui->auto_lineEdit_2_3->data_show();
    ui->auto_lineEdit_2_4->data_show();
    ui->auto_lineEdit_2_5->data_show();
    ui->auto_lineEdit_3_1->data_show();
    ui->auto_lineEdit_3_2->data_show();
    ui->auto_lineEdit_3_3->data_show();
    ui->auto_lineEdit_3_4->data_show();
    ui->auto_lineEdit_3_5->data_show();
    ui->auto_lineEdit_4_1->data_show();
    ui->auto_lineEdit_4_2->data_show();
    ui->auto_lineEdit_4_3->data_show();
    ui->auto_lineEdit_4_4->data_show();
    ui->auto_lineEdit_4_5->data_show();
    ui->auto_lineEdit_5_1->data_show();
    ui->auto_lineEdit_5_2->data_show();
    ui->auto_lineEdit_6_1->data_show();
}


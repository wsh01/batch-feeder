#include "form_maunaltext.h"
#include "ui_form_maunaltext.h"

Form_maunalText::Form_maunalText(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_maunalText)
{
    ui->setupUi(this);

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小
}

Form_maunalText::~Form_maunalText()
{
    delete ui;
}

void Form_maunalText::on_btn_fan_pressed()
{
    ui->label_fan->setStyleSheet("QLabel{"
                                 "color:rgb(255,255, 255);"
                                     "}");
}

void Form_maunalText::on_btn_fan_released()
{
    ui->label_fan->setStyleSheet("QLabel{"
                                 "color:rgb(0,255, 255);"
                                     "}");
}

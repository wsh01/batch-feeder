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

}

Form_Maunal::~Form_Maunal()
{
    delete ui;
}


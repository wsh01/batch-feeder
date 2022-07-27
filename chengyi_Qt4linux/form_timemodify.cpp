#include "form_timemodify.h"
#include "ui_form_timemodify.h"

Form_timeModify::Form_timeModify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_timeModify)
{
    ui->setupUi(this);

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小
}


Form_timeModify::~Form_timeModify()
{
    delete ui;
}

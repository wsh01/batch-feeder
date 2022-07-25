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

}

Form_Auto::~Form_Auto()
{
    delete ui;
}

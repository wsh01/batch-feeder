#include "form_history.h"
#include "ui_form_history.h"
#include "form_history2.h"
#include "form_history3.h"

Form_History::Form_History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_History)
{
    ui->setupUi(this);

    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));      //背景颜色
    setPalette (bgpal);

    this->setFixedSize(800,480);//固定窗口大小
}

Form_History::~Form_History()
{
    delete ui;
}

void Form_History::on_btn_History2_clicked()
{
    Form_history2  *form_history2 = new Form_history2(this);
    form_history2->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_history2->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_history2->setWindowOpacity(1.0);//透明度
    form_history2->show();//显示
}


void Form_History::on_btn_History3_clicked()
{
    Form_history3  *form_history3 = new Form_history3(this);
    form_history3->setAttribute(Qt::WA_DeleteOnClose);//关闭时自动删除
    form_history3->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//去除窗口标题栏
    form_history3->setWindowOpacity(1.0);//透明度
    form_history3->show();//显示
}

#include "mylineedit.h"

myLineEdit::myLineEdit(QWidget *parent) :
    QLineEdit(parent)
{
 numkeyboard = new NumKeyboard(this);
}

//重写mousePressEvent事件,检测事件类型是不是点击了鼠标左键
void myLineEdit::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
        {
            numkeyboard->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
            numkeyboard->setStyleSheet("border:2px solid white;");
            numkeyboard->setText(this->text());  //当前的文本框的内容，this->指向的是SoftKeyLineEdit
            numkeyboard->exec();
            if(numkeyboard->valid)
            {
                this->setText(numkeyboard->getText());  //此处的setText是继承QLineEdit的，numkeyboard->setTex是自定义的，目的是获取当前的文本
            }
        }
}

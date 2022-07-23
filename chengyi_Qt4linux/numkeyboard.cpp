#include "numkeyboard.h"
#include <QDebug>
#include <QGridLayout>
#include <QButtonGroup>

QString st_letter[11]={"0","1","2","3","4","5","6","7","8","9","."};

NumKeyboard::NumKeyboard(QWidget *parent) :
    QDialog(parent)
{
    QGridLayout *layout = new QGridLayout();

    QButtonGroup *button_group = new QButtonGroup(this);
    okButton = new QPushButton(this);
    okButton->setText("确定");
    button_group->addButton(okButton,15);
    layout->addWidget(okButton,4,3,1,2);

    backspaceButton = new QPushButton(this);
    backspaceButton->setText("<<");
    button_group->addButton(backspaceButton,12);
    layout->addWidget(backspaceButton,2,3,1,2);

    num6Button = new QPushButton(this);
    num6Button->setText("6");
    button_group->addButton(num6Button,6);
    layout->addWidget(num6Button,2,2,1,1);

    num4Button = new QPushButton(this);
    num4Button->setText("4");
    button_group->addButton(num4Button,4);
    layout->addWidget(num4Button,2,0,1,1);

    leftButton = new QPushButton(this);
    leftButton->setText("<-");
    button_group->addButton(leftButton,13);
    layout->addWidget(leftButton,3,3,1,1);

    num1Button = new QPushButton(this);
    num1Button->setText("1");
    button_group->addButton(num1Button,1);
    layout->addWidget(num1Button,1,0,1,1);

    cancelButton = new QPushButton(this);
    cancelButton->setText("取消");
    button_group->addButton(cancelButton,11);
    layout->addWidget(cancelButton,1,3,1,2);

    rightButton = new QPushButton(this);
    rightButton->setText("->");
    button_group->addButton(rightButton,14);
    layout->addWidget(rightButton,3,4,1,1);


    num0Button = new QPushButton(this);
    num0Button->setText("0");
    button_group->addButton(num0Button,0);
    layout->addWidget(num0Button,4,0,1,2);

    num5Button = new QPushButton(this);
    num5Button->setText("5");
    num9Button = new QPushButton(this);
    num9Button->setText("9");
    button_group->addButton(num9Button,9);
    layout->addWidget(num9Button,3,2,1,1);
    num8Button = new QPushButton(this);
    num8Button->setText("8");
    button_group->addButton(num8Button,8);
    layout->addWidget(num8Button,3,1,1,1);

    num2Button = new QPushButton(this);
    num2Button->setText("2");
    button_group->addButton(num2Button,2);
    layout->addWidget(num2Button,1,1,1,1);

    num7Button = new QPushButton(this);
    num7Button->setText("7");
    button_group->addButton(num7Button,7);
    layout->addWidget(num7Button,3,0,1,1);

    dotButton = new QPushButton(this);
    dotButton->setText(".");
    button_group->addButton(dotButton,10);
    layout->addWidget(dotButton,4,2,1,1);

    num3Button = new QPushButton(this);
    num3Button->setText("3");
    button_group->addButton(num3Button,3);
    layout->addWidget(num3Button,1,2,1,1);
    button_group->addButton(num5Button,5);
    layout->addWidget(num5Button,2,1,1,1);

    lineEdit = new QLineEdit(this);
    lineEdit->setText(QString());
    layout->addWidget(lineEdit,0,0,1,5);

    //连接button_group的点击信号，和本对象的buttonClickResponse函数，传递参数为按钮号
    connect(button_group,SIGNAL(buttonClicked(int)),SLOT(buttonClickResponse(int)));
    QList<QPushButton*> btnList = this->findChildren<QPushButton*>();
    for(int i = 0; i < btnList.size(); i++)
    {
        QPushButton* btn = btnList.at(i);
        btn->setObjectName("keyboard");
    }

    setLayout(layout);
}
NumKeyboard::~NumKeyboard()
{

}
void NumKeyboard::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        break;
    default:
        break;
    }
}

bool NumKeyboard::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (obj == lineEdit)
        {
            if(keyEvent->key() >= 0x20 && keyEvent->key()<= 0x0ff)  //屏蔽所有按键输入
                return true;
            else
                return false;
        }
        else
        {
            return false;
        }
    }
    else
    {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
}
//***********************按键*****************************//
void NumKeyboard::buttonClickResponse(int gemfield)        //
{
    if( gemfield >=0 && gemfield <= 10)
    {
        int idx = lineEdit->cursorPosition();  //光标的位置索引

        //  字符串的存储有引用计数，当一个 QString 对象被复制为另一个 QString 对象时，它们实际上指向相同的存储空间，仅仅是增加一个引用计数
        strContent.insert(idx, st_letter[gemfield]);  //插入字符串str在给定的索引位置对这个字符串,并返回一个引用。 //数据存入strContent
        lineEdit->setText(strContent); //strContent中的内容显示在lineEdit
        lineEdit->setCursorPosition(idx+1); //设置光标的位置 ??不设置好像也可以使用设定光标的位置
        lineEdit->setFocus();  //存在光标

        qDebug()<<"strContent"<<strContent;
        qDebug()<<"idx"<<idx;
    }
    else if( gemfield == 13)//<-
    {
        int idx = lineEdit->cursorPosition();
        if(idx == 0)
        {
            lineEdit->setCursorPosition(idx);
            lineEdit->setFocus();
            return;
        }
        lineEdit->setCursorPosition(idx-1);
        lineEdit->setFocus();
    }
    else if( gemfield == 14)//->
    {
        int idx = lineEdit->cursorPosition();
        if(idx == strContent.length()) //返回此字符串的字符数
        {
            lineEdit->setCursorPosition(idx);
            lineEdit->setFocus();
            return;

        }
        lineEdit->setCursorPosition(idx+1);
        lineEdit->setFocus();
    }
    else if( gemfield == 12)//<<
    {
        int idx = lineEdit->cursorPosition();
        if(idx == 0)
        {
            lineEdit->setCursorPosition(idx);
            lineEdit->setFocus();
            return;
        }
        strContent.remove(idx-1,1);
        lineEdit->setText(strContent);
        lineEdit->setCursorPosition(idx-1);
        lineEdit->setFocus();
    }
    else if( gemfield == 11)//ESC
    {
        this->close();
        valid = false;
    }
    else if( gemfield == 15)//OK
    {
        this->close();
        valid = true;
    }
}

void NumKeyboard::setText(QString str)      //设置文本内容
{
    strContent = str;
    lineEdit->setText(strContent);
}

QString NumKeyboard::getText()              //获取内容
{
    return strContent;
}

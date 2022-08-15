#include "widget.h"
#include <QApplication>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//连接到my.db数据库文件，文件路径为项目编译运行后的build--Debug文件夹里，如有my.db文件则打开，没有则会新建一个
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");  //创建数据库链接句柄
    db.setDatabaseName("my.db");//设置数据库名称
    if(!db.open())//打开数据库
    {
        qDebug()<<db.lastError().text();//输出错误信息
    }

    Widget w;
    w.show();
//    QApplication::setOverrideCursor(Qt::BlankCursor);   //隐藏鼠标
    //设置中文字体
//      a.setFont(QFont("Microsoft Yahei", 9));

  //条件编译设置中文字体编码方式，彻底解决中文乱码问题
  #if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
  #if _MSC_VER
      QTextCodec *codec = QTextCodec::codecForName("gbk");
  #else
      QTextCodec *codec = QTextCodec::codecForName("utf-8");
  #endif
      QTextCodec::setCodecForLocale(codec);
      QTextCodec::setCodecForCStrings(codec);
      QTextCodec::setCodecForTr(codec);
  #else
      QTextCodec *codec = QTextCodec::codecForName("utf-8");
      QTextCodec::setCodecForLocale(codec);
  #endif

    return a.exec();
}



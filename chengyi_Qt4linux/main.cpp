#include "widget.h"
#include <QApplication>
#include <QTextCodec>
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataBase database;
    database.lineedit_data_init();

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



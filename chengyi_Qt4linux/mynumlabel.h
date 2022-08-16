#ifndef MYNUMLABEL_H
#define MYNUMLABEL_H
#include <QLabel>
#include <QPainter>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
class myNumLabel:public QLabel
{
    Q_OBJECT
public:
    myNumLabel(QWidget *parent);
    void data_show();
};

#endif // MYNUMLABEL_H

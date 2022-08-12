#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QLineEdit>
#include <QMouseEvent>
#include "numkeyboard.h"
#include <database.h>

class myLineEdit: public QLineEdit
{
    Q_OBJECT
public:
   myLineEdit();
   explicit myLineEdit(QWidget *parent = 0);
   void data_show();

protected:
    void mousePressEvent(QMouseEvent *e);

private:
    NumKeyboard *numkeyboard;

signals:

public slots:
    void data_update();
};

#endif // MYLINEEDIT_H

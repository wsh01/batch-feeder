#ifndef FORM_MEUN_H
#define FORM_MEUN_H

#include <QWidget>

namespace Ui {
class Form_Meun;
}

class Form_Meun : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Meun(QWidget *parent = 0);
    ~Form_Meun();

private:
    Ui::Form_Meun *ui;
};

#endif // FORM_MEUN_H

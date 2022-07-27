#ifndef FORM_MALFUNCTION_H
#define FORM_MALFUNCTION_H

#include <QWidget>

namespace Ui {
class Form_malfunction;
}

class Form_malfunction : public QWidget
{
    Q_OBJECT

public:
    explicit Form_malfunction(QWidget *parent = 0);
    ~Form_malfunction();

private:
    Ui::Form_malfunction *ui;
};

#endif // FORM_MALFUNCTION_H

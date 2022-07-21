#ifndef FORM_PARAMETER_H
#define FORM_PARAMETER_H

#include <QWidget>

namespace Ui {
class Form_parameter;
}

class Form_parameter : public QWidget
{
    Q_OBJECT

public:
    explicit Form_parameter(QWidget *parent = 0);
    ~Form_parameter();

private:
    Ui::Form_parameter *ui;
};

#endif // FORM_PARAMETER_H

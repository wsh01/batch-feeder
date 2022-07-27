#ifndef FORM_STANDARDIZATION_H
#define FORM_STANDARDIZATION_H

#include <QWidget>

namespace Ui {
class Form_standardization;
}

class Form_standardization : public QWidget
{
    Q_OBJECT

public:
    explicit Form_standardization(QWidget *parent = 0);
    ~Form_standardization();

private:
    Ui::Form_standardization *ui;
};

#endif // FORM_STANDARDIZATION_H

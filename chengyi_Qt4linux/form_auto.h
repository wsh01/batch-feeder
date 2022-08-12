#ifndef FORM_AUTO_H
#define FORM_AUTO_H

#include <QWidget>

namespace Ui {
class Form_Auto;
}

class Form_Auto : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Auto(QWidget *parent = 0);
    ~Form_Auto();

private:
    Ui::Form_Auto *ui;
    void data_show();

private slots:

signals:

};

#endif // FORM_AUTO_H

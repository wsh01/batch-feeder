#ifndef FORM_MAUNAL_H
#define FORM_MAUNAL_H

#include <QWidget>


namespace Ui {
class Form_Maunal;
}

class Form_Maunal : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Maunal(QWidget *parent = 0);
    ~Form_Maunal();

private:
    Ui::Form_Maunal *ui;
    void data_show();


public slots:

};

#endif // FORM_MAUNAL_H

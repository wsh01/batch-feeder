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

private slots:
    void on_btn_Warning_clicked();

    void on_btn_Parameter_clicked();

    void on_btn_standardization_clicked();

    void on_btn_timeModify_clicked();

    void on_btn_malfunction_clicked();

    void on_btn_maunalText_clicked();

    void on_btn_zero_clicked();

private:
    Ui::Form_Meun *ui;
};

#endif // FORM_MEUN_H

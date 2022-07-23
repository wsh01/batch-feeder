#ifndef NUMKEYBOARD_H
#define NUMKEYBOARD_H

#include <QDialog>
#include <QtDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QLineEdit>
#include <QPushButton>

class NumKeyboard : public QDialog
{
    Q_OBJECT

public:
    explicit NumKeyboard(QWidget *parent = 0);
    ~NumKeyboard();
    bool valid;

    void setText(QString str);
    QString getText();
    QPushButton *num6Button;
    QPushButton *backspaceButton;
    QPushButton *num4Button;
    QPushButton *okButton;
    QPushButton *leftButton;
    QPushButton *num1Button;
    QPushButton *cancelButton;
    QPushButton *rightButton;
    QPushButton *num9Button;
    QPushButton *num8Button;
    QPushButton *num2Button;
    QPushButton *num7Button;
    QPushButton *dotButton;
    QPushButton *num3Button;
    QPushButton *num0Button;
    QPushButton *num5Button;
    QPushButton *signButton;
    QLineEdit *lineEdit;

protected:
    void changeEvent(QEvent *e);
    //    void keyPressEvent(QKeyEvent *e);
    bool eventFilter(QObject *obj, QEvent *event);

private slots:
    void buttonClickResponse(int gemfield);

private:
    QString strContent;
};
#endif


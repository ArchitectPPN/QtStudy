#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "subwidget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void mySlot();
    void changeWin();
    void dealSub();

private:
    Ui::Widget *ui;
    QPushButton bt1;
    QPushButton *bt2;
    QPushButton *bt3;

    subWidget subW;
};

#endif // WIDGET_H

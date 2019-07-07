#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    bt1.setParent(this);
    bt1.setText("关闭窗口");
    bt1.move(100, 0);

    bt2 = new QPushButton(this);
    bt2->setText("N");
    QObject::connect(&bt1, &QPushButton::clicked, this, &Widget::mySlot);
    connect(bt2, &QPushButton::released, this, &Widget::close);

    // 设置窗口标题
    setWindowTitle("Boss");

    // 切换主窗口
    bt3 = new QPushButton(this);
    bt3->setText("切换到子窗口~");
    bt3->move(210, 0);
    connect(bt3, &QPushButton::clicked, this, &Widget::changeWin);

    //subW.show();
    // 处理子窗口的信号
    connect(&subW, &subWidget::showMain, this, &Widget::dealSub);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeWin()
{
    //
    subW.show();
    this->hide();
}

void Widget::dealSub()
{
    subW.hide();
    this->show();
}

void Widget::mySlot()
{
    this->setWindowTitle("被设置~");
    bt1.setText("我也被设置了");
}

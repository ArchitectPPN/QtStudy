# include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // 设置窗口
    QWidget w;
    w.setWindowTitle("主要看气质~"); //设置标题

    // 设置按钮, 初始化父对象
    QPushButton qButton(&w);
    qButton.setText("^_^");
    qButton.move(100, 200);

    // 指定父对象, 调用函数来设置父对象
    QPushButton bt;
    bt.setText("我是个好人~");
    bt.setParent(&w);

    // 显示窗口
    w.show();
    app.exec();
    return 0;
}

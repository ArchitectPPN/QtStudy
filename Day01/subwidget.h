#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class subWidget : public QWidget
{
    Q_OBJECT
public:
    explicit subWidget(QWidget *parent = nullptr);
    void sendSlot();
signals:
    void showMain();

public slots:

private:
    QPushButton b;
};

#endif // SUBWIDGET_H

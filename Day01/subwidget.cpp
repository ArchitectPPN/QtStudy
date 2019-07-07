#include "subwidget.h"

subWidget::subWidget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("sub Windows");
    b.setParent(this);
    b.setText("切换到Boss");

    connect(&b, &QPushButton::clicked, this, &subWidget::sendSlot, Qt::AutoConnection);
}


void subWidget::sendSlot()
{
    emit showMain();
}

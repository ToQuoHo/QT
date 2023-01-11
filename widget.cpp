#include "widget.h"
#include "ui_widget.h"
#include "colorwidget.h"
#include "date_time.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ColorWidget * colorpick = new ColorWidget(this);


    ui->verticalLayout->addWidget(colorpick);
}

Widget::~Widget()
{
    delete ui;
}

//void Widget::colorChanged(QColor color)
//{
//    qDebug()<<"Color changed to: "<<color.name();
//}


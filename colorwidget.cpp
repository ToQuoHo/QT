#include "colorwidget.h"
#include "date_time.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

ColorWidget::ColorWidget(QWidget *parent)
    : QWidget{parent}
{
    populateColor();
    setupUI();
}

const QColor &ColorWidget::getColor() const
{
    return color;
}

void ColorWidget::setColor(const QColor &newColor)
{
    color = newColor;
}

void ColorWidget::button1Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(0).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[0]);
}
void ColorWidget::button2Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(1).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[1]);
}
void ColorWidget::button3Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(2).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[2]);
}
void ColorWidget::button4Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(3).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[3]);
}
void ColorWidget::button5Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(4).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[4]);
}
void ColorWidget::button6Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(5).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[5]);
}
void ColorWidget::button7Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(6).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[6]);
}
void ColorWidget::button8Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(7).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[7]);
}
void ColorWidget::button9Clicked()
{
    QString css = QString("background-color : %1").arg(colorlist.at(8).name());
    a->setStyleSheet(css);
    emit colorChanged(colorlist[8]);
}

void ColorWidget::populateColor()
{
    colorlist<<Qt::red<<Qt::green
               <<Qt::blue
                 <<Qt::cyan
                   <<Qt::yellow
                     <<Qt::darkRed
                       <<Qt::darkBlue
                         <<Qt::darkCyan
                           <<Qt::darkYellow;
}

void ColorWidget::setupUI()
{
    QVBoxLayout * vlayout = new QVBoxLayout(this);
    gridlayout = new QGridLayout();
    QSizePolicy policy(QSizePolicy::Minimum,QSizePolicy::Expanding);

    QPushButton * button1 = new QPushButton("one",this);
    button1->setSizePolicy(policy);
    QString css = QString("background-color : %1").arg(colorlist.at(0).name());
    button1->setStyleSheet(css);
    connect(button1,&QPushButton::clicked,this,&ColorWidget::button1Clicked);


    QPushButton * button2 = new QPushButton("two",this);
    button2->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(1).name());
    button2->setStyleSheet(css);
    connect(button2,&QPushButton::clicked,this,&ColorWidget::button2Clicked);


    QPushButton * button3 = new QPushButton("three",this);
    button3->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(2).name());
    button3->setStyleSheet(css);
    connect(button3,&QPushButton::clicked,this,&ColorWidget::button3Clicked);


    QPushButton * button4 = new QPushButton("four",this);
    button4->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(3).name());
    button4->setStyleSheet(css);
    connect(button4,&QPushButton::clicked,this,&ColorWidget::button4Clicked);


    QPushButton * button5 = new QPushButton("five",this);
    button5->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(4).name());
    button5->setStyleSheet(css);
    connect(button5,&QPushButton::clicked,this,&ColorWidget::button5Clicked);


    QPushButton * button6 = new QPushButton("six",this);
    button6->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(5).name());
    button6->setStyleSheet(css);
    connect(button6,&QPushButton::clicked,this,&ColorWidget::button6Clicked);

    QPushButton * button7 = new QPushButton("seven",this);
    button7->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(6).name());
    button7->setStyleSheet(css);
    connect(button7,&QPushButton::clicked,this,&ColorWidget::button7Clicked);

    QPushButton * button8 = new QPushButton("eight",this);
    button8->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(7).name());
    button8->setStyleSheet(css);
    connect(button8,&QPushButton::clicked,this,&ColorWidget::button8Clicked);

    QPushButton * button9 = new QPushButton("nine",this);
    button9->setSizePolicy(policy);
    css = QString("background-color : %1").arg(colorlist.at(8).name());
    button9->setStyleSheet(css);
    connect(button9,&QPushButton::clicked,this,&ColorWidget::button9Clicked);

    gridlayout->addWidget(button1, 0, 0);
    gridlayout->addWidget(button2, 0, 1);
    gridlayout->addWidget(button3, 0, 2);

    gridlayout->addWidget(button4, 1, 0);
    gridlayout->addWidget(button5, 1, 1);
    gridlayout->addWidget(button6, 1, 2);

    gridlayout->addWidget(button7, 2, 0);
    gridlayout->addWidget(button8, 2, 1);
    gridlayout->addWidget(button9, 2, 2);

//    label = new QLabel(this);
//    label->setFixedHeight(50);

    a = new Date_Time(this);

    vlayout->addWidget(a);
    vlayout->addLayout(gridlayout);



}

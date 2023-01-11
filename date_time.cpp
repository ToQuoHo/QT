#include "date_time.h"
#include <QVBoxLayout>

Date_Time::Date_Time(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout * layout = new QVBoxLayout(this);
    QFont lfont("Times",20,QFont::Bold);
    QSizePolicy policy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    timeString = QTime::currentTime().toString();
    labelBottom = new QLabel(this);
    labelBottom->setText(timeString);
    labelBottom->setFont(lfont);
    labelBottom->setAlignment(Qt::AlignCenter);
    labelBottom->setSizePolicy(policy);

    dateString = QDate::currentDate().toString(Qt::TextDate);
    labelTop = new QLabel(this);
    labelTop->setText(dateString);
    labelTop->setFont(lfont);
    labelTop->setAlignment(Qt::AlignCenter);
    setSizePolicy(policy);

    layout->addWidget(labelTop);
    layout->addWidget(labelBottom);
    setLayout(layout);
    setSizePolicy(policy);

    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,&QTimer::timeout,this,&Date_Time::updateTime);
    timer->start();
}

void Date_Time::updateTime()
{
    timeString = QTime::currentTime().toString();
    labelBottom->setText(timeString);
}



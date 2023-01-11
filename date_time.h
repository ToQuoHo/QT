#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QTimer>
#include <QDate>

class Date_Time : public QWidget
{
    Q_OBJECT
public:
    explicit Date_Time(QWidget *parent = nullptr);

signals:
public slots:
    void updateTime();
private:
    QTimer * timer;
    QLabel * labelTop;
    QLabel * labelBottom;
    QString dateString;
    QString timeString;
};

#endif // DATE_TIME_H

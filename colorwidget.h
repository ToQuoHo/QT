#ifndef COLORWIDGET_H
#define COLORWIDGET_H

#include <QWidget>
#include <QColor>
#include <QGridLayout>
#include <QLabel>
#include "date_time.h"

class ColorWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ColorWidget(QWidget *parent = nullptr);

    const QColor &getColor() const;
    void setColor(const QColor &newColor);

signals:
    void colorChanged(QColor newColor);
public slots:
    void button1Clicked();
    void button2Clicked();
    void button3Clicked();
    void button4Clicked();
    void button5Clicked();
    void button6Clicked();
    void button7Clicked();
    void button8Clicked();
    void button9Clicked();
private:
    void populateColor();
    void setupUI();
    QColor color;
    QList<QColor> colorlist;
    QGridLayout * gridlayout;
    Date_Time * a;

//    QLabel * label;
};

#endif // COLORWIDGET_H

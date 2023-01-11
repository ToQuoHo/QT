#ifndef DATETIMEWIDGET_H
#define DATETIMEWIDGET_H

#include <QWidget>
#include <QDate>
#include <QLabel>
#include <QTime>

class datetimewidget : public QWidget
{
    Q_OBJECT
public:
    explicit datetimewidget(QWidget *parent = nullptr);

signals:
private slots:
private:
    QTimer * time;
    QLabel * label;
};

#endif // DATETIMEWIDGET_H

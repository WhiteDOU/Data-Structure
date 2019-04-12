#ifndef MY_RED_H
#define MY_RED_H
#include <QFrame>
#include <QPainter>
#include <QFont>
class my_red:public QFrame
{
    Q_OBJECT
public:
    my_red(QWidget *parent=0);
    ~my_red();
    int key[1000],x[1000],y[1000],p[1000],color[1000],level[1000];
    int size;
private:
    void paintEvent(QPaintEvent *event);
};

#endif // MY_RED_H

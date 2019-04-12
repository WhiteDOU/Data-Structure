#include "my_red.h"
#include <math.h>
my_red::my_red(QWidget *parent)
    :QFrame(parent)
{
    size=0;
    for (int i=0;i<1000;i++)
        key[i]=x[i]=y[i]=p[i]=color[i]=0;
}
my_red::~my_red()
{

}
void my_red::paintEvent(QPaintEvent *event)
{
    QRect r=this->rect();
    int _x=r.x()+r.width();
    _x=_x/2;
    QPainter painter(this);
    if (size!=0)
    {
        x[0]=_x;y[0]=30;
        for (int i=1;i<size;i++)
        {
            int pa=p[i];
            int tx,ty;
            if (key[pa]<key[i]) {tx=250-(level[i]+1)*(level[i]+1)*8+10*(level[i]);ty=100;}
            else {tx=-250+(level[i]+1)*(level[i]+1)*8-10*(level[i]);ty=100;}
            x[i]=x[pa]+tx;
            y[i]=y[pa]+ty;
            QPen pen((QColor(0x00,0x00,0x00)),2);
            painter.setPen(pen);
            painter.drawLine(x[pa],y[pa],x[i],y[i]);
        }
        painter.setBrush((QBrush(QColor(0x00,0x00,0x00))));
        painter.drawEllipse(QPoint(_x,30),10,10);
        painter.setPen(QColor(0x00,0xFF,0x00));
        painter.drawText(_x-5,35,QString::number(key[0]));
        painter.setPen(QColor(0x00,0xFF,0x00));
        for (int i=1;i<size;i++)
        {
            if (color[i]==0) painter.setBrush((QBrush(QColor(0xFF,0x00,0x00))));
            else painter.setBrush((QBrush(QColor(0x00,000,0x00))));
            int pa=p[i];
            int tx,ty;
            if (key[pa]<key[i]) {tx=250-(level[i]+1)*(level[i]+1)*8+10*(level[i]);ty=100;}
            else {tx=-250+(level[i]+1)*(level[i]+1)*8-10*(level[i]);ty=100;}
            x[i]=x[pa]+tx;
            y[i]=y[pa]+ty;
            painter.drawEllipse(QPoint(x[i],y[i]),10,10);
            painter.setPen(QColor(0x00,0xFF,0x00));
            painter.drawText(x[i]-5,y[i]+5,QString::number(key[i]));
        }
    }
}

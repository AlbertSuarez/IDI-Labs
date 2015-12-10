#include "myLabel.h"

myLabel::myLabel(QWidget *parent):QLabel(parent)
{

}


void myLabel::truncar(int n)
{
    QString s = text();
    s.truncate((s.size()*n)/100);
    setText(s);
}
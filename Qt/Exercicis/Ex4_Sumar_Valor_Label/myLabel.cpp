#include "myLabel.h"

myLabel::myLabel(QWidget *parent):QLabel(parent)
{
  suma = 0;
}


void myLabel::sumOne()
{
    ++suma;
    setText(QString::number(suma));
}

void myLabel::sumTwo()
{
    suma += 2;
    setText(QString::number(suma));
}

void myLabel::setZero()
{
    suma = 0;
    setText(QString::number(suma));
}
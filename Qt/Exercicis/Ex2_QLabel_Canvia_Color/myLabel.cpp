#include "myLabel.h"

myLabel::myLabel(QWidget *parent):QLabel(parent)
{
  red = green = blue = 0;
}

void myLabel::getRed(int n)
{
  red = n;
}

void myLabel::getGreen(int n)
{
  green = n;
}

void myLabel::getBlue(int n)
{
  blue = n;
}

void myLabel::ok()
{
  QString color = "background-color: rgb(" + QString::number(red,10) + ", " + QString::number(green,10) + ", " + QString::number(blue,10) +")";
  setStyleSheet(color);
}
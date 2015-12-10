#include "mylcd.h"

myLCD::myLCD(QWidget *parent):QLCDNumber(parent)
{
}

void myLCD::setZero()
{
  setStyleSheet("color:green");
  display(0);
}

void myLCD::setNumber(int n)
{
  setSegmentStyle(Flat);
  if (n == 0) {
    setStyleSheet("color:green");
  }
  else if (n % 2 == 0) {
    setStyleSheet("color:blue");
  }
  else {
    setStyleSheet("color:red");
  }
  display(n);
}
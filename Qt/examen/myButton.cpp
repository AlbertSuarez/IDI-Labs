#include "myButton.h"

myButton::myButton(QWidget *parent):QPushButton(parent)
{
  isGreen = true;
}


void myButton::changeColor()
{
    if (isGreen) {
      isGreen = false;
      setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
    }
    else {
      isGreen = true;
      setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
    }
}
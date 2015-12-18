#include "myLabel.h"

myLabel::myLabel(QWidget *parent):QLabel(parent)
{
  haMogut = false;
  size = 0;
}


void myLabel::truncar(int n)
{
    QString s = text();
    if (!haMogut) {
      haMogut = true;
      size = s.size();
    }
    s.truncate((size*n)/100);
    setText(s);
}
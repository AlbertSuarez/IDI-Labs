#include "MyQLabel.h"

MyQLabel::MyQLabel(QWidget *parent):QLabel(parent)
{
}

void MyQLabel::changecolor()
{
	if(i%3 == 0) setStyleSheet("background-color: yellow");
	else if(i%3 == 1) setStyleSheet("background-color: green");
	else if(i%3 == 2) setStyleSheet("background-color: red");
	++i;
}
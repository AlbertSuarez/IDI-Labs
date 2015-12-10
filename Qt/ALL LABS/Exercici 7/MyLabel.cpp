#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent) {}

void MyLabel::canvi() {
	++i;
	if (i % 3 == 0) setStyleSheet("background-color: green");
	else if (i % 3 == 1) setStyleSheet("background-color: yellow");
	else if (i % 3 == 2) setStyleSheet("background-color: red");
}
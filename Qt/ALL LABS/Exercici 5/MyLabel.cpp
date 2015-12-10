#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent) {}

void MyLabel::creu() {
	setText("X");
}

void MyLabel::cercle() {
	setText("O");
}
#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent) {}

void MyLabel::numUn(int n) {
	un = n;
}

void MyLabel::numDos(int n) {
	dos = n;
}

void MyLabel::numTres(int n) {
	tres = n;
}

void MyLabel::Ok() {
	QString a = "background-color: rgb(";
	QString b = QString::number(un, 10);
	QString c = QString::number(dos, 10);
	QString d = QString::number(tres, 10);
	QString e = ")";
	QString f = ",";
	a += b;		//background-color + un
 	a += f;		//background-color + un + ,
	a += c;		//background-color + un + ,+dos
	a += f;		//background-color + un + ,+dos+,
	a += d;		//background-color + un + ,+dos+,+tres
	a += e;		//background-color + un + ,+dos+,+tres+)
	setStyleSheet(a);
}


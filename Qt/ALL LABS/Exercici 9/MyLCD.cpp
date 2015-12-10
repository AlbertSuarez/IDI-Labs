#include "MyLCD.h"

MyLCD::MyLCD(QWidget *parent):QLCDNumber(parent) {}

void MyLCD::resetCero() {
	display(0);
}

void MyLCD::getNumero(int n) {
	NumeroSuma = n;
}

void MyLCD::suma() {
	int sum = intValue();
	NumAnterior = intValue();
	int res = sum + NumeroSuma;
	// NumAnterior = res;
	display(res);

}

void MyLCD::resta() {
	int sum = intValue();
	int res = sum - NumeroSuma;
	NumAnterior = intValue();
	display(res);
}

void MyLCD::setNumAnt() {
	display(NumAnterior);
}
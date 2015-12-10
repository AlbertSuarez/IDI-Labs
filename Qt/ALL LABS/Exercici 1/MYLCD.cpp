#include "MYLCD.h"

MYLCD::MYLCD(QWidget *parent):QLCDNumber(parent)
{
}

void MYLCD::posarCero() {
	// setStyleSheet("background-color: green");
	display(0);
}

void MYLCD::posarNumero(int n) {
	if (intValue() == 0) {
		setSegmentStyle(Flat);
		setStyleSheet("color:green");
		display(n);
	}
	else if (intValue() % 2 == 0) {
		setSegmentStyle(Flat);
		setStyleSheet("color:blue");
		display(n);
	}
	else if (intValue() % 2 != 0) {
		setSegmentStyle(Flat);
		setStyleSheet("color:red");
		display(n);
	}
}

#include "MYQTextEdit.h"

MYQTextEdit::MYQTextEdit(QWidget *parent):QTextEdit(parent)
{
}

void MYQTextEdit::setTexto(QString t) {
	texto = t;
}

void MYQTextEdit::setNum(QString n) {
	num = n;
}

void MYQTextEdit::confirmar(){

	append(num + texto);
}

void MYQTextEdit::deshacer() {
	undo();
}

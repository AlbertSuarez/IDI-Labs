#include "MyQTextEdit.h"

MyQTextEdit::MyQTextEdit(QWidget *parent):QTextEdit(parent)
{
}

void MyQTextEdit::receivenumber(QString number)
{
	a = number;
}

void MyQTextEdit::receivetext(QString text)
{
	b = text;
}

void MyQTextEdit::receiveok()
{
	append(a+" "+b);
}
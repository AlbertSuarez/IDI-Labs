#include "MyQLineEdit.h"

MyQLineEdit::MyQLineEdit(QWidget *parent):QLineEdit(parent) {}

void MyQLineEdit::recibereturn() {
  emit(setreturn(text()));
}
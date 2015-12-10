/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created: Sat May 31 20:43:41 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "MYQTextEdit.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QPushButton *confirmar;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    MYQTextEdit *textEdit;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(505, 280);
        gridLayout = new QGridLayout(myForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(myForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        spinBox = new QSpinBox(myForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 0, 0, 1, 1);

        confirmar = new QPushButton(myForm);
        confirmar->setObjectName(QString::fromUtf8("confirmar"));

        gridLayout->addWidget(confirmar, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(myForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(myForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        textEdit = new MYQTextEdit(myForm);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 3, 2);


        retranslateUi(myForm);
        QObject::connect(pushButton_3, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(confirmar, SIGNAL(clicked()), textEdit, SLOT(confirmar()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), textEdit, SLOT(deshacer()));
        QObject::connect(lineEdit, SIGNAL(textEdited(QString)), textEdit, SLOT(setTexto(QString)));
        QObject::connect(spinBox, SIGNAL(valueChanged(QString)), textEdit, SLOT(setNum(QString)));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        confirmar->setText(QApplication::translate("myForm", "Confirmar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myForm", "Deshacer", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myForm", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

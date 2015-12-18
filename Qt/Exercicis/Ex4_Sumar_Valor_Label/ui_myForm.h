/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    myLabel *suma;
    QSpacerItem *spacer1;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *buttonC;
    QSpacerItem *spacer2;
    QPushButton *buttonExit;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(426, 61);
        widget = new QWidget(myForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 391, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        suma = new myLabel(widget);
        suma->setObjectName(QString::fromUtf8("suma"));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        suma->setFont(font);

        horizontalLayout->addWidget(suma);

        spacer1 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer1);

        button1 = new QPushButton(widget);
        button1->setObjectName(QString::fromUtf8("button1"));

        horizontalLayout->addWidget(button1);

        button2 = new QPushButton(widget);
        button2->setObjectName(QString::fromUtf8("button2"));

        horizontalLayout->addWidget(button2);

        buttonC = new QPushButton(widget);
        buttonC->setObjectName(QString::fromUtf8("buttonC"));

        horizontalLayout->addWidget(buttonC);

        spacer2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer2);

        buttonExit = new QPushButton(widget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));

        horizontalLayout->addWidget(buttonExit);


        retranslateUi(myForm);
        QObject::connect(buttonExit, SIGNAL(clicked()), myForm, SLOT(close()));
	QObject::connect(button1, SIGNAL(clicked()), suma, SLOT(sumOne()));
	QObject::connect(button2, SIGNAL(clicked()), suma, SLOT(sumTwo()));
	QObject::connect(buttonC, SIGNAL(clicked()), suma, SLOT(setZero()));
	

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        suma->setText(QApplication::translate("myForm", "0", 0, QApplication::UnicodeUTF8));
        button1->setText(QApplication::translate("myForm", "1", 0, QApplication::UnicodeUTF8));
        button2->setText(QApplication::translate("myForm", "2", 0, QApplication::UnicodeUTF8));
        buttonC->setText(QApplication::translate("myForm", "C", 0, QApplication::UnicodeUTF8));
        buttonExit->setText(QApplication::translate("myForm", "&Surt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

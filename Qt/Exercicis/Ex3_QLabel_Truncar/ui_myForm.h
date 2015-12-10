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
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QLabel *labelText;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTextRetallat;
    myLabel *labelTextEdit;
    QWidget *widget1;
    QHBoxLayout *layoutSlider;
    QSlider *slider;
    QPushButton *exitButton;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(503, 178);
        labelText = new QLabel(myForm);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setGeometry(QRect(12, 12, 30, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labelText->setFont(font);
        lineEdit = new QLineEdit(myForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(251, 12, 241, 22));
        widget = new QWidget(myForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 40, 481, 18));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelTextRetallat = new QLabel(widget);
        labelTextRetallat->setObjectName(QString::fromUtf8("labelTextRetallat"));
        labelTextRetallat->setFont(font);

        horizontalLayout->addWidget(labelTextRetallat);

        labelTextEdit = new myLabel(widget);
        labelTextEdit->setObjectName(QString::fromUtf8("labelTextEdit"));

        horizontalLayout->addWidget(labelTextEdit);

        widget1 = new QWidget(myForm);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(11, 133, 481, 25));
        layoutSlider = new QHBoxLayout(widget1);
        layoutSlider->setObjectName(QString::fromUtf8("layoutSlider"));
        layoutSlider->setContentsMargins(0, 0, 0, 0);
        slider = new QSlider(widget1);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setSliderPosition(99);
        slider->setOrientation(Qt::Horizontal);

        layoutSlider->addWidget(slider);

        exitButton = new QPushButton(widget1);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        layoutSlider->addWidget(exitButton);


        retranslateUi(myForm);
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), labelTextEdit, SLOT(setText(QString)));
        QObject::connect(exitButton, SIGNAL(clicked()), myForm, SLOT(close()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        labelText->setText(QApplication::translate("myForm", "Text", 0, QApplication::UnicodeUTF8));
        labelTextRetallat->setText(QApplication::translate("myForm", "Text retallat", 0, QApplication::UnicodeUTF8));
        labelTextEdit->setText(QString());
        exitButton->setText(QApplication::translate("myForm", "&Sortir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

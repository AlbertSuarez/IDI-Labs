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
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "mylcd.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    myLCD *lcdNumber;
    QSlider *horizontalSlider;
    QPushButton *zeroButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(503, 68);
        widget = new QWidget(myForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 481, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new myLCD(widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(horizontalSlider);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));

        horizontalLayout->addWidget(zeroButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout->addWidget(exitButton);


        retranslateUi(myForm);
        QObject::connect(exitButton, SIGNAL(clicked()), myForm, SLOT(close()));
        //QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(display(int)));
	QObject::connect(zeroButton, SIGNAL(clicked()), lcdNumber, SLOT(setZero()));
	QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(setNumber(int)));
	
        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        zeroButton->setText(QApplication::translate("myForm", "Zero", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("myForm", "&Surt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

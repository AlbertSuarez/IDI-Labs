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
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    myLabel *labelColor;
    QWidget *widget;
    QHBoxLayout *layoutAll;
    QVBoxLayout *layoutRGB;
    QHBoxLayout *layoutR;
    QLabel *labelR;
    QSlider *sliderR;
    QLCDNumber *lcdR;
    QHBoxLayout *layoutG;
    QLabel *labelG;
    QSlider *sliderG;
    QLCDNumber *lcdG;
    QHBoxLayout *layoutB;
    QLabel *labelB;
    QSlider *sliderB;
    QLCDNumber *lcdB;
    QHBoxLayout *layoutButtons;
    QSpacerItem *spacerButtons2;
    QPushButton *okButton;
    QSpacerItem *spacerButtons;
    QPushButton *quitButton;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(503, 263);
        labelColor = new myLabel(myForm);
        labelColor->setObjectName(QString::fromUtf8("labelColor"));
        labelColor->setGeometry(QRect(10, 10, 481, 121));
        labelColor->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        widget = new QWidget(myForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 150, 481, 89));
        layoutAll = new QHBoxLayout(widget);
        layoutAll->setObjectName(QString::fromUtf8("layoutAll"));
        layoutAll->setContentsMargins(0, 0, 0, 0);
        layoutRGB = new QVBoxLayout();
        layoutRGB->setObjectName(QString::fromUtf8("layoutRGB"));
        layoutR = new QHBoxLayout();
        layoutR->setObjectName(QString::fromUtf8("layoutR"));
        labelR = new QLabel(widget);
        labelR->setObjectName(QString::fromUtf8("labelR"));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans"));
        font.setBold(true);
        font.setWeight(75);
        labelR->setFont(font);

        layoutR->addWidget(labelR);

        sliderR = new QSlider(widget);
        sliderR->setObjectName(QString::fromUtf8("sliderR"));
        sliderR->setMaximum(255);
        sliderR->setOrientation(Qt::Horizontal);

        layoutR->addWidget(sliderR);

        lcdR = new QLCDNumber(widget);
        lcdR->setObjectName(QString::fromUtf8("lcdR"));

        layoutR->addWidget(lcdR);


        layoutRGB->addLayout(layoutR);

        layoutG = new QHBoxLayout();
        layoutG->setObjectName(QString::fromUtf8("layoutG"));
        labelG = new QLabel(widget);
        labelG->setObjectName(QString::fromUtf8("labelG"));
        labelG->setFont(font);

        layoutG->addWidget(labelG);

        sliderG = new QSlider(widget);
        sliderG->setObjectName(QString::fromUtf8("sliderG"));
        sliderG->setMaximum(255);
        sliderG->setOrientation(Qt::Horizontal);

        layoutG->addWidget(sliderG);

        lcdG = new QLCDNumber(widget);
        lcdG->setObjectName(QString::fromUtf8("lcdG"));

        layoutG->addWidget(lcdG);


        layoutRGB->addLayout(layoutG);

        layoutB = new QHBoxLayout();
        layoutB->setObjectName(QString::fromUtf8("layoutB"));
        labelB = new QLabel(widget);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setFont(font);

        layoutB->addWidget(labelB);

        sliderB = new QSlider(widget);
        sliderB->setObjectName(QString::fromUtf8("sliderB"));
        sliderB->setMaximum(255);
        sliderB->setOrientation(Qt::Horizontal);

        layoutB->addWidget(sliderB);

        lcdB = new QLCDNumber(widget);
        lcdB->setObjectName(QString::fromUtf8("lcdB"));

        layoutB->addWidget(lcdB);


        layoutRGB->addLayout(layoutB);


        layoutAll->addLayout(layoutRGB);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        spacerButtons2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutButtons->addItem(spacerButtons2);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        layoutButtons->addWidget(okButton);

        spacerButtons = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutButtons->addItem(spacerButtons);

        quitButton = new QPushButton(widget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        layoutButtons->addWidget(quitButton);


        layoutAll->addLayout(layoutButtons);


        retranslateUi(myForm);
        QObject::connect(quitButton, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(sliderR, SIGNAL(sliderMoved(int)), lcdR, SLOT(display(int)));
        QObject::connect(sliderG, SIGNAL(sliderMoved(int)), lcdG, SLOT(display(int)));
        QObject::connect(sliderB, SIGNAL(sliderMoved(int)), lcdB, SLOT(display(int)));
	
	QObject::connect(sliderR, SIGNAL(sliderMoved(int)), labelColor, SLOT(getRed(int)));
        QObject::connect(sliderG, SIGNAL(sliderMoved(int)), labelColor, SLOT(getGreen(int)));
        QObject::connect(sliderB, SIGNAL(sliderMoved(int)), labelColor, SLOT(getBlue(int)));
	QObject::connect(okButton, SIGNAL(clicked()), labelColor, SLOT(ok()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        labelColor->setText(QString());
        labelR->setText(QApplication::translate("myForm", "R", 0, QApplication::UnicodeUTF8));
        labelG->setText(QApplication::translate("myForm", "G", 0, QApplication::UnicodeUTF8));
        labelB->setText(QApplication::translate("myForm", "B", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("myForm", "OK", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("myForm", "&Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

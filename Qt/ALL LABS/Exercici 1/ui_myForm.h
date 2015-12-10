/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created: Sun Jun 1 18:26:44 2014
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MYLCD.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *cero;
    MYLCD *lcdNumber;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *sortir;
    QSlider *horizontalSlider;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(444, 324);
        gridLayout = new QGridLayout(myForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cero = new QPushButton(myForm);
        cero->setObjectName(QString::fromUtf8("cero"));

        gridLayout->addWidget(cero, 2, 2, 1, 1);

        lcdNumber = new MYLCD(myForm);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sortir = new QPushButton(myForm);
        sortir->setObjectName(QString::fromUtf8("sortir"));

        horizontalLayout->addWidget(sortir);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 3);

        horizontalSlider = new QSlider(myForm);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(200, 0));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(105);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 2, 1, 1, 1);


        retranslateUi(myForm);
        QObject::connect(sortir, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(cero, SIGNAL(clicked()), lcdNumber, SLOT(posarCero()));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(posarNumero(int)));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        cero->setText(QApplication::translate("myForm", "Cero", 0, QApplication::UnicodeUTF8));
        sortir->setText(QApplication::translate("myForm", "&Sortir", 0, QApplication::UnicodeUTF8));
        sortir->setShortcut(QApplication::translate("myForm", "Ctrl+S", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

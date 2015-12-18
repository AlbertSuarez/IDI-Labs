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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "myButton.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutButtons;
    QHBoxLayout *horizontal1;
    myButton *button1;
    myButton *button2;
    QHBoxLayout *horizontal2;
    myButton *button3;
    myButton *button4;
    QVBoxLayout *verticalLayoutSpins;
    QVBoxLayout *verticalLayout1;
    QLabel *labelFree;
    QSpacerItem *verticalSpacer;
    QSpinBox *spinFree;
    QVBoxLayout *verticalLayout2;
    QLabel *labelBusy;
    QSpacerItem *verticalSpacer_2;
    QSpinBox *spinBusy;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonQuit;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->setEnabled(true);
        myForm->resize(547, 351);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(myForm->sizePolicy().hasHeightForWidth());
        myForm->setSizePolicy(sizePolicy);
        myForm->setMinimumSize(QSize(547, 351));
        layoutWidget = new QWidget(myForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 531, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayoutButtons = new QVBoxLayout();
        verticalLayoutButtons->setObjectName(QString::fromUtf8("verticalLayoutButtons"));
        horizontal1 = new QHBoxLayout();
        horizontal1->setObjectName(QString::fromUtf8("horizontal1"));
        button1 = new myButton(layoutWidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        button1->setIconSize(QSize(16, 16));

        horizontal1->addWidget(button1);

        button2 = new myButton(layoutWidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        horizontal1->addWidget(button2);


        verticalLayoutButtons->addLayout(horizontal1);

        horizontal2 = new QHBoxLayout();
        horizontal2->setObjectName(QString::fromUtf8("horizontal2"));
        button3 = new myButton(layoutWidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        horizontal2->addWidget(button3);

        button4 = new myButton(layoutWidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        horizontal2->addWidget(button4);


        verticalLayoutButtons->addLayout(horizontal2);


        horizontalLayout->addLayout(verticalLayoutButtons);

        verticalLayoutSpins = new QVBoxLayout();
        verticalLayoutSpins->setObjectName(QString::fromUtf8("verticalLayoutSpins"));
        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        labelFree = new QLabel(layoutWidget);
        labelFree->setObjectName(QString::fromUtf8("labelFree"));
        sizePolicy.setHeightForWidth(labelFree->sizePolicy().hasHeightForWidth());
        labelFree->setSizePolicy(sizePolicy);

        verticalLayout1->addWidget(labelFree);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout1->addItem(verticalSpacer);

        spinFree = new QSpinBox(layoutWidget);
        spinFree->setObjectName(QString::fromUtf8("spinFree"));
        spinFree->setEnabled(true);
        sizePolicy.setHeightForWidth(spinFree->sizePolicy().hasHeightForWidth());
        spinFree->setSizePolicy(sizePolicy);
        spinFree->setReadOnly(true);
        spinFree->setMaximum(4);
        spinFree->setValue(4);

        verticalLayout1->addWidget(spinFree);


        verticalLayoutSpins->addLayout(verticalLayout1);

        verticalLayout2 = new QVBoxLayout();
        verticalLayout2->setObjectName(QString::fromUtf8("verticalLayout2"));
        labelBusy = new QLabel(layoutWidget);
        labelBusy->setObjectName(QString::fromUtf8("labelBusy"));
        sizePolicy.setHeightForWidth(labelBusy->sizePolicy().hasHeightForWidth());
        labelBusy->setSizePolicy(sizePolicy);

        verticalLayout2->addWidget(labelBusy);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout2->addItem(verticalSpacer_2);

        spinBusy = new QSpinBox(layoutWidget);
        spinBusy->setObjectName(QString::fromUtf8("spinBusy"));
        spinBusy->setEnabled(true);
        sizePolicy.setHeightForWidth(spinBusy->sizePolicy().hasHeightForWidth());
        spinBusy->setSizePolicy(sizePolicy);
        spinBusy->setReadOnly(true);
        spinBusy->setMaximum(4);

        verticalLayout2->addWidget(spinBusy);


        verticalLayoutSpins->addLayout(verticalLayout2);


        horizontalLayout->addLayout(verticalLayoutSpins);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonQuit = new QPushButton(layoutWidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonQuit->sizePolicy().hasHeightForWidth());
        buttonQuit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(buttonQuit);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(myForm);
        QObject::connect(buttonQuit, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(button1, SIGNAL(clicked()), button1, SLOT(changeColor()));
        QObject::connect(button4, SIGNAL(clicked()), button4, SLOT(changeColor()));
        QObject::connect(button2, SIGNAL(clicked()), button2, SLOT(changeColor()));
        QObject::connect(button3, SIGNAL(clicked()), button3, SLOT(changeColor()));
        QObject::connect(button1, SIGNAL(clicked(bool)), spinFree, SLOT(stepDown()));
        QObject::connect(button1, SIGNAL(clicked(bool)), spinBusy, SLOT(stepUp()));
        QObject::connect(button2, SIGNAL(clicked(bool)), spinFree, SLOT(stepDown()));
        QObject::connect(button2, SIGNAL(clicked(bool)), spinBusy, SLOT(stepUp()));
        QObject::connect(button3, SIGNAL(clicked(bool)), spinFree, SLOT(stepDown()));
        QObject::connect(button3, SIGNAL(clicked(bool)), spinBusy, SLOT(stepUp()));
        QObject::connect(button4, SIGNAL(clicked(bool)), spinFree, SLOT(stepDown()));
        QObject::connect(button4, SIGNAL(clicked(bool)), spinBusy, SLOT(stepUp()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        button1->setText(QString());
        button2->setText(QString());
        button3->setText(QString());
        button4->setText(QString());
        labelFree->setText(QApplication::translate("myForm", "Places Lliures", 0, QApplication::UnicodeUTF8));
        labelBusy->setText(QApplication::translate("myForm", "Places Ocupades", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("myForm", "&Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

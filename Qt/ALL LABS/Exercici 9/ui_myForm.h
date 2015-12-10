/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created: Sat May 31 21:49:32 2014
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
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyLCD.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    MyLCD *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_5;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(400, 300);
        gridLayout = new QGridLayout(myForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(myForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_2 = new QLabel(myForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalSlider = new QSlider(myForm);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(200, 0));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(9);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);


        horizontalLayout_3->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(myForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font;
        font.setPointSize(50);
        pushButton_2->setFont(font);
        pushButton_2->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(myForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        lcdNumber = new MyLCD(myForm);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMidLineWidth(0);
        lcdNumber->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdNumber);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_3 = new QPushButton(myForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_4 = new QPushButton(myForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_5 = new QPushButton(myForm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(myForm);
        QObject::connect(pushButton_5, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));
        QObject::connect(pushButton_4, SIGNAL(clicked()), lcdNumber, SLOT(resetCero()));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(getNumero(int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), lcdNumber, SLOT(setNumAnt()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), lcdNumber, SLOT(suma()));
        QObject::connect(pushButton, SIGNAL(clicked()), lcdNumber, SLOT(resta()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myForm", "Diferencial", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("myForm", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myForm", "+", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myForm", "-", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myForm", "Undo", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myForm", "Reset", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("myForm", "&Sortir", 0, QApplication::UnicodeUTF8));
        pushButton_5->setShortcut(QApplication::translate("myForm", "Alt+S", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

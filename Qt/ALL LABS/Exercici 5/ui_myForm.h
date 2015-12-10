/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created: Sun Jun 1 16:55:31 2014
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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyLabel.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    MyLabel *label;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(400, 300);
        gridLayout = new QGridLayout(myForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new MyLabel(myForm);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(myForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_2 = new QPushButton(myForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(myForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(myForm);
        QObject::connect(pushButton_3, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), label, SLOT(creu()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), label, SLOT(cercle()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myForm", "Clica un boto", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myForm", "Creu", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myForm", "Cercle", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myForm", "&Sortir", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("myForm", "Alt+S", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

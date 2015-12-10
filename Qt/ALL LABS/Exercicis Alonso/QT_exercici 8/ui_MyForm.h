/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created: Fri May 30 12:05:54 2014
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyQTextEdit.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    MyQTextEdit *textEdit;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(591, 366);
        horizontalLayout_3 = new QHBoxLayout(MyForm);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(MyForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        lineEdit = new QLineEdit(MyForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new MyQTextEdit(MyForm);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(MyForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(MyForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(MyForm);
        QObject::connect(pushButton_2, SIGNAL(clicked()), textEdit, SLOT(undo()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), textEdit, SLOT(receivetext(QString)));
        QObject::connect(spinBox, SIGNAL(valueChanged(QString)), textEdit, SLOT(receivenumber(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), textEdit, SLOT(receiveok()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MyForm", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MyForm", "UNDO", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MyForm", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

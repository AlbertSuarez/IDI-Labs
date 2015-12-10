/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created: Sun Jun 1 20:20:06 2014
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
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyQLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    MyQLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(302, 215);
        horizontalLayout_3 = new QHBoxLayout(MyForm);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MyForm);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new MyQLineEdit(MyForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(20, 20));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(17, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label->raise();
        lineEdit->raise();
        label->raise();
        label->raise();

        retranslateUi(MyForm);
        QObject::connect(lineEdit, SIGNAL(returnPressed()), lineEdit, SLOT(recibereturn()));
        QObject::connect(lineEdit, SIGNAL(setreturn(QString)), label, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MyForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MyForm", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

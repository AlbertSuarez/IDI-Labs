/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created: Sun Jun 1 19:05:08 2014
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
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyLabel.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QGridLayout *gridLayout;
    MyLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSlider *horizontalSlider_3;
    QLCDNumber *lcdNumber_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QLCDNumber *lcdNumber_2;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(391, 300);
        gridLayout = new QGridLayout(myForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new MyLabel(myForm);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label->setPalette(palette);
        label->setAutoFillBackground(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton = new QPushButton(myForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(myForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(myForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSlider = new QSlider(myForm);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);

        lcdNumber = new QLCDNumber(myForm);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout_3->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(myForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSlider_3 = new QSlider(myForm);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_3);

        lcdNumber_3 = new QLCDNumber(myForm);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        horizontalLayout->addWidget(lcdNumber_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(myForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSlider_2 = new QSlider(myForm);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        lcdNumber_2 = new QLCDNumber(myForm);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_2->addWidget(lcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        label->raise();
        horizontalSlider->raise();
        horizontalSlider_2->raise();
        horizontalSlider_3->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lcdNumber->raise();
        lcdNumber_2->raise();
        lcdNumber_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton->raise();
        pushButton->raise();
        pushButton_2->raise();
        horizontalSlider_3->raise();
        label_4->raise();
        lcdNumber_3->raise();

        retranslateUi(myForm);
        QObject::connect(pushButton_2, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(sliderMoved(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(sliderMoved(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), label, SLOT(numUn(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(sliderMoved(int)), label, SLOT(numDos(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(sliderMoved(int)), label, SLOT(numTres(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), label, SLOT(Ok()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("myForm", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myForm", "Quit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("myForm", "R", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("myForm", "B", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("myForm", "G", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H

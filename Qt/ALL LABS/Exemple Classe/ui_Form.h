/********************************************************************************
** Form generated from reading UI file 'Form.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(myForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(myForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(myForm);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(200, 0));
        horizontalSlider->setMinimum(100);
        horizontalSlider->setMaximum(120);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(myForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        spinBox = new QSpinBox(myForm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(100);
        spinBox->setMaximum(120);

        horizontalLayout_3->addWidget(spinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(myForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(myForm);
        QObject::connect(pushButton, SIGNAL(clicked()), myForm, SLOT(close()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "mi Primera mierda", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myForm", "Al\303\247ada", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("myForm", "cosa raro", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myForm", "&Sortir", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("myForm", "Alt+S", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H

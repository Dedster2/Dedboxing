/********************************************************************************
** Form generated from reading UI file 'boxerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXERWIDGET_H
#define UI_BOXERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_boxerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QSpinBox *sbStrength;
    QLabel *label_6;
    QSpinBox *sbDefense;
    QLabel *label_3;
    QSpinBox *sbHit;
    QLabel *label_5;
    QSpinBox *sbBlock;
    QLabel *label_4;
    QSpinBox *sbSpeed;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *boxerWidget)
    {
        if (boxerWidget->objectName().isEmpty())
            boxerWidget->setObjectName(QStringLiteral("boxerWidget"));
        boxerWidget->resize(235, 246);
        verticalLayout = new QVBoxLayout(boxerWidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(boxerWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leName = new QLineEdit(boxerWidget);
        leName->setObjectName(QStringLiteral("leName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leName);

        label_2 = new QLabel(boxerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sbStrength = new QSpinBox(boxerWidget);
        sbStrength->setObjectName(QStringLiteral("sbStrength"));
        sbStrength->setMaximum(9999);
        sbStrength->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, sbStrength);

        label_6 = new QLabel(boxerWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        sbDefense = new QSpinBox(boxerWidget);
        sbDefense->setObjectName(QStringLiteral("sbDefense"));
        sbDefense->setMinimum(1);
        sbDefense->setMaximum(9999);
        sbDefense->setValue(10);

        formLayout->setWidget(2, QFormLayout::FieldRole, sbDefense);

        label_3 = new QLabel(boxerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        sbHit = new QSpinBox(boxerWidget);
        sbHit->setObjectName(QStringLiteral("sbHit"));
        sbHit->setMinimum(1);
        sbHit->setMaximum(9999);
        sbHit->setValue(10);

        formLayout->setWidget(3, QFormLayout::FieldRole, sbHit);

        label_5 = new QLabel(boxerWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        sbBlock = new QSpinBox(boxerWidget);
        sbBlock->setObjectName(QStringLiteral("sbBlock"));
        sbBlock->setMinimum(1);
        sbBlock->setMaximum(9999);
        sbBlock->setValue(10);

        formLayout->setWidget(4, QFormLayout::FieldRole, sbBlock);

        label_4 = new QLabel(boxerWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        sbSpeed = new QSpinBox(boxerWidget);
        sbSpeed->setObjectName(QStringLiteral("sbSpeed"));
        sbSpeed->setMinimum(1);
        sbSpeed->setMaximum(9999);
        sbSpeed->setValue(10);

        formLayout->setWidget(5, QFormLayout::FieldRole, sbSpeed);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        pushButton = new QPushButton(boxerWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(boxerWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 20);
        verticalLayout->setStretch(1, 5);

        retranslateUi(boxerWidget);
        QObject::connect(leName, SIGNAL(textChanged(QString)), boxerWidget, SLOT(setT(QString)));
        QObject::connect(pushButton_2, SIGNAL(clicked(bool)), boxerWidget, SLOT(loadBoxer()));
        QObject::connect(pushButton, SIGNAL(clicked()), boxerWidget, SLOT(saveBoxer()));

        QMetaObject::connectSlotsByName(boxerWidget);
    } // setupUi

    void retranslateUi(QWidget *boxerWidget)
    {
        boxerWidget->setWindowTitle(QApplication::translate("boxerWidget", "boxerWidget", nullptr));
        label->setText(QApplication::translate("boxerWidget", "Name", nullptr));
        label_2->setText(QApplication::translate("boxerWidget", "Strength", nullptr));
        label_6->setText(QApplication::translate("boxerWidget", "Defense", nullptr));
        label_3->setText(QApplication::translate("boxerWidget", "Hit", nullptr));
        label_5->setText(QApplication::translate("boxerWidget", "Block", nullptr));
        label_4->setText(QApplication::translate("boxerWidget", "Speed", nullptr));
        pushButton->setText(QApplication::translate("boxerWidget", "Save Button", nullptr));
        pushButton_2->setText(QApplication::translate("boxerWidget", "Load Button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class boxerWidget: public Ui_boxerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXERWIDGET_H

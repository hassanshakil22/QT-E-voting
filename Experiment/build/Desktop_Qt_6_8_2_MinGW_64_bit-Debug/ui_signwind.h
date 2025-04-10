/********************************************************************************
** Form generated from reading UI file 'signwind.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNWIND_H
#define UI_SIGNWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_signwind
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *name_eidt;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QPushButton *createacc_btn;

    void setupUi(QDialog *signwind)
    {
        if (signwind->objectName().isEmpty())
            signwind->setObjectName("signwind");
        signwind->resize(624, 358);
        horizontalLayout = new QHBoxLayout(signwind);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(13);
        formLayout->setVerticalSpacing(54);
        formLayout->setContentsMargins(-1, 20, 7, -1);
        label_2 = new QLabel(signwind);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(signwind);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(signwind);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(signwind);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        name_eidt = new QLineEdit(signwind);
        name_eidt->setObjectName("name_eidt");

        formLayout->setWidget(0, QFormLayout::FieldRole, name_eidt);

        lineEdit_2 = new QLineEdit(signwind);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(signwind);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(signwind);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);


        verticalLayout->addLayout(formLayout);

        label = new QLabel(signwind);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        createacc_btn = new QPushButton(signwind);
        createacc_btn->setObjectName("createacc_btn");
        QFont font;
        font.setPointSize(13);
        createacc_btn->setFont(font);

        verticalLayout->addWidget(createacc_btn);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(signwind);

        QMetaObject::connectSlotsByName(signwind);
    } // setupUi

    void retranslateUi(QDialog *signwind)
    {
        signwind->setWindowTitle(QCoreApplication::translate("signwind", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("signwind", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("signwind", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("signwind", "Confirm Password", nullptr));
        label_5->setText(QCoreApplication::translate("signwind", "Password", nullptr));
        label->setText(QString());
        createacc_btn->setText(QCoreApplication::translate("signwind", "Create Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signwind: public Ui_signwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNWIND_H

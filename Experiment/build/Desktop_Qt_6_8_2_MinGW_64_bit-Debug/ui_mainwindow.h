/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *user_line;
    QLabel *log_label;
    QPushButton *signup_btn;
    QPushButton *login_btn;
    QLineEdit *pas_line;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(566, 354);
        MainWindow->setMinimumSize(QSize(0, 324));
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 120, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    font: bold 14px \"Arial\";\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(0, 90, 200);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 60, 150);\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid rgb(50, 100, 200);\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 120, 255);\n"
"    background-color: rgb(225, 245, 255);\n"
"}\n"
"QLabel {\n"
"    font: bold 16px \"Arial\";\n"
"    color: rgb(50, 50, 50);\n"
"}\n"
"#log_label {\n"
"    font: bold 22px \"Arial\";\n"
"    color: white;\n"
"    background-color: rgb(0, 85, 255);\n"
"    padding: 10px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"#MainWindow {\n"
"    background-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        user_line = new QLineEdit(centralwidget);
        user_line->setObjectName("user_line");

        verticalLayout->addWidget(user_line);


        formLayout->setLayout(6, QFormLayout::FieldRole, verticalLayout);

        log_label = new QLabel(centralwidget);
        log_label->setObjectName("log_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(false);
        log_label->setFont(font);
        log_label->setStyleSheet(QString::fromUtf8("#log_label{\n"
"	background-color: rgb(0, 85, 255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        log_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, log_label);

        signup_btn = new QPushButton(centralwidget);
        signup_btn->setObjectName("signup_btn");

        formLayout->setWidget(10, QFormLayout::FieldRole, signup_btn);

        login_btn = new QPushButton(centralwidget);
        login_btn->setObjectName("login_btn");

        formLayout->setWidget(9, QFormLayout::FieldRole, login_btn);

        pas_line = new QLineEdit(centralwidget);
        pas_line->setObjectName("pas_line");
        pas_line->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(8, QFormLayout::FieldRole, pas_line);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(6, QFormLayout::LabelRole, label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 566, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        log_label->setText(QCoreApplication::translate("MainWindow", "Login Page", nullptr));
        signup_btn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

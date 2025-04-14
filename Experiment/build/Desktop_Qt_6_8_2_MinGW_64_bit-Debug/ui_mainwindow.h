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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *log_label;
    QLabel *label;
    QLineEdit *cnic_field;
    QLabel *label_2;
    QLineEdit *pass_field;
    QHBoxLayout *horizontalLayout;
    QPushButton *signup_btn;
    QPushButton *login_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1292, 563);
        MainWindow->setMinimumSize(QSize(0, 324));
        MainWindow->setStyleSheet(QString::fromUtf8("QLineEdit:error {\n"
"    border: 2px solid #ff4444;\n"
"    background-color: #ffeeee;\n"
"}\n"
"QMessageBox {\n"
"    font: 14px \"Segoe UI\";\n"
"}\n"
"\n"
"QMessageBox QLabel#qt_msgbox_label {\n"
"    min-width: 300px;\n"
"}\n"
"QMainWindow {\n"
"    background-color: #f0f0f0; /* Changed to a solid background color */\n"
"}\n"
"\n"
"/* Central container with glass morphism effect */\n"
"#centralwidget {\n"
"    background: rgba(255, 255, 255, 0.15);\n"
"    border-radius: 15px;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    padding: 30px;\n"
"    margin: 50px;\n"
"}\n"
"\n"
"/* Title label */\n"
"#welcome_label {\n"
"    font: bold 28px \"Segoe UI\", Arial;\n"
"    color: black; /* Changed to black */\n"
"    letter-spacing: 2px;\n"
"    text-transform: uppercase;\n"
"    qproperty-alignment: 'AlignCenter';\n"
"    margin-bottom: 30px;\n"
"}\n"
"\n"
"/* Form labels */\n"
"QLabel {\n"
"    font: bold 16px \"Segoe UI\";\n"
"    color: black; /* Changed to black */\n"
"    margin-bottom: 2px;\n"
""
                        "}\n"
"\n"
"/* Input fields with modern styling */\n"
"QLineEdit {\n"
"    background: rgba(255, 255, 255, 0.25);\n"
"    border: 3px solid rgba(255, 255, 255, 0.4);\n"
"    border-radius: 12px;\n"
"    padding: 12px;\n"
"    color: black; /* Changed to black */\n"
"    font-size: 15px;\n"
"    margin-bottom: 2px;\n"
"    selection-background-color: #4facfe;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: rgba(79, 172, 254, 0.8);\n"
"    background: rgba(255, 255, 255, 0.3);\n"
"}\n"
"\n"
"/* Buttons with gradient and animation */\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                              stop:0 #4facfe, stop:1 #00f2fe);\n"
"    color: white;\n"
"    font: bold 16px \"Segoe UI\";\n"
"    border-radius: 8px;\n"
"    padding: 14px 24px;\n"
"    border: none;\n"
"    min-width: 120px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                              stop:0 #00f2fe, stop:1 #4facfe);\n"
"}\n"
"\n"
""
                        "/* Login container */\n"
"#login_container {\n"
"    background: rgba(255, 255, 255, 0.1);\n"
"    border-radius: 15px;\n"
"    padding: 30px;\n"
"    border: 1px solid rgba(255, 255, 255, 0.15);\n"
"}\n"
"\n"
"/* Logo styling */\n"
"#logo_label {\n"
"    qproperty-alignment: 'AlignCenter';\n"
"    margin-bottom: 15px;\n"
"    qproperty-pixmap: url(:/icons/app_logo.png);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(250, 100, 691, 321));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        log_label = new QLabel(verticalLayoutWidget);
        log_label->setObjectName("log_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        font.setItalic(false);
        log_label->setFont(font);
        log_label->setStyleSheet(QString::fromUtf8(""));
        log_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(log_label);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        cnic_field = new QLineEdit(verticalLayoutWidget);
        cnic_field->setObjectName("cnic_field");

        verticalLayout_2->addWidget(cnic_field);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-image: url(:/resources/);\n"
"    background-position: center;\n"
"    background-repeat: no-repeat;\n"
"}"));

        verticalLayout_2->addWidget(label_2);

        pass_field = new QLineEdit(verticalLayoutWidget);
        pass_field->setObjectName("pass_field");
        pass_field->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(pass_field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        signup_btn = new QPushButton(verticalLayoutWidget);
        signup_btn->setObjectName("signup_btn");

        horizontalLayout->addWidget(signup_btn);

        login_btn = new QPushButton(verticalLayoutWidget);
        login_btn->setObjectName("login_btn");
        login_btn->setEnabled(true);
        login_btn->setMinimumSize(QSize(168, 0));
        login_btn->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(login_btn);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1292, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "E-Voting Login Page", nullptr));
        log_label->setText(QCoreApplication::translate("MainWindow", "Welcome to E-Voting System", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CNIC", nullptr));
        cnic_field->setText(QString());
        cnic_field->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Cnic without dashes ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pass_field->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter password here", nullptr));
        signup_btn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

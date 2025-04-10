#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_btn_clicked()
{
    QString username=ui->user_line->text();
    QString password=ui->pas_line->text();

    if(username=="kashan" && password=="abc123"){
        hide();
        log = new Login(this);
        log->show();
    }
    else{
        QMessageBox::critical(this,"Error Login","Invalid username or passowrd");
    }
}


void MainWindow::on_signup_btn_clicked()
{
    hide();
    sign = new signwind(this);
    sign->show();
}


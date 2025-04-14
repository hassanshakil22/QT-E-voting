#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include "database.h"

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
    QString cnic=ui->cnic_field->text();
    QString password=ui->pass_field->text();
    int loginResult = Database::loginUser(cnic, password);

    switch (loginResult) {
    case -1:
        QMessageBox::critical(this, "Error", "Database error occurred.");
        break;
    case 0:
        QMessageBox::warning(this, "Login Failed", "CNIC not found.");
        break;
    case 1:
        QMessageBox::warning(this, "Login Failed", "Incorrect password.");
        break;
    case 2:
        QMessageBox::information(this, "Success", "Login successful!");
        // Proceed to next window
        break;
    }}


void MainWindow::on_signup_btn_clicked()
{
    hide();
    sign = new signwind(this);
    sign->show();
}


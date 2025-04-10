#include "signwind.h"
#include "ui_signwind.h"
#include "mainwindow.h"
#include <QString>
#include <QDate>
#include <QMessageBox>

signwind::signwind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signwind)
{
    ui->setupUi(this);
}

signwind::~signwind()
{
    delete ui;
}

void signwind::on_createacc_btn_clicked()
{
    QString name = ui->name_eidt->text().trimmed();
    QString pass = ui->pass_edit->text();
    QString cnic = ui->cnicedit->text().remove('-'); // Remove dashes
    QDate date = ui->dateEdit->date();

    // Simple validation
    if(name.isEmpty() || pass.isEmpty() || cnic.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required");
        return;
    }
    int age = QDate::currentDate().year() - date.year();
    if(age < 18) {
        QMessageBox::warning(this, "Error", "You must be at least 18 years old");
        return;
    }

    // CNIC length check
    if(cnic.length() != 13) {
        QMessageBox::warning(this, "Error", "CNIC must be 13 digits");
        return;
    }

    // If everything is valid
    QMessageBox::information(this, "Success", "Account created successfully!");
    hide();
    againlog = new MainWindow(this);
    againlog->show();
}


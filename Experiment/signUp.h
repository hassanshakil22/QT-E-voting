#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class signwind;
}
class MainWindow;

class signwind : public QDialog
{
    Q_OBJECT

public:
    explicit signwind(QWidget *parent = nullptr);
    ~signwind();

private slots:
    void on_createacc_btn_clicked();

private:
    Ui::signwind *ui;
    MainWindow *againlog;
};

#endif // SIGNUP_H

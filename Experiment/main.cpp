#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "database.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Step 1: Connect to database
    Database::connectDB();

    // Step 2: Create users table
    Database::createTable();

    MainWindow w;
    w.show();
    return a.exec();
}

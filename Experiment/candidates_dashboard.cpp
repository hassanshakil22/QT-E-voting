#include "candidates_dashboard.h"
#include "ui_candidates_dashboard.h"

candidates_dashboard::candidates_dashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::candidates_dashboard)
{
    ui->setupUi(this);
}

candidates_dashboard::~candidates_dashboard()
{
    delete ui;
}

#include "calci.h"
#include "ui_calci.h"

calci::calci(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calci)
{
    ui->setupUi(this);
}

calci::~calci()
{
    delete ui;
}

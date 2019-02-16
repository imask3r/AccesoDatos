#include "monitor.h"
#include "ui_monitor.h"
#include "xmlestados.h"

monitor::monitor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::monitor)
{
    ui->setupUi(this);
}

monitor::~monitor()
{
    delete ui;
}


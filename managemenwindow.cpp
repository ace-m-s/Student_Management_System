#include "managemenwindow.h"
#include "ui_managemenwindow.h"

ManagemenWindow::ManagemenWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ManagemenWindow)
{
    ui->setupUi(this);
}

ManagemenWindow::~ManagemenWindow()
{
    delete ui;
}


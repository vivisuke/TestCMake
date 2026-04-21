#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "ReplaceDialog.h"

Global g;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowClass)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

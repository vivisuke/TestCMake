#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	connect(ui->action_Exit, &QAction::triggered, this, &MainWindow::onAction_Exit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::onAction_Exit() {
	this->close(); // メインウィンドウを閉じる
}

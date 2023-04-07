#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ETWWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_etwWidget = new ETWWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    m_etwWidget->show();
}


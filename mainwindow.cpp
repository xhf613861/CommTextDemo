#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ETWWidget.h"
#include "MoreEffective32.h"

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


void MainWindow::on_pushButton_2_clicked()
{
    testMoreEffective32();
}

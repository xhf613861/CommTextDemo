#include "ETWWidget.h"
#include "ui_ETWWidget.h"
#include <thread>
#include <QThread>
#include <processthreadsapi.h>

ETWWidget::ETWWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ETWWidget)
{
    ui->setupUi(this);
}

ETWWidget::~ETWWidget()
{
    delete ui;
}

void ETWWidget::on_pushButton_clicked()
{
    int result = 0;
    std::thread th = std::thread([&result]() {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        result = GetCurrentThreadId();
    });

    th.join();

    ui->lineEdit->setText(QString::number(GetCurrentThreadId()));
    ui->lineEdit_2->setText(QString::number(result));
}


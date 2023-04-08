
#include "ETWWidget.h"
#include "ui_ETWWidget.h"
#include <thread>
#include <QThread>

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
//        QElapsedTimer ElapsedTimer;
//        ElapsedTimer.start();
//        while (ElapsedTimer.elapsed() < 1000) {
//        }
        result = quintptr(QThread::currentThreadId());
    });

    th.join();

    ui->lineEdit->setText(QString::number(quintptr(QThread::currentThreadId())));
    ui->lineEdit_2->setText(QString::number(result));
}


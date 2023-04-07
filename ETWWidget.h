#ifndef ETWWIDGET_H
#define ETWWIDGET_H

#include <QWidget>

namespace Ui {
class ETWWidget;
}

class ETWWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ETWWidget(QWidget *parent = nullptr);
    ~ETWWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ETWWidget *ui;
};

#endif // ETWWIDGET_H

#include "mainwindow.h"

#include <QApplication>
#include "DynamicTest.h"
#include "MoreEffective31.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    testDy();
//    testMoreEffect31();

    MainWindow w;
    w.show();
    return a.exec();
}

#include "mainwindow.h"

#include <QApplication>
#include "DynamicTest.h"
#include "MoreEffective31.h"
#include "MoreEffective32.h"
#include "CPPPrimerDemo/CPPPrimerDemo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    testDy();
//    testMoreEffect31();
    testCPPPrimerDemo();

    MainWindow w;
    w.show();
    return a.exec();
}

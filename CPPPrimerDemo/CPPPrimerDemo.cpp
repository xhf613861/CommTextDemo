#include "CPPPrimerDemo.h"

#include <QDebug>

CPPPrimerDemo::CPPPrimerDemo()
{

}

void testCPPPrimerDemo()
{
    qDebug() << compare<int>(1, 2);
    qDebug() << compare<double>(1.2, 2.2);
    qDebug() << compare<std::string>("aaa", "xxx");
    qDebug() << compare<5, 2>("xxxx", "a");

}

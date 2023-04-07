
#include "DynamicTest.h"
#include <QDebug>
#include <QElapsedTimer>
#include <iostream>
using namespace std;

class Class1{};
class Class2:public Class1{};
void fn0();
int fn1(int n);

void testDy()
{



    std::vector<DyParent *> test;
//    int a = 10;
//        int* b = &a;
//        float c;
//        double d;

//        cout << typeid(a).name() << endl;cout << typeid(b).name() << endl;
//        cout << typeid(c).name() << endl;
//        cout << typeid(d).name() << endl;
//        cout << typeid(Class1).name() << endl;
//        cout << typeid(Class2).name() << endl;
//        cout << typeid(fn0).name() << endl;
//        cout << typeid(fn1).name() << endl;
//        cout << typeid(typeid(a).name()).name() << endl;

//    DyParent *tmp = nullptr;
//    DyParent *tmp1 = new DyChildren1();
//    DyParent *tmp2 = new DyChildren2();
//    std::string aaaa = typeid(tmp).name();
//    qDebug() <<  QString::fromStdString(typeid(tmp).name());
//    qDebug() <<  QString::fromStdString(typeid(*tmp1).name());
//    qDebug() <<  QString::fromStdString(typeid(*tmp2).name());

//    for (long long i = 0; i < 10000 * 10000; ++i) {
//        test.push_back(new DyChildren1());
//    }
//    for (int i = 0; i < 10000; ++i) {
//        test.push_back(new DyChildren2());
//    }

    QElapsedTimer ElapsedTimer;
    ElapsedTimer.start();
    for (size_t i = 0; i < 1948; ++i) {
        DyParent *dytmp = new DyChildren1;
        for (size_t i = 0; i < 19480; ++i) {
//            const char *name1 = typeid(*dytmp).name();
//            QString tmp = QString::fromStdString(name1);
//            QString tmp1 = QString::fromStdString("xxxxx");
//            const char *name1 = typeid(*dytmp).name();
            dynamic_cast<DyChildren1 *>(dytmp)->fun();
    //        qDebug() << tmp;

            int a = 1;
            int b = a;
        }
        delete dytmp;
    }


    qDebug() << " time used: " << ElapsedTimer.elapsed();
}

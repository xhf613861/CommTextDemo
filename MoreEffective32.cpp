#include "MoreEffective32.h"

MoreEffective32::MoreEffective32()
{

}

void testMoreEffective32()
{
    for (int i = 0; i < 1024; ++i) {
//        MoreEffective32 *mm = new MoreEffective32;
//        delete  mm;
        Parent *tmp = new MoreEffective32;
//        delete  tmp;
    }
}

MyClass::~MyClass() {
    int a = 1;
    int b = a;
    qDebug() << "~MyClass";
}

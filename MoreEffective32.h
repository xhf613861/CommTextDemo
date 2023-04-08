#ifndef MOREEFFECTIVE32_H
#define MOREEFFECTIVE32_H

#include <QDebug>

void testMoreEffective32();

class MyClass
{
public:
    MyClass() {
        qDebug() << "MyClass gouzao" << m_buff[0];
    }
    ~MyClass();

    char m_buff[1024] = {'a'};
};

class Parent
{
public:
    Parent(){}
    ~Parent(){
        qDebug() << "  ~Parent  ";
    }
};

class MoreEffective32 : public Parent
{
public:
    MoreEffective32();
//    ~MoreEffective32(){
//        qDebug();
//    }

    MyClass m_name;
};

#endif // MOREEFFECTIVE32_H

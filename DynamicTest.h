#ifndef DYNAMICTEST_H
#define DYNAMICTEST_H


void testDy();

class DyParent
{
public:
    DyParent() {

    }

    virtual ~DyParent(){}
};

class DyChildren1 : public DyParent
{
public:
    void fun() {}
};

class DyChildren2 : public DyParent
{

};

#endif // DYNAMICTEST_H

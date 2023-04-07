#ifndef MOREEFFECTIVE31_H
#define MOREEFFECTIVE31_H

#include <QDebug>

class SpaceShip;
class SpaceStation;

void testMoreEffect31();

class GameObject
{
public:
    GameObject();

    virtual void colide(GameObject &otherObject) {
        qDebug() << " GameObject colide GameObject ";
    }
    virtual void colide(SpaceShip &otherObject) {
        qDebug() << " GameObject colide SpaceShip ";
    }
    virtual void colide(SpaceStation &otherObject) {
        qDebug() << " GameObject colide SpaceStation ";
    }
};

class SpaceShip : public GameObject
{
public:
    SpaceShip(){}

    virtual void colide(GameObject &otherObject) {
        qDebug() << " SpaceShip colide GameObject ";
        otherObject.colide(*this);
    }
    virtual void colide(SpaceShip &otherObject) {
        qDebug() << " SpaceShip colide SpaceShip ";
    }
    virtual void colide(SpaceStation &otherObject) {
        qDebug() << " SpaceShip colide SpaceStation ";
    }
};

class SpaceStation : public GameObject
{
public:
    SpaceStation(){}

    virtual void colide(GameObject &otherObject) {
        qDebug() << " SpaceStation colide GameObject ";
    }
    virtual void colide(SpaceShip &otherObject) {
        qDebug() << " SpaceStation colide SpaceShip ";
    }
    virtual void colide(SpaceStation &otherObject) {
        qDebug() << " SpaceStation colide SpaceStation ";
    }
};

#endif // MOREEFFECTIVE31_H

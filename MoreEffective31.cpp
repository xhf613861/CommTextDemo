#include "MoreEffective31.h"

GameObject::GameObject()
{

}

void testMoreEffect31()
{
    SpaceShip ship;
    SpaceStation station;
    GameObject &refship = ship;
    GameObject &refstation = station;
    refship.colide(refstation);
}

#include "Weapon.hpp"

Weapon:: Weapon(Point2d* _p,int _power,int _c):p(_p),power(_power),cartridge(_c){}

Weapon:: ~Weapon(){}

Point2d* Weapon::getP() const
{
    return p;
}

void Weapon::setP(Point2d* _p)
{
    p = _p;
}

int Weapon::getPower() const
{
    return power;
}

int Weapon::getCartridge() const
{
    return cartridge;
}

std::ostream& operator<<(std::ostream& os,const Weapon& w){
    os << "Weapon : location=" <<w.p << "power = " << w.power << "cartridge = " << w.cartridge << std::endl;
    return os;
}

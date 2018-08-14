#include "Missile.hpp"

Missile::Missile(Point2d* p):Weapon(p,100,1){}

Missile::~Missile(){}

std::ostream& operator<<(std::ostream& os,const Missile& w){
    os << "Missile : location=" <<w.getP() << "power = " << w.getPower() << "cartridge = " << w.getCartridge() << std::endl;
    return os;
}
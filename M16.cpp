#include "M16.hpp"

M16::M16(Point2d* p):Weapon(p,50,1){}

M16::~M16(){}

std::ostream& operator<<(std::ostream& os,const M16& w){
    os << "M16 : location=" <<w.getP() << "power = " << w.getPower() << "cartridge = " << w.getCartridge() << std::endl;
    return os;
}
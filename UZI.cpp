#include "UZI.hpp"

UZI::UZI(Point2d* p):Weapon(p,40,3){}

UZI::~UZI(){}

std::ostream& operator<<(std::ostream& os,const UZI& w){
    os << "M16 : location=" <<w.getP() << "power = " << w.getPower() << "cartridge = " << w.getCartridge() << std::endl;
    return os;
}
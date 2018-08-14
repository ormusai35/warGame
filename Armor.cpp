#include "Armor.hpp"

Armor:: Armor(Point2d* _p, double _protection):p(_p),protection(_protection){}

Armor:: ~Armor(){}

Point2d* Armor::getP() const
{
    return p;
}

void Armor::setP(Point2d* _p)
{
    p = _p;
}

double Armor::getProtection() const
{
    return protection;
}

std::ostream& operator<<(std::ostream& os,const Armor& a){
    os << "Armor : location=" <<a.p << "protection = " << a.protection << std::endl;
    return os;
} 
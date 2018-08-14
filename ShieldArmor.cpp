#include "ShieldArmor.hpp"

ShieldArmor::ShieldArmor(Point2d* _p , double protection):Armor(_p, protection){}

ShieldArmor::~ShieldArmor(){}

std::ostream& operator<<(std::ostream& os,const ShieldArmor& sa){
    os << "ShieldArmor : location=" <<sa.getP() << "protection = " << sa.getProtection() << std::endl;
    return os;
}
#include "BodyArmor.hpp"

BodyArmor::BodyArmor(Point2d* _p, double protection):Armor(_p,protection){}

BodyArmor::~BodyArmor(){}

std::ostream& operator<<(std::ostream& os , const BodyArmor& ba){
    os << "BodyArmor : location=" <<ba.getP() << "protection = " << ba.getProtection() << std::endl;
    return os;
}
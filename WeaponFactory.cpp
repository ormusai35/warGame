#include "WeaponFactory.hpp"

Weapon* WeaponFactory::getWeapon(std::string weapon, Point2d* point){
    Weapon* w;
    if (weapon == "M16") w = new M16 (point);
    else if (weapon == "UZI") w = new UZI (point);
    else w = new Missile(point);
    
    return w;
    
}
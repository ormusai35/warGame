#include <string>
#include "M16.hpp"
#include "UZI.hpp"
#include "Missile.hpp"

#pragma once

class WeaponFactory{
    
    public:
        /**
        The function selects the correct weapon
        @param string weapon , point location
        @return new correct weapon
        */
        static Weapon* getWeapon (std::string , Point2d*);    
};
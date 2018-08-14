#include <string>
#include "NormalSoldier.hpp"
#include "Sniper.hpp"
#include "Paramedic.hpp"
#include "WeaponFactory.hpp"

#pragma once

class SoldierFactory{
    
    public:
        /**
        The function selects the correct soldier
        @param string soldier , point location , string weapon , int id
        @return new correct soldier
        */
        static Soldier* getSoldier (std::string , Point2d* , std::string , int);    
};
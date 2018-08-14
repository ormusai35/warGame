#include <string>
#include "ShieldArmor.hpp"
#include "BodyArmor.hpp"

#pragma once

class ArmorFactory{
    
    public:
    
        /**
        The function selects the correct armor
        @param string armor , string pritection , point location
        @return new correct Armor
        */
        static Armor* getArmor (std::string ,std::string ,Point2d*);    
};
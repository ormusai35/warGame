#include "Armor.hpp"

#pragma once 

class BodyArmor:public Armor {
    
public:
    /*Constructor*/
    BodyArmor(Point2d* , double);
    /*Destructor*/
    virtual ~BodyArmor();
    
    /*Funcuion that prints the BodyArmor*/
    friend std::ostream& operator<<(std::ostream& ,const BodyArmor&);
};
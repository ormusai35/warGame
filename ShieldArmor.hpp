#include "Armor.hpp"

#pragma once 

class ShieldArmor: public Armor{

public:
    /*Constructor*/
    ShieldArmor(Point2d* , double);
    /*Destructor*/
    virtual ~ShieldArmor();
    
    /*Funcuion that prints the ShieldArmor*/
    friend std::ostream& operator<<(std::ostream&,const ShieldArmor&);
};
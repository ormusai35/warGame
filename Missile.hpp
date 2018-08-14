#include "Weapon.hpp"

#pragma once

class Missile: public Weapon{

public:
    /*Constructor*/
    Missile(Point2d*);
    /*Destructor*/
    virtual ~Missile();
    
    /*Funcuion that prints the missile*/
    friend std::ostream& operator<<(std::ostream&,const Missile&);
    
};
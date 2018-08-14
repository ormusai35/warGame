#include "Weapon.hpp"

#pragma once

class UZI: public Weapon{

public: 
    /*Constructor*/
    UZI(Point2d*);
    /*Destructor*/
    virtual ~UZI();
    
    /*Funcuion that prints the UZI*/
    friend std::ostream& operator<<(std::ostream&,const UZI&);
    
};
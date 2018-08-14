#include "Weapon.hpp"

#pragma once

class M16: public Weapon{

public: 
    /*Constructor*/
    M16(Point2d*);
    /*Destructor*/
    virtual ~M16();
    
    /*Funcuion that prints the M16*/
    friend std::ostream& operator<<(std::ostream&,const M16&);
    
};
#include "Point2d.hpp"
#include <iostream>
#pragma once

class Weapon {
    
    Point2d* p;
    int power;
    int cartridge;
    
public:
    /*Constructor*/
    Weapon(Point2d*,int,int);
    /*Destructor*/
    virtual ~Weapon() = 0;
    /*Return the current location of the weapon*/
    Point2d* getP() const;
    /*Updating new location*/
    void setP(Point2d*);
    /*Return the power of the weapon*/
    int getPower() const;
    /*Return the number of balls in cartridge of the weapon*/
    int getCartridge() const;
    
    /*Funcuion that prints the weapon*/
    friend std::ostream& operator<<(std::ostream&,const Weapon&);
    
};
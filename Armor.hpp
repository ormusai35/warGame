#include "Point2d.hpp"
#include <iostream>

#pragma once

class Armor{
    
    Point2d* p;
    double protection;

public:
    /*Constructor*/
    Armor(Point2d*,double);
    /*Destructor*/
    virtual ~Armor() = 0;
    /*Return the current location of the armor*/
    virtual Point2d* getP() const;
    /*Updating new location*/
    virtual void setP(Point2d*);
    /*Returns the strength of the protection*/
    virtual double getProtection() const;
    
    /*Funcuion that prints the armor*/
    friend std::ostream& operator<<(std::ostream&,const Armor&);

};
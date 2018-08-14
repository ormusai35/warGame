#include "Point2d.hpp"
#include <iostream>

#pragma once

class SolidObj{
     int height,width;
     Point2d* p;
     
public:
    /*Constructor*/
    SolidObj(int,int,Point2d*);
    /*Destructor*/
    virtual ~SolidObj() =0;
    /*Return the current location of the solid object*/
    Point2d* getP() const;
    
    /*Funcuion that prints the solid object*/
    friend std::ostream& operator<<(std::ostream&,const SolidObj&);
  
};
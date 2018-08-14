#include "SolidObj.hpp"

#pragma once 

class Tree : public SolidObj{
  
public:
    /*Constructor*/
    Tree(int,int,Point2d*);
    /*Destructor*/
    virtual ~Tree();
    
};
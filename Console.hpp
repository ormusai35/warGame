#pragma once 
#include <iostream>

#include "Ioutput.hpp"

class Console : public Ioutput{
  
public: 

    /*Fanction that print to the console*/
    virtual void print(std::string);
    
};
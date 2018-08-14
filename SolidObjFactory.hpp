#include "Tree.hpp"
#include "Point2d.hpp"
#include <string>
#include <iostream>

#pragma once

class SolidObjFactory{
    
    public:
        /**
        The function selects the correct solid object
        @param string solid object , string height , string width , point location
        @return new correct solid object
        */
        static SolidObj* getSolidObj(std::string , std::string ,std::string , Point2d*);  
};
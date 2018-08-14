#include "SolidObjFactory.hpp"

SolidObj* SolidObjFactory::getSolidObj(std::string solid , std::string _height ,std::string _width , Point2d* point){
    
    int height = std::stoi(_height);
    int width = std::stoi(_width);
    
    Tree* t = new Tree (height , width , point);
    return t;
}
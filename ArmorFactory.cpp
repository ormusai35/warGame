#include "ArmorFactory.hpp"

Armor* ArmorFactory::getArmor (std::string armor ,std::string _protection ,Point2d* point){

    Armor* a;
    double protection = std::stoi(_protection);
    
    if (armor == "BodyArmor"){
        a = new BodyArmor(point , protection);
    }
    else a = new ShieldArmor(point , protection);
    
    return a;
}

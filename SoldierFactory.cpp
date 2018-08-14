#include "SoldierFactory.hpp"

Soldier* SoldierFactory:: getSoldier (std::string soldier , Point2d* point , std::string weapon , int numId){
    
    Soldier* s;
    Weapon* w;
    
    if (weapon == "NULL"){
        s = new Paramedic(numId,point);
    }
    else{
        w = WeaponFactory::getWeapon(weapon,point);
        
        if (soldier == "normal"){
            s = new NormalSoldier(numId,point,w);
        }
        else{
            s = new Sniper (numId,point,w);
        }
    }
    return s;
}


#include "UnitMat.hpp"

UnitMat::UnitMat():isAvailable(false){}

void UnitMat::addSoldier(Soldier* s){
    soldiers.push_back(s);
}

void UnitMat::addWeapon(Weapon* w){
    weapons.push_back(w);
}

void UnitMat::addArmor(Armor* a){
    armors.push_back(a);
}

void UnitMat::addSolid(SolidObj* s){
    solids.push_back(s);
}

std::vector<Soldier*> UnitMat::getSoldiers() const{
    return soldiers;
}

std::vector<Weapon*> UnitMat::getWeapons() const{
    return weapons;
}

std::vector<Armor*> UnitMat::getArmors() const{
    return armors;
}
std::vector<SolidObj*> UnitMat::getSolids() const{
    return solids;
}


bool UnitMat::getAvailable() const{
    return isAvailable;
}

void UnitMat::confirmAvailable(){
    if (!isAvailable) isAvailable = true;
}
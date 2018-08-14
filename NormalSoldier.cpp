#include "NormalSoldier.hpp"
#include <math.h>


NormalSoldier::NormalSoldier(int team ,Point2d* _p,Weapon* _w):Soldier(100.0,2.0,team,_p,_w){}

NormalSoldier::~NormalSoldier(){}

void NormalSoldier::Attack(IAction* action,Soldier* other)
{
    action->visit(this,other);
}

double NormalSoldier::getOriginalLife() const{
    return 100;
}

std::ostream& operator<<(std::ostream& os,const NormalSoldier& s){
    os << "NormalSoldier : location=" <<s.getLocation() << std::endl;
    return os;
} 
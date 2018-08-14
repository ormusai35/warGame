#include "Sniper.hpp"
#include <math.h>


Sniper::Sniper(int team,Point2d* _p,Weapon* _w):Soldier(80.0,2.0,team,_p,_w){}

Sniper::~Sniper(){}

void Sniper::Attack(IAction* action,Soldier* other)
{
    action->visit(this,other);
}

double Sniper::getOriginalLife() const{
    return 80;
}

std::ostream& operator<<(std::ostream& os,const Sniper& s){
    os << "Sniper : location=" <<s.getLocation() << std::endl;
    return os;
} 
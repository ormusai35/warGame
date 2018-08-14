#include "Paramedic.hpp"
#include <math.h>


Paramedic::Paramedic(int team,Point2d* _p):Soldier(120.0,4.0,team,_p,nullptr){}

Paramedic::~Paramedic(){}

void Paramedic::Attack(IAction* action,Soldier* other)
{
    action->visit(this,other);
}
void Paramedic::heal (Soldier* s){
    s->setLife(s->getOriginalLife());
}
double Paramedic::getOriginalLife() const{
    return 120;
}

std::ostream& operator<<(std::ostream& os,const Paramedic& s){
    os << "Paramedic : location=" <<s.getLocation() << std::endl;
    return os;
} 
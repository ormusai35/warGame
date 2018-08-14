#include "Soldier.hpp"

Soldier::Soldier(double _life, double Wspeed,int team,Point2d* location,Weapon* _w):life(_life),walking_speed(Wspeed),numTeam(team),MyId(id++),current_location(location),weapon(_w),armor(nullptr){}

Soldier::~Soldier(){}

double Soldier::getLife() const
{
    return life;
}

void Soldier::setLife(double _life)
{
    life = _life;
}

Point2d* Soldier::getLocation() const
{
    return current_location;
}

void Soldier::setLocation(Point2d* _p)
{
    current_location = _p;
}

Armor* Soldier::getArmor() const
{
    return armor;
}

void Soldier::setArmor(Armor* _a)
{
    armor = _a;
}

Weapon* Soldier::getWeapon() const
{
    return weapon;
}

void Soldier::setWeapon(Weapon* _w)
{
    weapon = _w;
}

int Soldier::getWs() const{
    return walking_speed;
}

void Soldier::walk(Point2d* destination){
    current_location = destination;
}

int Soldier::getIdTeam() const{
    return numTeam;
}

int Soldier::getID() const{
    return MyId;
}

int Soldier::id = 0;

std::ostream& operator<<(std::ostream& os,const Soldier& s){
    os << "Soldier : location=" << s.current_location << std::endl;
    return os;
} 
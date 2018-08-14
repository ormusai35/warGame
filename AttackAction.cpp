#include "AttackAction.hpp"
#include <iostream>


void AttackAction::visit(NormalSoldier* ns,Soldier* other)
{
    srand(time(NULL));
    double temp_distance = ns->getLocation()->distance(other->getLocation());
    int dist = int(temp_distance);
    int randNum = rand() % dist + 1;
    std::cout << "Normal :  temp_distance: "<<temp_distance<<" ,dist: "<<dist<<" ,randNum:"<< randNum<<std::endl;
    if (randNum != 1){
        return;
    }
    std::cout << "Attack!!!!" << std::endl;
    if (other->getArmor() != nullptr){
        Missile* m = dynamic_cast<Missile*>(ns->getWeapon());
        BodyArmor* b = dynamic_cast<BodyArmor*>(other->getArmor());
        if (!m || !b ){
            other->setLife(other->getLife()-((ns->getWeapon()->getPower())*(other->getArmor()->getProtection())));
        }
        else{
            other->setLife(other->getLife()-(ns->getWeapon()->getPower()));
        }
    }
    else{
        other->setLife(other->getLife()-(ns->getWeapon()->getPower()));
    }
    
    if (other->getLife() <= 0) {
       // killSoldier(other);
    }
        
}


void AttackAction::visit(Sniper* ss,Soldier* other)
{
    srand(time(NULL));
    double temp_distance = ss->getLocation()->distance(other->getLocation());
    int dist = int(temp_distance);
    int randNum = rand() % dist + 1;
    std::cout << "Sniper :  temp_distance: "<<temp_distance<<" ,dist: "<<dist<<" ,randNum:"<< randNum<<std::endl;
    if (randNum == 1 && dist !=1){
        return;
    }
    std::cout << "Attack!!!!" << std::endl;
    if (other->getArmor() != nullptr){
        Missile* m = dynamic_cast<Missile*>(ss->getWeapon());
        BodyArmor* b = dynamic_cast<BodyArmor*>(other->getArmor());
        if (!m || !b ){
            other->setLife(other->getLife()-((ss->getWeapon()->getPower())*(other->getArmor()->getProtection())));
        }
        else{
            other->setLife(other->getLife()-(ss->getWeapon()->getPower()));
        }
    }
    else{
        other->setLife(other->getLife()-(ss->getWeapon()->getPower()));
    }
    
    if (other->getLife() <= 0) {
      //  killSoldier(other); 
    }
}

void AttackAction::visit(Paramedic* ps,Soldier* other)
{
    if (other-> getArmor() == nullptr){
        std::cout<<"Paramedic: Attack!!"<<std::endl;
        other -> setLife(other->getLife()-10);
        
        if (other->getLife() <= 0) {
            // killSoldier(other);
        }
    }
}
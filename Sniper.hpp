#include "Soldier.hpp"
#pragma once

class Sniper: public Soldier{
    
     
public:
    /*Constructor*/
    Sniper(int,Point2d*,Weapon*);
    /*Destructor*/
    virtual ~Sniper();
     /**
    The function is responsible for attacking the sniper soldier
    @param IAction* is interface Interface to the attacker , Soldier* This is the soldier who is attacked
    */
    virtual void Attack(IAction*,Soldier*);
    /*Return the soldier's original life*/
    virtual double getOriginalLife() const;       
    
     /*Funcuion that prints the normal soldier*/
    friend std::ostream& operator<<(std::ostream&,const Sniper&);
};
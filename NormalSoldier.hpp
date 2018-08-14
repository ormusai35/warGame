#include "Soldier.hpp"
#pragma once

class NormalSoldier: public Soldier{
    
     
public:
    /*Constructor*/
    NormalSoldier(int,Point2d*,Weapon*);
    /*Destructor*/
    virtual ~NormalSoldier();
    
    /**
    The function is responsible for attacking the normal soldier
    @param IAction* is interface Interface to the attacker , Soldier* This is the soldier who is attacked
    */
    virtual void Attack(IAction*,Soldier*);
    /*Return the soldier's original life*/
    virtual double getOriginalLife() const;
    
     /*Funcuion that prints the normal soldier*/
    friend std::ostream& operator<<(std::ostream&,const NormalSoldier&);
};
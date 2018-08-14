#include "Soldier.hpp"
#pragma once

class Paramedic: public Soldier{
    
     
public:
    /*Constructor*/
    Paramedic(int,Point2d*);
    /*Destructor*/
    virtual ~Paramedic();
    /**
    The function is responsible for attacking the paramedic soldier
    @param IAction* is interface Interface to the attacker , Soldier* This is the soldier who is attacked
    */
    virtual void Attack(IAction*,Soldier*);
    void heal (Soldier*);
    /*Return the soldier's original life*/    
    virtual double getOriginalLife() const;
    
    /*Funcuion that prints the normal soldier*/
    friend std::ostream& operator<<(std::ostream&,const Paramedic&);
         
};
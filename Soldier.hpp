#include "Point2d.hpp"
#include "Weapon.hpp"
#include "Armor.hpp"
#include "IAction.hpp"
#include <iostream>

#pragma once

class Soldier {

     double life;
     double OriginalLife;
     double walking_speed;
     double attack_capability;
     int numTeam;
     static int id;
     int MyId;
     Point2d* current_location;
     Weapon* weapon;
     Armor* armor;
     
public:
     /*Constructor*/
     Soldier(double,double,int,Point2d*,Weapon*);
     /*Destructor*/
     virtual ~Soldier();
     
     /**
     The function is responsible for attacking the soldier
     @param IAction* is interface Interface to the attacker , Soldier* This is the soldier who is attacked
     */
     virtual void Attack(IAction*,Soldier*) = 0;
     
     /*Return the life of the soldier*/
     virtual double getLife() const;
     
     /*Updating the life soldier*/
     virtual void setLife(double);
     
     /*Return the current location of the soldier*/
     virtual Point2d* getLocation() const;
     
     /*Updating new location*/
     virtual void setLocation(Point2d*);
     
     /*Return the soldier's armor*/
     virtual Armor* getArmor() const;
     
     /*Updating soldier's armor*/
     virtual void setArmor(Armor*);
     
     /*Return the soldier's weapon*/
     virtual Weapon* getWeapon() const;
     
     /*Updating soldier's weapon*/
     virtual void setWeapon(Weapon*);
     
     /*Return the soldier's walking speed*/
     virtual int getWs()const ;
     
     /**
     The soldier's walking function
     @param A location to reach
     */
     virtual void walk(Point2d*);
     
     /*Return the soldier's team*/
     virtual int getIdTeam() const;
     
     /*Return the soldier's original life*/
     virtual double getOriginalLife() const =0;
     
     /*Return the soldier's id*/
     virtual int getID() const;
     
     /*Funcuion that prints the soldier*/
     friend std::ostream& operator<<(std::ostream&,const Soldier&);
};


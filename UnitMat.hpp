#include "Soldier.hpp"
#include "Weapon.hpp"
#include "Armor.hpp"
#include "SolidObj.hpp"
#include "Point2d.hpp"
#include <vector>

#pragma once

class UnitMat{
    
    std::vector<Soldier*> soldiers ;
    std::vector<Weapon*> weapons ;
    std::vector<Armor*> armors ;
    std::vector<SolidObj*> solids ;
    
    bool isAvailable;
    
    public :
        /*Constructor*/
        UnitMat();
        /*add new soldier*/
        void addSoldier(Soldier*);
        /*add new solid object*/
        void addSolid(SolidObj*);
        /*add new weapon*/
        void addWeapon(Weapon*);
        /*add new armor*/
        void addArmor(Armor*);
        /*Return the vector of soldiers*/
        std::vector<Soldier*> getSoldiers() const;
        /*Return the vector of weapons*/
        std::vector<Weapon*> getWeapons() const;
        /*Return the vector of armors*/
        std::vector<Armor*> getArmors() const;
        /*Return the vector of solid objects*/
        std::vector<SolidObj*> getSolids() const;
        /*Return if an object exists within the unit */
        bool getAvailable() const;
        /*Make sure the function is marked as available*/
        void confirmAvailable();
};
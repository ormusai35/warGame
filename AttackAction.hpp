#include "IAction.hpp"
#include "NormalSoldier.hpp"
#include "Sniper.hpp"
#include "Paramedic.hpp"
#include "UZI.hpp"
#include "Missile.hpp"
#include "M16.hpp"
#include "BodyArmor.hpp"
#include "ShieldArmor.hpp"
#include <stdlib.h>
#include <time.h>

#pragma once 

class AttackAction:public IAction{

/**
this class represents the design pattern visitor.
Each of fanction belong to the soldier's specific attack.
*/

public:
    virtual void visit(NormalSoldier*,Soldier*);
    virtual void visit(Paramedic*,Soldier*);
    virtual void visit(Sniper*,Soldier*);
        
};
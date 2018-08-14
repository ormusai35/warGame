class NormalSoldier;
class Paramedic;
class Sniper;
class Soldier;

#pragma once

/*Interface responsible for a soldier's attack*/

class IAction{
    
public:
  
    virtual void visit(NormalSoldier*,Soldier*) = 0;
    virtual void visit(Paramedic*,Soldier*) = 0;
    virtual void visit(Sniper*,Soldier*) = 0;
    
};

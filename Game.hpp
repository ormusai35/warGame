#pragma once
#include "CSVinput.hpp"
#include "Ioutput.hpp"
#include "AttackAction.hpp"
#include "DataBase.hpp"
#include "Console.hpp"

class Game {
    
    Iinput* in;
    Ioutput* out;
    DataBase* db;
    IAction* action;
    
    
public:
    /*Starting the game*/
    void startGame();
    /*Finds objects that are closest to me and to act according to the object*/
    void findObjAndAction(Soldier*);
    /*The soldier's walking function*/
    void walkAbility(Soldier*,Point2d*);
    /*The Fanction that kill the soldier and the player*/
    void killSoldier(Soldier*);
};
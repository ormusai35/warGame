#include <vector>
#include "Soldier.hpp"
#include <string>

#pragma once

class Player{

    size_t n;
    int teamId;
    std::string kindOfPlayer;
    std::vector<Soldier*> soldiers;
    std::string strategy;
  
public:
    /*Constructor*/
    Player(size_t,int,std::string,std::string);
    /*Destructor*/
    ~Player();
    /*Add new soldier*/
    void addSoldier(Soldier*);
    /*Return the player's id*/
    int getId() const;
    /*Return the vector of player's soldiers*/
    std::vector<Soldier*> getSoldiers() const;
    /*Return the kind of player*/
    std::string whoAmI() const;
};
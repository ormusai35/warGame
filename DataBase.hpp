#pragma once 
#include <vector>
#include "Player.hpp"
#include "UnitMat.hpp"
#include <vector> 

#pragma once

class DataBase {
    
std::vector<Player*> players;
std::vector<std::vector<UnitMat*>> mat;
    
public :
    /*Constructor*/
    DataBase(size_t ,size_t);
    /*Update the players*/
    void setPlayers(std::vector<Player*>);
    /*Return the vector of the players*/
    std::vector<Player*> getPlayers() const;
    /*Update the matrix of unitMat(board of game)*/
    void setMat(std::vector<std::vector<UnitMat*>>);
    /*Return the board*/
    std::vector<std::vector<UnitMat*>> getMat() const;
};
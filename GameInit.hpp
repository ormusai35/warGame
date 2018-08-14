
#include <iostream>
#include "UnitMat.hpp"
#include <string>
#include "Player.hpp"
#include "NormalSoldier.hpp"
#include "Sniper.hpp"
#include "Paramedic.hpp"
#include "M16.hpp"
#include "UZI.hpp"
#include "Missile.hpp"
#include "SoldierFactory.hpp"
#include "DataBase.hpp"
#include "WeaponFactory.hpp"
#include "ArmorFactory.hpp"
#include "SolidObjFactory.hpp"
#include <stdexcept>


#pragma once 

class GameInit {
    
    size_t rows,cols;
    size_t numOfPlayers;
    size_t numOfSoldiers;
    DataBase* db;
    std::vector<std::vector<Point2d*>> steps;
    
public:
    /*Update the matrix of board*/
    void setMat(std::string,std::string);
    /*Update number of players*/
    void setNumOfPlayers(std::string);
    /*Return the number of players*/
    size_t getNumOfPlayers() const;
    /*Update number of soldiers*/
    void setNumOfSoldiers(std::string);
    /*Return the number of soldiers*/
    size_t getNumOfSoldiers() const;
    /*Update the soldiers and the players*/
    void setPlayersSoldiers(std::vector<std::string> , std::vector<std::string>);
    /*Update the object in the game*/
    void setObjects(std::vector<std::string>);
    /*split the string to vector of strings per words*/
    std::vector<std::string> split(std::string);
    /*casting point from string*/
    Point2d* pointFromString (std::string str);
    /*Update the data base*/
    void setDataBase(DataBase*);
    /*Return the data base*/
    DataBase* getDataBase() const;
    /*Update the number step of humen players*/
    void setSteps(std::vector<std::string>);
    /*Return the vector of steps in game*/
    std::vector<std::vector<Point2d*>> getSteps() const;
    
};

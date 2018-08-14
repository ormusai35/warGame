#pragma once 

#include <iostream>
#include "GameInit.hpp"
#include "Iinput.hpp"
#include <fstream>
#include <string>
#include <vector>

class CSVinput :public Iinput {
  
    GameInit* init;
  
public:
    /*Destructor*/
    virtual ~CSVinput();
    /*Insert the game initialize*/
    virtual void setGameInit(GameInit*);
    /*Read from the CSV file into the class GameInit*/
    virtual void read();
};
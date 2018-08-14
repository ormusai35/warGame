#pragma once 

/*Interface responsible for the input of the program*/

class Iinput{
  
public:
    virtual void read() = 0;
    virtual void setGameInit(GameInit*)=0;
    
};
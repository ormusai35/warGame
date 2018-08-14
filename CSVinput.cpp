#include "CSVinput.hpp"

CSVinput::~CSVinput(){}

void CSVinput::setGameInit(GameInit* _init)
{
    init = _init;
}

void CSVinput::read()
{
    std::string T_row,T_col;
    std::ifstream reader("game.csv");
    std::getline(reader,T_row,'\n'); 
    
    int count =2;
    while (count!=0){
        std::getline(reader,T_row ,',');
        count--;
    }
    
    std::getline(reader,T_col ,'\n');

    init->setMat(T_row,T_col);

    std::string T_players;
    std::string T_soldiers;
    std::getline(reader,T_players ,',');
    std::getline(reader,T_players ,'\n');
    int players = std::stoi(T_players);
    init->setNumOfPlayers(T_players);
    
    std::getline(reader,T_soldiers ,',');
    std::getline(reader,T_soldiers ,'\n');
    int soldiers = std::stoi(T_soldiers);
    init->setNumOfSoldiers(T_soldiers);
       
    std::vector<std::string> Vplayers;
    std::vector<std::string> Vsoldiers;
    std::string player;
    std::string soldier;
    
    for ( int i=0 ; i<players ; i++){
        
         std::getline(reader,player);
         Vplayers.push_back(player);
         
         for (int j=0 ; j<soldiers ; j++){
            
            std::getline(reader,soldier);
            Vsoldiers.push_back(soldier);
             
         }
         
    }
    init -> setPlayersSoldiers (Vplayers , Vsoldiers);
    
    std::string obj;
    std::getline(reader,obj);
    std::vector<std::string> Vobjects;
    while(reader.good()){
        std::getline(reader,obj);
        Vobjects.push_back(obj);
    }
    
    init -> setObjects (Vobjects);
    
    std::vector<std::string> steps;
    std::string stp;
    std::ifstream mySteps("steps.csv");
    std::getline(mySteps,stp,'\n');
    while(mySteps.good()){
        std::getline(mySteps,stp,'\n');
        steps.push_back(stp);
    }
    init->setSteps(steps);
    
    
    
    

    
}
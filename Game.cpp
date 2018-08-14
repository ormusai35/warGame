#include "Game.hpp"
#include <fstream>

void Game::startGame()
{
    GameInit* game = new GameInit();
   
    in = new CSVinput();
    in->setGameInit(game);
    
    out = new Console();
    out->print("the game has started !! ");
    
    in->read();    
    db = game->getDataBase();
        
    
    action = new AttackAction();
    
    int i=0 , j=0;
    while (db->getPlayers().size() > 1){
        while (db->getPlayers()[i]->getSoldiers().size() >= 1){
            if (db->getPlayers()[i]->whoAmI() == "human"){
                 walkAbility(db->getPlayers()[i]->getSoldiers()[j] , game->getSteps()[i][j] );
            }
            else{
               findObjAndAction(db->getPlayers()[i]->getSoldiers()[j]);  
            } 
        }
    }
      
}

void Game::walkAbility(Soldier* s,Point2d* point){
    double dist = s->getLocation()->distance(point);
    int Swalk = s->getWs();
    if (s->getLife() < 30) Swalk = Swalk/2;
    if (dist<Swalk){
        Point2d* source = s->getLocation();
        Point2d* vec = new Point2d(point->getX()-source->getX(),point->getY()-source->getY());
        point->setX((vec->getX()/dist)*Swalk + source->getX());
        point->setY((vec->getY()/dist)*Swalk + source->getY());
    }
    
    s->walk(point);
}


void Game::findObjAndAction(Soldier* s){
    Point2d* p = s->getLocation();
    Soldier* minSoldier = nullptr;
    int minDistSoldier =0;
    Weapon* minWeapon = nullptr;
    int minDistWeapon =0;
    Armor* minArmor = nullptr;
    int minDistArmor =0;
    
    size_t i = int(p->getX());
    size_t j = int(p->getY());
    size_t count = 0;
    size_t x = i-count;
    size_t y = j-count;
    if (x<0)x=0;
    if (y<0)y=0;
    for ( ; x<=i+count ; x++){
        for ( ; y<=j+count || y<db->getMat().size() ; y++){
            if (db->getMat()[x][y]->getAvailable()){
                std::cout << "1" << std::endl;
                size_t size = db->getMat()[x][y]->getSoldiers().size();
                if (size>0){
                    for (size_t z = 0 ; z<size ; z++){
                        Soldier* tempSol = db->getMat()[x][y]->getSoldiers()[z];
                        int dist = tempSol->getLocation()->distance(s->getLocation());
                        if (dist<minDistSoldier){
                            minDistSoldier = dist;
                            minSoldier = tempSol;
                        }
                    }
                }
                size = db->getMat()[x][y]->getWeapons().size();
                if (size>0){
                    for (size_t z = 0 ; z<size ; z++){
                        Weapon* tempWeapon = db->getMat()[x][y]->getWeapons()[z];
                        int dist = tempWeapon->getP()->distance(s->getLocation());
                        if (dist<minDistWeapon){
                            minDistWeapon = dist;
                            minWeapon = tempWeapon;
                        }
                    }
                }
                size = db->getMat()[x][y]->getArmors().size();
                if (size>0){
                    for (size_t z = 0 ; z<size ; z++){
                        Armor* tempArm = db->getMat()[x][y]->getArmors()[z];
                        int dist = tempArm->getP()->distance(s->getLocation());
                        if (dist<minDistArmor){
                            minDistArmor = dist;
                            minArmor = tempArm;
                        }
                    }
                }
                
            }
        }
    }
    
    if (minDistSoldier <= minDistArmor && minDistSoldier <= minDistWeapon){
        walkAbility(s , minSoldier->getLocation());
        if (minSoldier->getIdTeam() != s->getIdTeam()){
            s->Attack(action,minSoldier);
            if (minSoldier->getLife()<=0) killSoldier(minSoldier);
        }
        else{
            Paramedic* p = dynamic_cast<Paramedic*> (s);
            if (p!=nullptr) p->heal(minSoldier);
        }
    }
    else if (minDistArmor <= minDistSoldier && minDistArmor <= minDistWeapon){
        walkAbility(s , minArmor->getP());
        s->setArmor(minArmor);
    }
    else{
        walkAbility(s , minWeapon->getP());
        s->setWeapon(minWeapon);
    }
}

void Game::killSoldier(Soldier* s){
    std::cout << s->getID() << std::endl;
    int x = int(s->getLocation()->getX());
    int y = int(s->getLocation()->getY());
    for (size_t i=0 ; i< db->getMat()[x][y]->getSoldiers().size(); i++){
        if (s->getID() == db->getMat()[x][y]->getSoldiers()[i]->getID()){
            delete s->getArmor();
            delete s->getWeapon();
            delete s;
            db->getMat()[x][y]->getSoldiers().erase(db->getMat()[x][y]->getSoldiers().begin()+i);
        }
    }
    
    for (size_t i =0; i<db->getPlayers().size(); i++){
        for (size_t j = 0; j<db->getPlayers()[i]->getSoldiers().size(); j++){
            if (s->getID() == db->getPlayers()[i]->getSoldiers()[j]->getID()) db->getPlayers()[i]->getSoldiers().erase(db->getPlayers()[i]->getSoldiers().begin()+j);
        }
    }
    
}

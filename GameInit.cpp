#include "GameInit.hpp"

void GameInit::setMat(std::string _rows,std::string _cols)
{
    rows = std::stoi(_rows);
    cols = std::stoi(_cols);
    if (rows<0 || cols<0){
        throw std::runtime_error("the rows or cols input is unvalid");
    }
    db = new DataBase(rows,cols);
    
}

void GameInit::setNumOfPlayers(std::string _numOfPlayers)
{
    numOfPlayers = std::stoi(_numOfPlayers);
    if (numOfPlayers<0){
        throw std::runtime_error("the num of players input is unvalid");
    }
}

size_t GameInit::getNumOfPlayers() const
{
    return numOfPlayers;
}

void GameInit::setNumOfSoldiers(std::string _numOfSoldiers)
{
    numOfSoldiers = std::stoi(_numOfSoldiers);
    if (numOfSoldiers < 0){
        throw std::runtime_error("the number of soldiers input is unvalid");
    }
}

size_t GameInit::getNumOfSoldiers()const
{
    return numOfSoldiers;
}

void GameInit::setPlayersSoldiers(std::vector<std::string> Vplayers , std::vector<std::string> Vsoldiers){

     if (Vsoldiers.size()/Vplayers.size() != numOfSoldiers){
        throw std::runtime_error("the number of soldiers is unvalid");
    }

    std::vector<Player*> vecPlayers;
    int numId = 1;
    size_t indexSoldeir=0;
    Player* p;
    Soldier* s;
    std::vector<std::vector<UnitMat*>> field = db->getMat();
    
    for (size_t i=0 ; i<numOfPlayers ; i++){
        std::vector<std::string> objP = split(Vplayers[i]);
        if (objP.size() == 2) p = new Player(numOfSoldiers , numId , objP[1],"NULL");
        else p = new Player(numOfSoldiers , numId , objP[1],objP[2]);
        vecPlayers.push_back(p);
        
        for (size_t j=0 ; j<numOfSoldiers ; j++ , indexSoldeir++ ){
            
            std::vector<std::string> objS = split(Vsoldiers[indexSoldeir]);
            Point2d* point = pointFromString(objS[1]);
            
            if (objS.size() == 2)s = SoldierFactory::getSoldier (objS[0] , point , "NULL" , numId);
            else s = SoldierFactory::getSoldier (objS[0] , point , objS[2] , numId);
            
            p->addSoldier(s);
            field[int(s->getLocation()->getX())][int(s->getLocation()->getY())]->addSoldier(s);
            field[int(s->getLocation()->getX())][int(s->getLocation()->getY())]->confirmAvailable();
        }
        
        numId++;
    }
    db->setPlayers(vecPlayers);
    db->setMat(field);
}


void GameInit::setObjects(std::vector<std::string> Vobjects){
    size_t Vsize = Vobjects.size();
    Point2d* point;
    std::vector<std::vector<UnitMat*>> field = db->getMat();
    
    for (size_t i=0 ; i<Vsize ; i++){
        std::vector<std::string> obj = split(Vobjects[i]);
        size_t size = obj.size();
        
        point = pointFromString(obj[size-1]);
        
        if (obj[0] == "weapon"){
            Weapon* w = WeaponFactory::getWeapon(obj[1] ,point);
            field[int(w->getP()->getX())][int(w->getP()->getY())]->addWeapon(w);
        }
        else if (obj[0] == "Armor"){
            Armor* a = ArmorFactory::getArmor(obj[1] , obj[2] , point);
            field[int(a->getP()->getX())][int (a->getP()->getY())]->addArmor(a);
        }
        else{
            SolidObj* so = SolidObjFactory::getSolidObj(obj[1] , obj[2] ,obj[3] , point);
            field[int(so->getP()->getX())][int(so->getP()->getY())]->addSolid(so);
        }
    }
    db->setMat(field);
}
    
std::vector<std::string> GameInit::split(std::string str){
    
    size_t len = str.size();
    int x=0;
    std::vector<std::string> vec;
    std::string s;
    
    for (size_t i = 0 ; i<len ; i++){
        char c = str[i];
        if (c == ','){
            s = str.substr (x,i-x);
            x=i+1;
            vec.push_back(s);
        }
    }
    s = str.substr (x,len-x);
    vec.push_back(s);
    return vec;
}


Point2d* GameInit::pointFromString (std::string str){
    int len = str.size();
    int space ;
    std::string T_x , T_y;
    double x , y;

    for (int i = 0; i < len; i++){
        char c = str[i];
        if (c == ' '){
            space = i;
            T_x = str.substr (1,i-1);
            
        }
        else if (c == ']'){
            T_y = str.substr (space+1,i-space-1);
        }
    }
    
    x = std::stod(T_x);
    y = std::stod(T_y);
    
    return new Point2d(x,y);
}

void GameInit::setDataBase(DataBase* _db){
    db = _db;
}

DataBase* GameInit::getDataBase() const{
    return db;
}

void GameInit::setSteps(std::vector<std::string> _steps){
    
    std::vector<std::string> Spoints;
    std::vector<Point2d*> Sp;
    Point2d* p;
    for (size_t i=0; i<_steps.size(); i++){
        Spoints = split(_steps[i]);
        for (size_t j=0; j<Spoints.size(); j++){
            p = pointFromString(Spoints[j]);
            Sp.push_back(p);
        }
        steps.push_back(Sp);
    }
    
}

std::vector<std::vector<Point2d*>> GameInit::getSteps() const{
    return steps;
}
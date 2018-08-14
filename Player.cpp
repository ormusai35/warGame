#include "Player.hpp"


Player::Player(size_t _n,int _t, std::string _kind,std::string _strategy):n(_n),teamId(_t),kindOfPlayer(_kind),strategy(_strategy){}


Player::~Player(){}

 int Player::getId() const
{
    return teamId;
}

void Player::addSoldier(Soldier* s){
    soldiers.push_back(s);
}


std::vector<Soldier*> Player::getSoldiers() const{
    return soldiers;
}

std::string Player::whoAmI() const{
    return kindOfPlayer;
}
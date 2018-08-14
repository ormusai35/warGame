#include "DataBase.hpp"

DataBase::DataBase(size_t rows,size_t cols){
    for (size_t i=0; i<rows; i++){
        std::vector<UnitMat*> vec;
        mat.push_back(vec);
        for (size_t j=0; j<cols; j++){
            UnitMat* uni = new UnitMat();
            mat[i].push_back(uni);
        }
    }
}

void DataBase::setPlayers(std::vector<Player*> _players){
    players = _players;
}

std::vector<Player*> DataBase::getPlayers() const{
    return players;
}

std::vector<std::vector<UnitMat*>> DataBase::getMat() const{
    return mat;
}

void DataBase::setMat(std::vector<std::vector<UnitMat*>> _mat){
    mat = _mat;
}
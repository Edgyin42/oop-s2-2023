#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream> 
#include <tuple>
class GameEntity{
    public: 
    std::tuple<int, int> position; 
    char type;
    GameEntity();
    GameEntity(int x, int y, char type){
        position = std::make_tuple(x, y);
        this->type = type;
    }
    std::tuple<int, int> getPos(){
        return this->position;
    }
    char getType(){
        return this->type;
    }; 
    virtual ~GameEntity(){};
}; 
#endif
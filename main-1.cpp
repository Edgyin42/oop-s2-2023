#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"


int main(){
    // GameEntity a(1, 2, 'a'); 
    // GameEntity a(2, 3, 'a'); 

    // Utils a;
    // Utils b; 
    // a.generateRandomPos(2,3); 
    // b.generateRandomPos(3,4);

    std::tuple<int, int> pos1 = Utils::generateRandomPos(5, 5);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(5, 5);
    int dis = Utils::calculateDistance(pos1, pos2);



}
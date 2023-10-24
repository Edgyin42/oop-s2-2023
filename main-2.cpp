#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {

    Ship myShip(3, 3);
    Mine myMine(5, 5);


    myShip.move(2, 2);

    Explosion explosion = myMine.explode();

    explosion.apply(myShip);
    
    std::cout << "Ship Position: (" << std::get<0>(myShip.getPos()) << ", " << std::get<1>(myShip.getPos()) << ") Type: " << myShip.getType() << std::endl;
    std::cout << "Mine Position: (" << std::get<0>(myMine.getPos()) << ", " << std::get<1>(myMine.getPos()) << ") Type: " << myMine.getType() << std::endl;

    return 0;
}
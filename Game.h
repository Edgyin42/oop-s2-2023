
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include "Explosion.h"
#include "Effect.h"
#include <vector>
class Game{
    private:
    std::vector<GameEntity*> entities;

    public:
    std::vector<GameEntity*> get_entities() {
        return this->entities;
    }

    void set_entities(std::vector<GameEntity*>& newEntities){
        this->entities = newEntities;
    };

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
        for (int i = 0; i < numShips; i++){
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            GameEntity *a = new Ship(std::get<0>(pos), std::get<0>(pos)); 
            this->entities.push_back(a); 
        }
        for (int i = 0; i < numMines; i++){
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            GameEntity *a = new Mine(std::get<0>(pos), std::get<0>(pos)); 
            this->entities.push_back(a); 
        }
        return entities;

    };
    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        std::vector<std::tuple<int, int>> shipPosList;
        for (int i = 0; i < maxIterations; i++) {
            for (GameEntity* entity : entities) {
                Ship* shipEntity = dynamic_cast<Ship*>(entity);
                if (shipEntity != nullptr) {
                    shipEntity->move(1, 0);
                    shipPosList.push_back(shipEntity->position);
                }
                for (GameEntity* mineEntity : entities) {
                    Mine* mine = dynamic_cast<Mine*>(mineEntity);
                    Utils a;
                    double distance = a.calculateDistance(shipEntity->getPos(), mineEntity->getPos());
                    if (distance <= mineDistanceThreshold) {
                        Explosion explosion = mine->explode();
                        explosion.apply(*shipEntity);
                    }
                    }
                }
            }

        }
};


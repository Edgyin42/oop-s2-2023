#include "GameEntity.h"
#include "Effect.h"
class Explosion: public GameEntity, public Effect{
    public:
    Explosion(int x, int y): GameEntity(x, y, 'E'){}
    void apply(GameEntity& entity) override {
        this->position = std::make_tuple(-1, -1);
        this->type = 'X'; 
    };
};

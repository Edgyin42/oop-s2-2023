#include "GameEntity.h"
#include "Effect.h"
class Explosion: public GameEntity, public Effect{
    public:
    Explosion(int x, int y): GameEntity(x, y, 'E'){}
    void apply(GameEntity& entity) override {
        entity.setPos(-1, -1);
        entity.setType('X');
    };
};

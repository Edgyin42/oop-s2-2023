#ifndef PLAY_H
#define PLAY_H
#include "Snare.h"
#
class Play{
    private: 
    std::vector<Spot*> matrix;
    public: 
    std::vector<Spot*>& getMatrix() {
        return this->matrix;
    }

};

#endif
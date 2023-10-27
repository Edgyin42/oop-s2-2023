#ifndef SNARE_H
#define SNARE_H
#include "Spot.h"
#include "Influence.h"
class Snare: public Spot, Influence{
    public: 
    Snare(int x, int y): Spot(x, y, 'S'){};
    bool operative; 
    bool isOperative(){
        return this-operative;
    }
};
#endif
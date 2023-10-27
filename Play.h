#ifndef PLAY_H
#define PLAY_H
#include "Snare.h"
#include "Persona.h"
using namespace std;
class Play{
    private: 
    std::vector<Spot*> matrix;
    public: 
    std::vector<Spot*>& getMatrix() {
        return this->matrix;
    }
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight){
        for (int i = 0; i < numPersonas; i++){
            tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            Spot *a = new Persona(get<0>(loc), get<1>(loc));
            matrix.push_back(a);
        }
        for (int i = 0; i < numSnares; i++){
            tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            Spot *a = new Snare(get<0>(loc), get<1>(loc));
            matrix.push_back(a);
        }
    }

    void playCycle(int maxCycles, double snareTriggerDistance){
        for (int i = 0; i < maxCycles; i++){
            for(int j = 0; j < matrix.size(); j++){
                if (matrix[j]->getCategory() == 'P'){
                    Persona *p = dynamic_cast(Persona*)(matrix[j]);
                    p->shift(1, 0);
                }
            }
        }
    }
};

#endif
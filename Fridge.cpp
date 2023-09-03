#include "Fridge.h"
Fridge::Fridge():Appliance(0), volume(0){};
Fridge::Fridge(int powerRating, double volume): volume(volume){
    this->powerRating = powerRating; 
};

void Fridge::setVolume(double volume){
    this->volume = volume; 
};
double Fridge::getVolume(){
    return volume; 
};

double Fridge::getPowerConsumption(){
    double powerConsumption = this->powerRating * 24 * (this->getVolume() / 100); 
    return powerConsumption; 
}; 
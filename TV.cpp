#include "TV.h"

TV::TV(): Appliance(0), screenSize(0){};
TV::TV(int powerRating, double screenSize): Appliance(powerRating), screenSize(screenSize){
    this->powerRating = powerRating; 
};

void TV::setScreenSize(double screenSize){
    this->screenSize = screenSize; 
};
double TV::getScreenSize(){
    return screenSize; 
};
double TV::getPowerConsumption(){
    double powerConsumption = powerRating * (screenSize / 10); 
    return powerConsumption; 
};
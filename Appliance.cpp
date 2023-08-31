#include "Appliance.h"
Appliance::Appliance():powerRating(0), isOn(false){};
Appliance::Appliance(int powerRating):powerRating(powerRating), isOn(get_isOn()){}; // creates an Appliance with a power rating

int Appliance::get_powerRating(){
    return powerRating; 
};
void Appliance::set_powerRating(int powerRating){
    this->powerRating = powerRating; 
}; 

bool Appliance::get_isOn(){
    return isOn; 
};
void Appliance::set_isOn(bool isOn){
    this->isOn = isOn; 
}; 

void Appliance::turnOn(){
    set_isOn(true); 
};
void Appliance::turnOff(){
        set_isOn(false); 
};
double Appliance::getPowerConsumption(){
    return 0; 
};
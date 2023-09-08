#include "Tesla.h"
Tesla::Tesla():batteryPercentage(100){};
Tesla::Tesla(char model, int price){
    this->model = model; 
    this->price = price; 
    this->batteryPercentage = 100; 
}; 
void Tesla::chargeBattery(int mins){
    this->batteryPercentage += mins*0.5; 
    if (this->batteryPercentage > 100){
        this->batteryPercentage = 100; 
    }
}; 
void Tesla::drive(int kms) {
    this->batteryPercentage -= kms/5; 
    this->emissions = 74*kms; 
    if (this->batteryPercentage < 0){
        this->batteryPercentage = 0; 
    }
}; 
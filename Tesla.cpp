
#include <iostream>
#include "Tesla.h"
Tesla::Tesla(){
    this->batteryPercentage = 100.0; 
}; 
Tesla::Tesla(char model, int price){
    this->batteryPercentage = 100.0; 
    this -> model = model; 
    this->price = price; 
}; 
void Tesla::chargeBattery(int mins){
    this->batteryPercentage += mins*0.5; 
    if (batteryPercentage>100.0){
        this->batteryPercentage = 100.0; 
    }
}; 
void Tesla::drive(int kms){
    this->batteryPercentage -= kms/5; 
    this->emission = 74*kms; 
    if (batteryPercentage<0){
        this->batteryPercentage = 0; 
    }
}; 
int Tesla::get_batteryPercentage(){
    return this->batteryPercentage; 
}
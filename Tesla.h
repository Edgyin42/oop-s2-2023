#ifndef TESLA_H
#define TESLA_H
#include "Car.h"
class Tesla: public Car {
    private:
    char model; 
    public: 
    float batteryPercentage; 
    Tesla();
    Tesla(char model, int price); 
    void chargeBattery(int mins); 
    void drive(int kms); 
};
#endif
#ifndef TESLA_H
#define TESLA_H
#include "Car.h"
class Tesla: public Car{
    protected: 
    char model; 
    float batteryPercentage; 
    public:
    Tesla(); 
    Tesla(char model, int price); 
    void chargeBattery(int mins); 
    void drive(int kms); 
    int get_batteryPercentage(); 
}; 
#endif

#ifndef FORD_H
#define FORD_H
#include "Car.h"
class Ford: public Car{
    private: 
    int badgeNumber; 
    public: 
    float litresOfFuel; 
    Ford(); 
    Ford(int badgeNumber, int price); 
    void refuel(int litres); 
    void drive(int kms); 
}; 
#endif

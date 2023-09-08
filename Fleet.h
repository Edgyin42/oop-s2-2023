#ifndef FLEET_H
#define FLEET_H
#include "Car.h"
#include "Ford.h"
#include "Tesla.h"
class Fleet{
    public:
    Car** fleet; 
    Fleet(); 
    Car** getFleet(); 

}; 
#endif
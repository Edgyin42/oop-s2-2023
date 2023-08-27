#include <iostream> 
#include "Vehicle.h"
using namespace std; 
Vehicle::Vehicle(): ID(0){}; 
Vehicle::Vehicle(int ID): ID(ID){
    timeOfEntry = time(nullptr); 
}; 
int Vehicle::getTimeOfEntry(){
    return timeOfEntry; 
}; 
int Vehicle::getID(){
    return ID; 
}
void Vehicle::setID(int ID){
    this->ID = ID; 
}
int Vehicle::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry());
    return timePass; 
}


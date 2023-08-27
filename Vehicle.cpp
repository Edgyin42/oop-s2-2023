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

Car:: Car(int ID): Vehicle(ID){};  
int Car::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry()) * 0.9;
    return timePass; 
}
int Bus::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry()) * 0.75;
    return timePass; 
}
Bus:: Bus(int ID): Vehicle(ID){};  

int Motorbike::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry()) * 0.85;
    return timePass; 
}
Motorbike:: Motorbike(int ID): Vehicle(ID){};  
#include "Car.h"
Car:: Car(int ID): Vehicle(ID){};  
int Car::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry()) * 0.9;
    return timePass; 
}
   
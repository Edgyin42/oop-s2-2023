#include "Motorbike.h"
int Motorbike::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry()) * 0.85;
    return timePass; 
}
Motorbike:: Motorbike(int ID): Vehicle(ID){};  
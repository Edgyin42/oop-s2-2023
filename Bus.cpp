
#include "Bus.h"
int Bus::getParkingDuration(){
    int currTime = time(nullptr); 
    double timePass = difftime(currTime, getTimeOfEntry()) * 0.75;
    return timePass; 
}
Bus:: Bus(int ID): Vehicle(ID){};  


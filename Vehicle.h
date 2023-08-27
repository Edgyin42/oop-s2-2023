#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream> 
#include <ctime> 

using namespace std; 
class Vehicle{
protected: 
std::time_t timeOfEntry;  
int ID; 
public: 
Vehicle(); 
Vehicle(int ID); 
int getID(); 
void setID(int ID); 
int getTimeOfEntry(); 
virtual int getParkingDuration(); 
}; 


#endif // VEHICLE_H



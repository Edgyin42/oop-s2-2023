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

class Car: public Vehicle{
public:
Car(int ID); 
int getParkingDuration();  
};



class Bus: public Vehicle{
public:
Bus(int ID); 
int getParkingDuration();  
}; 



class Motorbike: public Vehicle{
public:
Motorbike(int ID); 
int getParkingDuration(); 
}; 
#endif // VEHICLE_H
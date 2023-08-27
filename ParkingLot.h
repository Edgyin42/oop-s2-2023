#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
class ParkingLot{
    private:
    int max; 
    int count; 
    int maxParkingDuration; 
    public: 
    ParkingLot(int max); 
    Vehicle **m; 
    int getCount(); 
    void parkVehicle(Vehicle *m);
    void unparkVehicle(int ID); 
    ~ParkingLot(); 
    int countOverstayingVehicle(int maxParkingDuarion); 
};
#endif // PARKINGLOT_H
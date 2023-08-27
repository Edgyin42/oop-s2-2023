#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"  // Include your Vehicle-derived classes here

int main() {
    ParkingLot parkingLot(10);  // Create a parking lot with a capacity of 10 vehicles
    Car *car1 = new Car(101);  // Create Car objects with IDs
    Car *car2 = new Car(102);
    Bus *bus1 = new Bus(201);
    Motorbike *bike1= new Motorbike(301);

    parkingLot.parkVehicle(car1);
    parkingLot.parkVehicle(car2);
    parkingLot.parkVehicle(bus1);
    parkingLot.parkVehicle(bike1);

    std::cout << "Current count of parked vehicles: " << parkingLot.getCount() << std::endl;

    parkingLot.unparkVehicle(102);  // Unpark a vehicle

    std::cout << "Current count of parked vehicles: " << parkingLot.getCount() << std::endl;

    parkingLot.unparkVehicle(103);  // Unpark a non-existent vehicle

    std::cout << "Current count of parked vehicles: " << parkingLot.getCount() << std::endl;

    delete car1; 
    delete car2; 
    delete bus1; 
    delete bike1; 
    return 0;
}

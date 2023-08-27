#include <iostream> 
#include "ParkingLot.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
int main()
{
ParkingLot a(10); 
Car *car1 = new Car(1); 
Car *car2 = new Car(2); 
Car *car3 = new Car(3); 
Car *car4 = new Car(4); 
Car *car5 = new Car(5); 
Bus *bus6 = new Bus(6); 
Bus *bus7 = new Bus(7); 
Motorbike *motorbike8 = new Motorbike(8); 
Motorbike *motorbike9 = new Motorbike(9); 
Motorbike *motorbike10 = new Motorbike(10); 
a.parkVehicle(car1);
a.parkVehicle(car2);
a.parkVehicle(car3);
a.parkVehicle(car4);
a.parkVehicle(car5);
a.parkVehicle(bus6);
a.parkVehicle(bus7);
a.parkVehicle(motorbike10);
a.parkVehicle(motorbike9);
a.parkVehicle(motorbike8);
int n = a.countOverstayingVehicles(15); 
cout << n << endl; 
}
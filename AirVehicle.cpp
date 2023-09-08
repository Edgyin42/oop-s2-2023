#include  "AirVehicle.h"    
AirVehicle::AirVehicle(){}; 
AirVehicle::AirVehicle(int w){
    this->weight = w; 
}; 
int AirVehicle::get_weight(){
    return weight; 
}; 
void AirVehicle::set_weight(int w){
    this->weight = w; 
};
float AirVehicle::get_fuel(){
    return this->fuel; 
}; 
void AirVehicle::set_fuel(float f){
    this->fuel = f; 
}; 
void AirVehicle::refuel(){
    this->fuel = 100; 
}; 
void AirVehicle::fly(int headwind, int minutes){
    this->numberOfFlights += 1; 
}; 
int AirVehicle::get_numberOfFlights(
    return this->numberOfFlights; 
); 
AirVehicle::set_numberOfFlights(int k){
    this->numberOfFlights = k; 
}


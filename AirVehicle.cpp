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
float AirVehicle::get_fuel(){}; 
void AirVehicle::set_fuel(float f){
    this->fuel = f; 
}; 
void AirVehicle::refuel(){
    this->fuel = 100; 
}; 
void AirVehicle::fly(int headwind, int minutes){
    this->numberOfFlights += 1; 
}; 
AirVehicle::int get_numberOfFlights(
    return this->numberOfFlights; 
); 
void set_numberOfFlights(int k){
    this->numberOfFlights = k; 
}

;
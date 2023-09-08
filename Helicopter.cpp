#include "Helicopter.h"  
Helicopter::Helicopter(){
    this->fuel = 100; 
    this->numberOfFlights = 0;
}; 
Helicopter::Helicopter(int w, string n){
    this->fuel = 100; 
    this->numberOfFlights = 0;
    this->weight = w; 
    this->name = n; 
}; 
string Helicopter::get_name(){
    return this->name; 
}; 
void Helicopter::set_name(string n){
    this->name = n; 
}; 
void Helicopter::fly(int headwind, int minutes){
        if (headwind > 40){
        this->fuel -= 0.4*minutes; 
        } 
        this->fuel -= 0.18*minutes; 
    if (this->weight > 5670){
        this->fuel  -= (this->weight-5670)*0.01; 
    }
    this->numberOfFlights += 1;
    }

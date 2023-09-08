#include "Helicopter.h"  
Helicopter::Helicopter(){}; 
Helicopter::Helicopter(int w, string n){
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
    if (headwind >= 40){
        this->fuel -= 0.4*this->fuel; 
    } 
    else{
        this->fuel -= 0.18*this->fuel; 
    }
    if (this->weight > 5670){
        this->fuel  -= (this->weight-5670)*0.01; 
    }
    this->numberOfFlights += 1;
}; 
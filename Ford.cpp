#include "Ford.h"
Ford::Ford(){
    this->litresOfFuel = 60.0; 
}; 
Ford::Ford(int badgeNumber, int price){
    this->litresOfFuel = 60.0; 
    this->badgeNumber = badgeNumber; 
    this->price= price; 
}; 
void Ford::refuel(int litres){
    this->litresOfFuel += litres; 
}; 
void Ford::drive(int kms){
    this->litresOfFuel -= kms/5;
    this->emission = 234*kms; 
}; 
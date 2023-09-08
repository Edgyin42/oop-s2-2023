 #include "Ford.h"  
  
Ford::Ford(){
    this->litresOfFuel = 60; 
}; 
Ford::Ford(int badgeNumber, int price){
    this->litresOfFuel = 60; 
    this->price = price; 
    this->badgeNumber = badgeNumber; 
}; 
void Ford::refuel(int litres){
        this->litresOfFuel += litres; 
}; 
void Ford::drive(int kms){
    this->litresOfFuel -= kms/5; 
    this->emissions = 234*kms; 
}; 
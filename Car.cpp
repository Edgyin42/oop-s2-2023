#include <iostream>
#include "Car.h"
Car::Car(){
}; 
Car::Car(int price){
    this-> price = price; 
}; 
void Car::drive(int kms){
    this->emission += 20*kms; 
}; 
void Car::set_price(int price){
    this->price = price; 
}; 
int Car::get_price(){
    return price; 
}; 
void Car::set_emission(int emission){
    this->emission = emission; 
}; 
int Car::get_emission(){
    return this->emission; 
}; 
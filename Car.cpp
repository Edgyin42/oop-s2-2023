   #include "Car.h"
Car::Car(){
    this->price = 0;
    this->emissions = 0; 
}
Car::Car(int price):price(this->get_price()){}

void Car::set_price(int price){
    this->price = price; 
}
int Car::get_price(){
    return this->price; 
}
void Car::drive(int kms){
    this->emissions = 20*kms; 
}
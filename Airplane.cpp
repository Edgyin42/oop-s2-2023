  #include "Airplane.h"  
Airplane::Airplane(){}; 
Airplane::Airplane(int w, int p){}; 
int Airplane::get_numPassengers(){
    return this->numPassengers; 
}; 
void Airplane::reducePassengers(int x){
    this->numPassengers -= x; 
    if (this->numPassengers < 0){
        this->numPassengers = 0; 
    }

}; 
void Airplane::fly(int headwind, int minutes){
    if (headwind >= 60){
        this->fuel -= 0.5*this->fuel; 
    } 
    else{
        this->fuel -= 0.25*this->fuel; 
    }
    this->fuel  -= this->numPassengers*0.001; 
    if(this->fuel >=20){
    this->numberOfFlights += 1;
    }

}; 
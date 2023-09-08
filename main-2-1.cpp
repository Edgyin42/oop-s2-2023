#include <iostream>
#include "Tesla.h" 
#include "Car.h"
int main(){
    Tesla a('A', 50);
    a.chargeBattery(10); 
    a.drive(15); 
    cout << a.batteryPercentage << endl;
     
}
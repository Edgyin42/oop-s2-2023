
#include <iostream> 
using namespace std; 
#include "Fleet.h"
int main(){
    Car k(1000); 
    k.drive(10); 
    cout << k.get_emission() << endl;
    Tesla h('A', 100); 
    h.chargeBattery(10); 
    h.drive(5); 
    cout<< h.get_batteryPercentage() << endl; 
    Ford m(10, 10000); 
    m.drive(50); 
    m.refuel(20); 
    cout<< m.litresOfFuel << endl; 
    Fleet a;
    return 0; 
}
 
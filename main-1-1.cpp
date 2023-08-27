
#include <iostream>
#include "Vehicle.h"
using namespace std;
int main(){
    Car a(10); 
    cout << a.getParkingDuration()<< endl;
    Bus b(11); 
    cout << b.getParkingDuration() << endl;
    Motorbike c(12); 
    cout << c.getParkingDuration() << endl;
}


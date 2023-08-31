#include "Appliance.h"
int main(){
    Appliance a; 
    cout<< a.get_powerRating() << " " << a.get_isOn() << endl; 
    Appliance b(10); 
    b.turnOn(); 
    cout<< b.get_powerRating() << " "<<  b.get_isOn() << endl; 
    return 0; 
}
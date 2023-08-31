#include "House.h"
#include "Fridge.h"
#include "TV.h"
int main(){
    House a; 
    cout << a.getTotalPowerConsumption()<< endl; 
    House b(2); 
    TV *c = new TV(10,10); 
    Fridge *d = new Fridge(10,10); 
    b.addAppliance(c); 
    b.addAppliance(d); 
    cout << b.getTotalPowerConsumption()<< endl; 
    delete c; 
    delete d; 
    return 0; 
}
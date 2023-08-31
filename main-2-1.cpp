#include "Fridge.h"
int main(){
    Fridge a; 
    cout << a.getVolume() << " " <<  a.getPowerConsumption() << endl; 
    Fridge b(10, 1); 
    cout << b.getVolume() << " " << b.getPowerConsumption() << endl; 
    return 0; 
}
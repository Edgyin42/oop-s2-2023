#include "TV.h"
int main(){
    TV a; 
    cout << a.getScreenSize() << " " <<  a.getPowerConsumption() << endl; 
    TV b(10, 10); 
    cout << b.getScreenSize() << " " << b.getPowerConsumption() << endl; 
    return 0; 
}
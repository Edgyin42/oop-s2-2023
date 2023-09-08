#include <iostream>
#include "Tesla.h" 
#include "Ford.h"
int main(){
    Ford b(15, 50);
    b.refuel(10); 
    b.drive(15); 
    cout << b.litresOfFuel<< endl;
     
}
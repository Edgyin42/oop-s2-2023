#include <iostream> 
#include "Person.h"
extern Person* createPersonArray(int n); 
int main() {
    int n = 5;
    Person* people = createPersonArray(n);

    delete[] people;
    return 0;
}



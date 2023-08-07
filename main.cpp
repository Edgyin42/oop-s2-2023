#include <iostream>
#include "workshop.h"
using namespace std; 
int main()
{
    double *x = dynamicArray(100, 3); 
    printArray(x, 100); 
    int k = arrayMax(x, 100); 
    cout << k << endl; 
    delete[] x; 
}


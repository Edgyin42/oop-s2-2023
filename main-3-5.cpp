#include <iostream>
extern double sum_even(double array[], int n); 
using namespace std; 
int main()
{
    double a[] = {1,2,3,3,4,5,8,8};
    double x = sum_even(a, 8); 
    cout << "The sum of element in even positions is: " << x << endl; 
}
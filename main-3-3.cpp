#include <iostream>
extern double weighted_average(int array[], int n); 
using namespace std; 
int main()
{
    int a[] = {1,2,1,4,1,3};
    double sum = weighted_average(a, 6);
    cout << "The weighted sum is: " << sum << endl; 
}
#include <iostream> 
#include <cmath>
using namespace std; 
extern int bin_to_int(int binary_digits[], int number_of_digits); 
int main()
{
    int a[4] = {1,1,0,1}; 
    int dec = bin_to_int(a, 4); 
    cout << dec << endl; 
}
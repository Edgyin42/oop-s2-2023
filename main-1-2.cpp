#include <iostream> 
extern double array_mean(int array[], int n);
using namespace std; 
int main(void)
{
    int n[] = {1,2,3,4,5};
    double a = array_mean(n, 5);
    cout << "The mean is " << a << endl; 
}
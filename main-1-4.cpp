#include <iostream> 
extern int sum_two_arrays(int array[], int secondarray[], int n);
using namespace std;
int main()
{
    int a[] = {1,2,3,4};
    int b[] = {4,5,6,7}; 
    int x = sum_two_arrays(a, b, 4); 
    cout << "The sum is " << x << endl; 
}

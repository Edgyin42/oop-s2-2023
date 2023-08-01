#include <iostream> 
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length); 
using namespace std;
int main()
{
    int a[8] = {1,2,3,4,5,6,7,8};
    int min = array_min(a,8); 
    int max = array_max(a,8);
    int x = sum_min_max(a, 8); 
    cout<< "The min is: " << min << endl; 
    cout<< "The max is: " << max << endl; 
    cout<< "The sum is: " << x << endl; 

}
#include <iostream> 
extern int array_sum(int array[], int n);
using namespace std; 
int main(void)
{
    int n[] = {1,2,3,4,5};
    int a = array_sum(n, 5);
    cout << "The sum is " << a << endl; 
}
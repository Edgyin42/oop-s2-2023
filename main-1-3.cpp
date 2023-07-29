#include <iostream> 
extern int num_count(int array[], int n, int number);
using namespace std; 
int main(void)
{
    int n[] = {1,2,3,4,5,4,2,5,6,5,5};
    int a = num_count(n, 11, 5);
    cout << "The number of elements is: " << a << endl; 
}
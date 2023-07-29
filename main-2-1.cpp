#include <iostream> 
extern int min_element(int array[], int n);
using namespace std; 
int main(void)
{
    int n[] = {9,4,2,2,1,3,0};
    int a = min_element(n, 7);
    cout << "The min is " << a << endl; 
}
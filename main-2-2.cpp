#include <iostream> 
extern int max_element(int array[], int n);
using namespace std; 
int main(void)
{
    int n[] = {9,4,2,2,1,3,0};
    int a = max_element(n, 7);
    cout << "The max is " << a << endl; 
}
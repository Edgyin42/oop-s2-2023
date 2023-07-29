#include <iostream> 
extern bool is_descending(int array[], int n);
using namespace std; 
int main(void)
{
    int a[] = {1,2,3,3,4,5,6,6,6,7};
    bool x = is_descending(a, 10);
    cout << x << endl; 
} 
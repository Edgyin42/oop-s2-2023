#include <iostream> 
extern bool is_fanarray(int array[], int n);
using namespace std; 
int main(void)
{
    int a[] = {1,2,2,2,1};
    bool x = is_fanarray(a, 5);
    if (x == 0)
    {
        cout << "The statement that the array is fan array is false" << endl; 
    }
    else
    {
        cout << "The statement that the array is fan array is true" << endl; 
    }
} 
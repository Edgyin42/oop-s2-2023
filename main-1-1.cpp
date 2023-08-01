#include <iostream> 
extern int sum_diagonal (int array[4][4]);
using namespace std; 
int main()
{
    int array [4][4] = {
        {1,2,2,3},
        {2,4,5,7},
        {5,6,7,2},
        {1,4,5,6}
    }; 
    int a = sum_diagonal(array); 
    cout << a << endl; 
}
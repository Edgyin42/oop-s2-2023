#include <iostream> 
extern int *readNumbers(); 
extern int secondSmallestSum(int *numbers,int length);
using namespace std; 
int main()
{
    int *arr = readNumbers();
    int a = secondSmallestSum(arr, 10); 
    cout << a;
    delete(arr); 
}
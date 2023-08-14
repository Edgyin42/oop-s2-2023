#include <iostream> 
using namespace std; 
extern int *readNumbers(); 
extern int *reverseArray(int *numbers1, int length); 
extern bool equalsArray(int *numbers1, int *numbers2, int length);
int main()
{
    int *arr1 = readNumbers(); 
    int *arr2  = reverseArray(arr1, 10); 
    int a = equalsArray(arr1, arr2, 10); 
    cout << a; 
    delete(arr1); 
    delete(arr2); 
}
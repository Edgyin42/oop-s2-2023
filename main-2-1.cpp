#include <iostream> 
extern int *readNumbers(); 
extern void hexDigits(int *numbers, int length); 
using namespace std; 
int main()
{
    int *arr = readNumbers(); 
    hexDigits(arr, 10); 
    delete(arr); 
}
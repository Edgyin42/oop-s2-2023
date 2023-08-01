#include <iostream> 
#include <string> 
#include <cmath> 
int binary_to_int(int binary_digits[], int number_of_digits)
{
    int x = 0; 
    double res = 0;  
    for (int i = number_of_digits-1; i > 0; i--)
    {
        if (binary_digits[i] == 1)
        {
            res += pow(2,x); 
        }
        x++; 
    }
    int i = (int)res; 
    return i; 
}
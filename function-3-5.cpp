#include <iostream> 
double sum_even(double array[], int n)
{
    if (n < 1)
    {
        return 0;
    }
    double sum = 0;
    for (int i = 2; i < n; i+=2)
    {
        sum += array[i];
        if (i == n-1)
        {
            break;
        }
    }
    return sum; 
}

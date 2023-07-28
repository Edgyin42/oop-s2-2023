#include <iostream> 
double array_mean(int array[], int n)
{
    if (n < 1)
    {
        return 0; 
    }
    else
    {
    int mean = 0; 
    for (int i = 0; i < n; i ++)
    {
        mean += array[i];
    }
    mean /= n; 
    return mean;
    }
}
#include <iostream> 
double weighted_average(int array[], int n)
{
    int sum =0; 
    for (int i = 0; i < n; i++)
    {
        int count = 0;  
        for (int j = 0; j < n; j++)
        {
            if(array[i] == array[j])
            {
            count++; 
            }
        }
        sum += array[i]*count; 
    }
    int a = sum/n; 
    return a; 
}
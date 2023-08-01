#include <iostream> 
int array_min(int integers[], int length)
{
    int a = integers[0];
    for (int i = 1; i < length; i++)
    {
        if (integers[i] < a)
        {
            a = integers[i];
        }
    }
    return a; 
}

int array_max(int integers[], int length)
{
    int a = integers[0];
    for (int i = 1; i < length; i++)
    {
        if (integers[i] > a)
        {
            a = integers[i];
        }
    }
    return a; 
}

int sum_min_max(int integers[], int length)
{
    int a = array_max(integers, length) + array_min(integers, length); 
    return a; 
}

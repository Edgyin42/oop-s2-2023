#include <iostream>
using namespace std; 
#include <cstdlib>
void changeValue(double* a)
{
    *a = 42; 
}

void printArray(double* arr, int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " " ; 
    }
}

double arrayMax(double* x, int size)
{
    double a = x[0]; 
    for (int i = 1; i < size; i++)
    {
        if (x[i] > x[i-1])
        {
            a = x[i]; 
        }
    }
    return a; 
}

double* dynamicArray(int N, double M)
{
    double *arr = new double[N]; 
    for (int i = 0; i < N; i++)
    {
        arr[i] = M;
    }
    return arr; 
}
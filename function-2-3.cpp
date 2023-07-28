#include <iostream> 
using namespace std; 
void two_five_nine(int array[], int n)
{
    int num2 = 0; 
    int num5 = 0;
    int num9 = 0; 
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 2)
        {
            num2++; 
        }
        else if (array[i] == 5)
        {
            num5++; 
        }
        else if(array[i] == 9)
        {
            num9++;
        }
    }
    cout << "2:" << num2 << ";5:" << num5 << ";9:" << num9 << ";" << endl; 
}


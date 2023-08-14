#include <iostream> 
using namespace std; 
int *readNumbers()
{
    int *arr = new int[10]; 
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i]; 
    }
    return arr; 
}
void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << i << " " << numbers[i] << endl; 
    }
}


int secondSmallestSum(int *numbers,int length) 
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (numbers[j] < numbers[i])
            {
                int temp = numbers[j];
                numbers[j] = numbers[i]; 
                numbers[i] = temp; 
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " "; 
    }
    cout<<endl;
    int min1 = numbers[0]; 
    int min2; 
    if (numbers[1] > min1)
    {
        min2 = numbers[1];
    }
    else{
        min2 = min1; 
    }

    return min2; 
}
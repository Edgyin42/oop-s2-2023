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
void hexDigits(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        switch(numbers[i])
        {
            case 0:
                cout << i << " " << numbers[i] << endl; 
            break; 
            case 1:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 2:
                cout << i << " " << numbers[i] << endl; 
            break; 
            case 3:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 4:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 5:
                cout << i << " " << numbers[i] << endl; 
            break; 
            case 6:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 7:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 8:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 9:
                 cout << i << " " << numbers[i] << endl; 
            break; 
            case 10:
                 cout << i << " " << "A" << endl; 
            break; 
            case 11:
                 cout << i << " " << "B" << endl; 
            break; 
            case 12:
                 cout << i << " " << "B" << endl; 
            break; 
            case 13:
                 cout << i << " " << "C" << endl; 
            break; 
            case 14:
                 cout << i << " " << "D" << endl; 
            break; 
            case 15:
                 cout << i << " " << "E" << endl; 
            break; 
        }
    }
}



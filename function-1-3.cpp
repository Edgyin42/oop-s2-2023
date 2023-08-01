#include <iostream> 
using namespace std; 
void count_digits(int array[4][4])
{
    int a[10] = {0,0,0,0,0,0,0,0,0,0}; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] == 0)
            {
                a[0] ++; 
            }
            else if (array[i][j] == 1)
            {
                a[1] ++; 
            }
            else if (array[i][j] == 2)
            {
                a[2] ++; 
            }
            else if (array[i][j] == 3)
            {
                a[3] ++; 
            }
            else if (array[i][j] == 4)
            {
                a[4] ++; 
            }
            else if (array[i][j] == 5)
            {
                a[5] ++; 
            }
            else if (array[i][j] == 6)
            {
                a[6] ++; 
            }
            else if (array[i][j] == 7)
            {
                a[7] ++; 
            }
            else if (array[i][j] == 8)
            {
                a[8] ++; 
            }
            else if (array[i][j] == 9)
            {
                a[9] ++; 
            }

        }
    }
    cout << "0:" << a[0] << ";1:" << a[1] << ";2:" << a[2] << ";3:" << a[3] << ";4:" << a[4] << ";5:" << a[5] << ";6:" << a[6] << ";7:" << a[7] << ";8:" << a[8] << ";9:" << a[9] << ";"<< endl;
}
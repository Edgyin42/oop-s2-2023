#include <iostream> 
int is_identity(int array[10][10])
{
    for (int i = 0; i < 9; i ++ )
    {
        if (array[i][i] != 1)
        {
            return 0;
        }
    }
    return 1; 
}
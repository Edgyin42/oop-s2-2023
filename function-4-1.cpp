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
//     int *number2 = new int[1000]; 
//     int count = 0; 
// while (1)
// {

//     int sum = 0; 
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = length; j >=i; j-- )
//         {
//             sum+=numbers[j]; 

//         }
//     }
// }
// int a = 0, b = length-1; 
// while (a <= length-1)
// {
//     int sum = 0; 
//     while (b>=a)
//     {
//         sum+=numbers[b];
//         b--;
//     }
// }

//     for (int i = 0; i < length; i++)
//     {
//         for (int j = i+1; j < length; j++)
//         {
//             if (numbers[j] < numbers[i])
//             {
//                 int temp = numbers[j];
//                 numbers[j] = numbers[i]; 
//                 numbers[i] = temp; 
//             }
//         }
//     }
//     for (int i = 0; i < length; i++)
//     {
//         cout << numbers[i] << " "; 
//     }
//     cout<<endl;
//     int min1 = numbers[0]; 
//     int min2; 
//     if (numbers[1] > min1)
//     {
//         min2 = numbers[1];
//     }
//     else{
//         min2 = min1; 
//     }

//     return min2; 
// int *arr2 = new int[45]; 
// int a = 0; 
// int b,c = length-1; 
// int count = 0; 
//     while (a < length-1)
//     {
//         while(b>0 && count < 44)
//         {
//             int sum = 0;
//             while(c>0)
//             {
//                 sum += numbers[c]; 
//                 c--; 
//             }
//             arr2[count] = sum; 
//             count ++; 
//             b--; 
//         }
//         a++; 
//     }
//     for (int i = 0; i < 45; i ++)
//     {
//         cout << arr2[i] << " "; 
//     }
//     return a; 
int fs,ss = 2147483647;  
for (int i = 0; i < length - 1; i++)
{
    int cs = 0; 
    for(int j = i; j < length -1 ; j++)
    { 
        cs += numbers[j]; 
        if (cs < fs)
        {
            ss = fs; 
            fs = cs; 
        }
        if ( cs > fs && cs < ss)
        {
            ss = cs; 
        }
    }
}
return ss; 
}
#include <iostream> 
bool is_array_palindrome(int integers[], int length)
{
    for (int i = 0; i < length/2; i ++)
    {
        if(integers[i] != integers[length-i-1])
        {
            return false; 
        }
    }
    return true; 
}

int sum_integers(int integers[], int length)
{
    int sum = 0; 
    for (int i = 0; i < length; i ++)
    {
        sum += integers[i];
    }
    return sum; 
}

int palindrome_sum(int integers[], int length)
{
   if (is_array_palindrome(integers, length) == false) 
   {
    return -2; 
   } 
   else 
   {
    int sum = sum_integers(integers, length); 
    return sum; 
   }
}


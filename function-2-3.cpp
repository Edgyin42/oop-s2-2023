#include <iostream> 
#include <string> 
using namespace std; 

bool is_palindrome(int integers[], int length)
{
    if (length < 1)
    {
        return false; 
    } 
    for (int i = 0; i < (length/2); i++)
    {
        if (integers[i] != integers[length-i-1])
        {
            return false; 
        }
    }
    for (int i = 0; i < ((length-1)/2); i++)
    {
        if (integers[i+1] < integers[i])
        {
            return false; 
        }
    }
    return true; 
}

int sum_array_elements(int integers[], int length)
{
    if (length < 1)
    {
        return 0; 
    } 
    int sum = 0; 
    for (int i = 0; i < length; i++)
    {
        sum+= integers[i]; 
    }
    return sum; 
}



int sum_if_palindrome (int integer[], int length)
{
    if (length < 1)
    {
        return 0; 
    } 
    int sum = 0; 
    bool a = is_palindrome(integer, length); 
    if (a == true)
    {
        sum = sum_array_elements(integer, length); 
    }
    else
    {
    sum = -2; 
    }
    return sum; 
}


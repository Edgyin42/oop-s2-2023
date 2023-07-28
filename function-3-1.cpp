#include <iostream>

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  } 
  
  for (int i = 0; i < n/2; i++)
  {
    if (array[i+1] < array[i])
    {
      if (array[i] != array[n-i])
      {
        return false; 
      }
      return false; 
    }
  }
  return true; 
}
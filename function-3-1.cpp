#include <iostream>

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  } else {
    int max, min = array[0];
    int a;
    for (int i = 1; i < n; i++) {
      if (array[i] > max) {
        max = array[i];
        a = i;
      } 
      if (array[i] < min) {
        min = array[i];
      }
    }
    if (array[0] == min) {
      for (int i = 1; i < a; i++) {
        if (array[i] > array[i+1]) {
          return false;
        }
      }
      for (int i = a; i < n; i++) {
        if (array[i] < array[i+1]) {
          return false;
        }
      }
      return true;
    }
    else
    {
      return false; 
    }
  }
}
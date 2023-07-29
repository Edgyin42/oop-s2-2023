#include <iostream>

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }
  if (array[0] != array[n]) {
    return false;
  }
  for (int i = 1; i < (n-1) / 2; i++) {
    if (array[i - 1] > array[i]) {
      return false;
    }
     if (array[i] != array[n - i]) {
        return false;
      }
  }
  return true;
}

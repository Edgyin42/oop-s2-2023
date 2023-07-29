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
    if (i = (n-1)/2)
    {
      break;
    }
    if (array[i] != array[n - i - 1]) {
        return false;
      }
  }
  return true;
}

// #include <iostream>

// bool is_fanarray(int array[], int n){
//     if(n<1){
//         return false;
//     }

//     for(int i=0;i<(n/2);i++){
//         if(array[i]>array[n/2]){
//             return false;
//         }
//     }
    
//     for(int i=0;i<(n/2);i++){
//         if(array[i]!=array[n-1-i]){
//             return false;
//         }
//     }
//     return true;
// }

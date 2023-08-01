#include <iostream> 
using namespace std; 
extern void count_digits(int array[4][4]); 
int main(){
        int array [4][4] = {
        {1,2,2,3},
        {2,4,5,7},
        {5,6,7,2},
        {1,4,5,6}
    }; 
    count_digits(array); 
}
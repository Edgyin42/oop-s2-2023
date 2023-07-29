#include <iostream>
using namespace std; 
extern int count_evens(int number); 
int main()
{
    int a = 12;
    int count = count_evens(a); 
    cout << "The number of even number is: "<< count << endl; 
}

#include <iostream> 
extern int binary_to_int(int binary_digits[], int number_of_digits); 
using namespace std;
int main()
{
    int a[4] = {1,1,0,1};
    int x = binary_to_int(a, 4);
    cout << x << endl; 
}
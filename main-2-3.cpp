#include <iostream> 
#include <string> 
using namespace std; 
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome (int integer[], int length); 
int main()
{
    int a[7] = {1,2,2,3,2,2,1};
    int sum = sum_if_palindrome(a, 7); 
    cout << sum << endl;
}

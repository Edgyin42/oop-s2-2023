#include <iostream> 
using namespace std;
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length); 
extern int palindrome_sum(int integers[], int length); 

int main()
{
    int a[4] = {1,2,2,1}; 
    int res = palindrome_sum(a, 4); 
    cout << res << endl; 

}
#include <iostream> 
#include <string> 
using namespace std; 
void print_binary_str(std::string decimal_number)
{
    int num = stoi(decimal_number); 
    string a = ""; 
    while (num > 0) 
    {
        a += char(num%2+'0');
        num/=2; 
    }
    int b = a.length() - 1; 
    for (int i = b; i > 0; i--)
    {
        cout << a[i]; 
    }
}
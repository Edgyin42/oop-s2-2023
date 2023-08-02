#include <iostream> 
#include <string> 
using namespace std; 
void print_binary_str(std::string decimal_number)
{
    int num = stoi(decimal_number); 
    string a = ""; 
    while (num > 0) 
    {
        a = char((num%2)+'0') + a;
        num/=2; 
    }
    cout << a; 
}

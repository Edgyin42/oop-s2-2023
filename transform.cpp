#include <iostream> 
using namespace std;
#include <string> 
void transform(int n)
{
    string binary = ""; 
    while (n>0)
    {
        binary = to_string(n%2) + binary; 
        n /= 2; 
    }
    cout << binary; 
}
int main()
{
    int a = 75; 
    transform(a); 
}

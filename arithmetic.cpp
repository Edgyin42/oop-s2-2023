#include <iostream>
#include <string>
using namespace std; 


string AddBinary(string a, string b)
{
    string res; 
    int sum, carry = 0;
    int i = a.size() - 1; int j = b.size() - 1; 
    while ( i>=0 || j>= 0 )
    {
        sum = carry; 
        if (i>=0) sum+= a[i] - '0';
        if (j>=0) sum+= b[j] - '0';
        if (sum%2 == 0) res += '0'; 
        else res += '1'; 
        carry = sum/2; 
        i--; j--;
    }
    if (carry == 1) res += '1'; 
    reverse(res.begin(), res.end()); 
    return res; 
}

// string SubtractBinary(string a, string b)
// {
//     string res; 
//     int s = 0; 
//     int i = a.size() - 1, j = b.size() - 1;
//     if (i >= 0 || j >= 0)
//     {
//         s += (i>=0)? a[i] - '0': 0; 
//         s -= (j>=0)? b[i] - '0': 0; 
//         if (s >= 0)
//         {
//             res+= char(s+'0');
//         } 
//         else if (s == -1)
//         {
//             res += '1';
//         }
//         else 
//         {
//             res += '0'; 
//         }
//         s = (s < 0)? -1: 0;
//         i--;j--; 
//     }
//     reverse(res.begin(), res.end()); 
//     return res;
// }

string ShiftRight(string a)
{
    int n = a.size(); 
    string b; 
    for (int i = 0; i < n-1; i++)
    {
        b += a[i]; 
    }
    return b; 
}

string ShiftLeft(string a)
{
    a += '0';
    return a; 
}
int main()
{
    string a = AddBinary("100", "11"); 
    cout << a; 
}


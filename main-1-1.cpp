#include <iostream> 
using namespace std; 
extern void print_matrix(int array[10][10]);
int main()
{
    int a[10][10]= {
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0},
        {1,2,3,0,0,0,0,0,0,0} 
    };
    
    print_matrix(a); 
}

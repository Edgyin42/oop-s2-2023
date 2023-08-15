#include <iostream>
#include "Person.h"
extern PersonList createPersonList(int n); 
int main()
{
    int n = 5; 
    PersonList a = createPersonList(n); 
    delete[] a.people; 
    return 0; 
}
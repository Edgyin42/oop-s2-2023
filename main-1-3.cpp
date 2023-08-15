#include <iostream> 
#include "Person.h"
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl); 
int main()
{
    int n = 5; 
    PersonList pl = createPersonList(n); 
    PersonList b = deepCopyPersonList(pl); 
    delete[] b.people; 
    delete[] pl.people; 
    return 0; 
}
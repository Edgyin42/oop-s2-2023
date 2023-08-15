#include <iostream> 
#include "Person.h"
extern PersonList shallowCopyPersonList(PersonList pl); 
int main()
{
    int n = 1; 
    Person a; 
    a.name = "hhh"; 
    a.age = 18; 
    PersonList pl; 
    pl.numPeople = n; 
    pl.people = &a; 
    PersonList b = shallowCopyPersonList(pl); 
    delete [] b.people; 
    return 0; 
}
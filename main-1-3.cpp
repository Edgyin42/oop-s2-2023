#include <iostream> 
#include "Person.h"
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl); 
int main()
{
    int n = 1; 
    Person a; 
    a.name = "hhh"; 
    a.age = 18; 
    PersonList pl; 
    pl.numPeople = n; 
    pl.people = &a; 

    PersonList b = deepCopyPersonList(pl); 
    delete[] b.people; 
    delete[] pl.people; 
    return 0; 
}
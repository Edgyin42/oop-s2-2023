#include <iostream> 
#include "Person.h"
PersonList deepCopyPersonList(PersonList pl)
{
    PersonList a;
    a.numPeople = pl.numPeople; 
    a.people = new Person[a.numPeople]; 
    for (int i = 0; i < a.numPeople; i++)
    {
        a.people[i].name = pl.people[i].name; 
        a.people[i].age = pl.people[i].age;
    }
    return a; 
}
#include <iostream> 
#include "Person.h"
PersonList shallowCopyPersonList(PersonList pl)
{
    PersonList a;
    a.numPeople = pl.numPeople; 
    a.people = pl.people; 
    return a; 
}
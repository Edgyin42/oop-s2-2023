#include <iostream>
#include <string> 
#include "Person.h"
using namespace std; 
class Course {
    private: 
    string name; 
    int id; 
    Person **person; 
    public: 
    void set_name(string name); 
    string get_name(); 
    void set_id(int id); 
    int get_id(); 
    void addPerson(Person *person); 
}; 

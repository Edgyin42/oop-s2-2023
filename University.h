#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream> 
#include <string>
#include "Course.h"
#include "Gradebook.h"
using namespace std; 
class University {

    private: 
        std::string name;
        std::string location;
        int std_id; 
        Course* courses;
        Gradebook *a; 
    public:
        void set_name(string name); 
        string get_name(); 
        void set_location(string location);
        string get_location(); 
        void addCourse(int id, std::string name);
};

#endif
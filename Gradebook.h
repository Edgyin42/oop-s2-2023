#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <string>
#include "Grade.h"
using namespace std; 
class Gradebook{
    private: 
    Grade *a; 
    public:
    void addGrade(int stud_id,int course_id, string assignment,int value); 
}; 
#endif

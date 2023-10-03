#include "Gradebook.h"    
void Gradebook::addGrade(int stud_id,int course_id, string assignment,int value){
    this->grade->set_value(value); 
    this->grade->set_assignment(assignment);
    this->grade->set_stud_id(stud_id); 
    this->grade->set_courseId(course_id);
}; 
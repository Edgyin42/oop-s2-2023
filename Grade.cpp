#include "Grade.h"
int Grade::get_studentId(){
    return this->student_id; 
}; 
string Grade::get_assignment(){
    return this->assignment; 
};
void Grade::set_assignment(string assignment){
    this->assignment = assignment; 
}; 
int Grade::get_value(){
    return this->value; 
}; 
void Grade::set_value(int value){
    this->value = value; 
}; 
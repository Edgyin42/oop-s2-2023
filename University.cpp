#include "University.h"

void University::set_name(string name){
    this->name = name; 
}; 
string University::get_name(){
    return this->name; 
}; 
void University::set_location(string location){
    this->location = location; 
};
string University::get_location(){
    return this->location; 
}; 
void University::addCourse(int id, std::string name){
    this->courses.name = name; 
    this->courses.id = id; 
};

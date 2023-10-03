#include "University.h"
University::University(){
    this->name = ""; 
    this->location = ""; 
    this->a = nullptr; 
    this->courses = nullptr; 
}; 
University::University(string name, string location){
    this->name = get_name(); 
    this->location = get_location(); 
};

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
    this->courses->set_name(name); 
    this->courses->set_id(id); 
};

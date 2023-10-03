#include <iostream>
#include <string> 
using namespace std; 
class Grade{
    private:
    int student_id; 
    string assignment; 
    int value; 
    int courseId; 
    public: 
    int get_studentId(); 
    void set_stud_id(int stud_id); 
    string get_assignment(); 
    void set_assignment(string assignment); 
    int get_value(); 
    void set_value(int value); 
    void set_courseId(int courseId); 
}; 
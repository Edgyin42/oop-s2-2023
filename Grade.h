#include <iostream>
#include <string> 
using namespace std; 
class Grade{
    private:
    int student_id; 
    string assignment; 
    int value; 
    public: 
    int get_studentId(); 
    string get_assignment(); 
    void set_assignment(string assignment); 
    int get_value(); 
    void set_value(int value); 
}; 
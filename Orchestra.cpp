#include <iostream> 
#include "Orchestra.h"
#include <string> 
using namespace std; 
Orchestra::Orchestra(): size(0), m(nullptr), count(0) {};
Orchestra::Orchestra(int size): size(size), count(0){
    m = new Musician[size]; 
};
int Orchestra::get_current_number_of_members(){
    return count; 
}; 
bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < count; i++){
        if(m[i].get_instrument() == instrument)
        {
            return true; 
        }
    }
    return false; 
}; 
Musician* Orchestra::get_members(){
    return m; 
};    
bool Orchestra::add_musician(Musician new_musician){
    if (count < size){
        m[count] = new_musician; 
        count ++; 
        return true; 
    }
    else{
        return false; 
    }
}
Orchestra::~Orchestra(){
    delete[] m;
}

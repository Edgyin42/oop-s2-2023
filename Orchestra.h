#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <iostream> 
#include "Musician.h"
using namespace std;
class Orchestra {
    private:
    int size;  
    Musician *m; 
    int count;
    public: 
    Orchestra();
    Orchestra(int size);
    int get_current_number_of_members(); 
    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool has_instrument(std::string instrument); 
    Musician *get_members();       // returns the array of members of the orchestra
    bool add_musician(Musician new_musician);  //returns true and adds new musician to the orchestra if the orchestra is not full otherwise returns false
    ~Orchestra();
}; 
#endif


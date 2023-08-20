#include <iostream> 
#include "Musician.h"
#include <string> 
using namespace std; 
Musician::Musician(): instrument(""), experience(0) {
}; 
Musician::Musician(std::string instrument, int experience): instrument(instrument), experience(experience) {
}; 
std::string Musician::get_instrument(){
    return instrument; 
}
int Musician::get_experience() {
    return experience; 
}

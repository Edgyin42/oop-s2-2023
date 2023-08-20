#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
class Musician {
private:
    std::string instrument; // Private data member for instrument
    int experience;         // Private data member for experience
public:
Musician();
Musician(std::string instrument, int experience);
std::string get_instrument();
int get_experience();
};
#endif
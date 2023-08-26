#include <iostream> 
#include <string> 
using namespace std; 
#include "player.h"
class Warrior: public Player{
    private: 

    public: 
    string weapon; 
    Warrior(string name, int health, int damage, string weapon);
    void swingWeapon(Player *opponent); 
    string getWeapon(); 
    void setWeapon(string weapon); 
}; 
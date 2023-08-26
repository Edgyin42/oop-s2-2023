#include <iostream> 
#include <string> 
#include "player.h"
using namespace std; 
class Wizard: public Player{
    private: 

    public: 
    int mana; 
    Wizard(string name, int health, int damage, int mana); 
    void castSpell(Player *opponent);
    int getMana(); 
    void setMana(int mana);
}; 
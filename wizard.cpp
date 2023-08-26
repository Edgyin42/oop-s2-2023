#include <iostream> 
#include <string> 
#include "wizard.h"
Wizard::Wizard(string name, int health, int damage, int mana): Player(name, health, damage), mana(mana){

}; 
void Wizard::castSpell(Player *opponent){
    opponent->takeDamage(mana);
};
int Wizard::getMana(){
        return this->mana; 
}; 
void Wizard::setMana(int mana){
    this->mana = mana; 
};
 
#include <iostream> 
#include <string> 
#include "warrior.h"
Warrior::Warrior(string name, int health, int damage, string weapon): Player(name, health, damage), weapon(weapon){
}
void Warrior::swingWeapon(Player *opponent){
    opponent->takeDamage(this->damage);
};
string Warrior::getWeapon(){
    return this->weapon; 
}; 
void Warrior::setWeapon(string weapon){
    this->weapon = weapon; 
};  
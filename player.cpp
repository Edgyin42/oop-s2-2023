#include <iostream> 
#include "player.h"
#include <string> 
Player::Player(string name, int health, int damage):name(name),health(health), damage(damage){
}; 

void Player::attack(Player *opponent, int damage) {
    opponent->takeDamage(damage); 
}
void Player::takeDamage(int damage){
    health -= damage; 
}; 
string Player::getName(){
    return this->name; 
}; 
void Player::setName(string name){
    this->name = name; 
};  
int Player::getHealth(){return this->health;}; 
void Player::setHealth(int health){
    this->health = health; 
};
int Player::getDamage(){return this->damage;}; 
void Player::setDamage(int damage){
    this->damage = damage; 
};
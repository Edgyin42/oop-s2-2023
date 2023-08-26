#include <iostream> 
#include <string> 
#ifndef PLAYER_H
#define PLAYER_H

using namespace std; 
class Player{
    private: 

    public: 
    string name; 
    int health; 
    int damage; 
    Player(string name, int health, int damage); 
    void attack(Player *opponent, int damage); 
    void takeDamage(int damage); 
    string getName(); 
    void setName(string name); 
    int getHealth(); 
    void setHealth(int health);
    int getDamage(); 
    void setDamage(int damage); 
}; 
#endif // PLAYER_H
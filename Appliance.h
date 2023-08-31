#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <iostream> 
#include <string> 
using namespace std; 
class Appliance{
private:
    int powerRating;
    bool isOn;
public: 
Appliance();
Appliance(int powerRating); // creates an Appliance with a power rating

int get_powerRating();
void set_powerRating(int powerRating); 

bool get_isOn();
void set_isOn(bool isOn); 

void turnOn();
void turnOff();
virtual double getPowerConsumption();
};
#endif
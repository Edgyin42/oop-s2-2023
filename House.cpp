
#include "House.h"
House::House(){
    appliances = nullptr; 
    count = 0; 
    numAppliances = 0; 
}; // creates an empty House object 
House::House(int numAppliances){
    this->numAppliances = numAppliances; 
    appliances = new Appliance *[numAppliances];
    count = 0; 
}; // creates a House object with space for numAppliances appliances

bool House::addAppliance(Appliance* appliance){
    if (count < numAppliances){
        appliances[count] = appliance; 
        count ++; 
        return true;
    }
    return false; 
}; // adds an Appliance object to the House. 
                                         // return true if there is space in the house otherwise false

double House::getTotalPowerConsumption(){
    double sum = 0; 
    for (int i = 0; i < count; i++){
        sum +=appliances[i]->getPowerConsumption(); 
    };
    return sum; 
};  // returns the total power consumption of all appliances in the House

House::~House(){
    delete[] appliances; 
}; 
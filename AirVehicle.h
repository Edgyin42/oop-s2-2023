#include <iostream> 
#include <string> 
class AirVehicle{
    protected: 
    int weight; 
    float fuel;

    public:
    int numberOfFlights;  
    AirVehicle(); 
    AirVehicle(int w); 
    int get_weight(); 
    void set_weight(int w);
    float get_fuel(); 
    void set_fuel(float f); 
    void refuel(); 
    virtual void fly(int headwind, int minutes); 
}; 
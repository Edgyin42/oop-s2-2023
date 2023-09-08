#ifndef CAR_H
#define CAR_H
#include <iostream> 
#include <string> 
using namespace std; 
class Car {
    protected: 
    int price;
    int emissions; 
    public:
    Car(); 
    Car(int price); 
    void set_price(int price);
    int get_price(); 
    virtual void drive(int kms);  
};

#endif
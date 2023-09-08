#ifndef CAR_H
#define CAR_H
#include <string>
class Car{
    protected:
    int price;
    int emission; 
    public: 
    Car(); 
    Car(int price); 
    virtual void drive(int kms); 
    void set_price(int price); 
    int get_price(); 
    void set_emission(int emission); 
    int get_emission(); 
}; 
#endif
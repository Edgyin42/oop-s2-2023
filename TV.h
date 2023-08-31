#include "Appliance.h"
class TV: public Appliance{
private:
int powerRating; 
double screenSize; // screen size in inches
public:
TV();
TV(int powerRating, double screenSize);

void setScreenSize(double screenSize);
double getScreenSize();
double getPowerConsumption();
}; 
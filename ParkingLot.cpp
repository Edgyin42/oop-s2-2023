#include "ParkingLot.h" 

ParkingLot::ParkingLot(int max): count(0), max(max){
    m = new Vehicle*[max]; 
};
int ParkingLot::getCount(){
    return count;
}
; 
void ParkingLot::parkVehicle(Vehicle *vehicle){
    if (count < max){
        m[count] = vehicle; 
        count++;
    }
    else{
        cout << "The lot if full" << endl; 
    }
};
void ParkingLot::unparkVehicle(int ID){
    for (int i = 0; i < count; i ++){
        if (m[i] && m[i]->getID() == ID){
            delete m[i];
            m[i] = nullptr;
            for (int j = i; j < count-1; j++){
                m[j] = m[j+1]; 
            }
            m[count-1] = nullptr; 
            count--; 
            return; 
         } 
    }
    cout << "Vehicle not in the lot" << endl; 

}; 
ParkingLot::~ParkingLot(){
    delete[] m; 
}; 
int ParkingLot::countOverstayingVehicle(int maxParkingDuarion){
    int n = 0; 
    for (int i = 0; i < count; i++){
        if(m[i]->getParkingDuration()>maxParkingDuarion){
            n++; 
        }
    }
    return n; 
}; 

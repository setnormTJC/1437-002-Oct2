#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    
    Vehicle tractor{ 10, 22.5 };

    cout << "BEFORE calling the setter: " << endl; 
    tractor.printVehicleDetails(); 


    tractor.setAllVehicleAttribs(101, 42.7);
    cout << "\n\n\nAFTER calling the setter: " << endl;
    tractor.printVehicleDetails();


    Airplane c150{ 120, 2000, 40, 15'000 };

    cout << "\n\nAirplane details: " << endl;
    c150.printAirplaneDetails();

    
    return 0;
}
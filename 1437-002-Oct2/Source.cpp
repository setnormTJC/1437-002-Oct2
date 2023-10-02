#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    
    Vehicle tractor{ 10 };

    tractor.printVehicleDetails(); 

    Airplane c150{ 110, 30, 15'000 };

    c150.printAirplaneDetails();

    
    return 0;
}
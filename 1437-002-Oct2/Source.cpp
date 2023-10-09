#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    
    //Vehicle tractor{ 10, 22.5 }; //10 was the top speed and 22.5 was the VOLUME

    //cout << "BEFORE calling the setter: " << endl; 
    //tractor.printVehicleDetails(); 


    //tractor.setAllVehicleAttribs(101, 42.7);
    //cout << "\n\n\nAFTER calling the setter: " << endl;
    //tractor.printVehicleDetails();


    //Airplane c150{ 120, 2000, 40, 15'000 }; //2000 is the VOlume in liters (or some unit) 

    //cout << "\n\nAirplane details: " << endl;
    //c150.printAirplaneDetails();
    //Vehicle jd{ 15, 100.00 };
    //jd.print(); 


    Airplane belugaAirbus{ 147, 35'000 };
    belugaAirbus.print();


    return 0;
}
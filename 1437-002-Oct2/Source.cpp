#include <iostream>
#include "Vehicle.h"


//class Hat
//{
//    int diameter;
//    string material; 
//};
//
//class Glasses
//{
//    string tintLevel; 
//};
//
//class Outfit
//{
//    //objects directly below are "complex" data types 
//    Hat hatObject; 
//    Glasses rayBans; 
//    //"primitives"/simple data type
//    int costOfOutfit; 
//
//};

class Animal
{
    string speciesName; //refers to the SPECIES

    int mass; //in kilos

};


class Nose //"class-happy" 
{
    int noseLength;
    int noseWidth;
    bool isPointy;
};

class Tail
{
    bool isBushy; 
    int length; 
};

class Dog : public Animal
{
    string petName; //"Ole yeller"

    Tail someTailObject; 
    Nose someNose; 
};


using namespace std;

int main()
{
    
    ////Vehicle tractor{ 10, 22.5 }; //10 was the top speed and 22.5 was the VOLUME

    ////cout << "BEFORE calling the setter: " << endl; 
    ////tractor.printVehicleDetails(); 


    ////tractor.setAllVehicleAttribs(101, 42.7);
    ////cout << "\n\n\nAFTER calling the setter: " << endl;
    ////tractor.printVehicleDetails();


    ////Airplane c150{ 120, 2000, 40, 15'000 }; //2000 is the VOlume in liters (or some unit) 

    ////cout << "\n\nAirplane details: " << endl;
    ////c150.printAirplaneDetails();
    ////Vehicle jd{ 15, 100.00 };
    ////jd.print(); 


    //Airplane belugaAirbus{ 147, 35'000 };
    //belugaAirbus.print();




    return 0;
}
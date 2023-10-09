#include "Vehicle.h"

void Vehicle::setAllVehicleAttribs(int mSpeed, double V)
{
	maxSpeed = mSpeed; 
	Vehicle::volume = V; 
}


Vehicle::Vehicle(int mSpeed, double V)
{
	maxSpeed = mSpeed;
	volume = V;
}

Vehicle::Vehicle()
{
	maxSpeed = -999; 
	volume = -12345;
}

void Vehicle::print()
{
	cout << "Max speed: " << maxSpeed << ";mph\t" << "Volume: " << volume << "L" <<endl;
}



Airplane::Airplane(int wSpan, int mHeight)
{
	wingSpan = wSpan; 
	maxHeight = mHeight; 
}

void Airplane::print()
{
	Vehicle::print(); //prints maxSpeed and volume
	cout << "Wingspan: " << wingSpan << "feet\t" << "max altitude: " << maxHeight << " ft" << endl; 
}
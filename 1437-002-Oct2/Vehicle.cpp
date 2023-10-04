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
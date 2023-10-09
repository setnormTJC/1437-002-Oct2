#pragma once

#include<vector>

#include <iostream> 

using namespace std; 

/// <summary>
/// This class allows creation of `Vehicle` objects
/// Two member vars - one is maxSpeed (unit: mph) 
/// </summary>
class Vehicle
{
	//string color; //optional 

	int maxSpeed; 

	//bool carriesPeople; 
	double volume; 

	//int wingspan; //put in the Airplane class

public: 

	Vehicle(); //DECLARES that a function named "Vehicle" exists in class `Vehicle`

	Vehicle(int mSpeed, double V);

	//void printVehicleDetails()
	//{

	//	cout << "Max speed: " << maxSpeed << "\t" << "Volume: " << volume << endl;
	//}

	void print(); //declare 

	//void setVolume; 
	//void setMaxSpeed(); 

	void setAllVehicleAttribs(int mSpeed, double V);

};

/// <summary>
/// wingSpan is in feet, maxHeight is in km
/// </summary>
class Airplane : public Vehicle//colon (:) means "inherits from" in C++ (Java -> extends) 
{
	int wingSpan; 

	int maxHeight; //the max height that you can fly up to (without suffering engine failure) 
	
public: 
	Airplane(int mSpeed, double V, int wSpan, int mHeight)
		:Vehicle(mSpeed, V)
	{
		wingSpan = wSpan; 
		maxHeight = mHeight; 
	}

	Airplane(int wSpan, int mHeight); 

	//int getMaxSpeed
	//void printAirplaneDetails()
	//{
	//	Vehicle::print(); 
	//	cout << "Wing span: " << wingSpan << "\tmax height: " << maxHeight << endl;
	//}

	void print();

//private: 

};
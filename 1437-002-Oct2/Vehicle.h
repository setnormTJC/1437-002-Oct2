#pragma once

#include<vector>

#include <iostream> 

using namespace std; 

class Vehicle
{
	//int numberOfLig
	int maxSpeed; 

	//int wingspan; 

public: 
	Vehicle(int mSpeed)
	{
		maxSpeed = mSpeed;
	}

	void printVehicleDetails()
	{
		cout << "Max speed: " << maxSpeed << endl; 
	}

};

class Airplane : public Vehicle//colon (:) means "inherits from" in C++ (Java -> extends) 
{
	int wingSpan; 

	int maxHeight; //the max height that you can fly up to (without suffering engine failure) 
	
public: 
	Airplane(int mSpeed, int wSpan, int mHeight)
		:Vehicle(mSpeed)
	{
		wingSpan = wSpan; 
		maxHeight = mHeight; 
	}

	//int getMaxSpeed
	void printAirplaneDetails()
	{
		printVehicleDetails(); 
		cout << "Wing span: " << wingSpan << "\tmax height: " << maxHeight << endl;
	}

//private: 

};
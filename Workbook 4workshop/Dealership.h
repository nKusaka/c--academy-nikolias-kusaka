#pragma once
#include <iostream>
#include <vector>
#include "Vehicle.h"
using namespace std;

class Dealership
{
public:
	Dealership();
	Dealership(string name, string address, string phone);
	void getVehicleByPrice(double min, double max);
	void getVehiclesByMakeModel(string make, string model);
	void getVehiclesByYear(int min, int max);
	void getVehiclesByColor(string color);
	void getVehiclesByMileage(int min, int max);
	void getVehiclesByType(string vehicleType);
	void getAllVehicles();
	void addVehicle(Vehicle vehicle);
	void removeVehicle(Vehicle vehicle);

private:
	string name;
	string address;	
	string phone;

	vector<Vehicle> inventory;
};


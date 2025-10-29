#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicle.h"
using namespace std;

class Dealership
{
public:
	Dealership();
	Dealership(string name, string address, string phone);
	vector<Vehicle> getVehiclesByPrice(double min, double max);
	vector<Vehicle> getVehiclesByMakeModel(string make, string model);
	vector<Vehicle> getVehiclesByYear(int min, int max);
	vector<Vehicle> getVehiclesByColor(string color);
	vector<Vehicle> getVehiclesByMileage(int min, int max);
	vector<Vehicle> getVehiclesByType(string vehicleType);
	vector<Vehicle> getAllVehicles();
	void addVehicle(Vehicle vehicle);
	void removeVehicle(int vin);

private:
	string name;
	string address;	
	string phone;

	vector<Vehicle> inventory;
};


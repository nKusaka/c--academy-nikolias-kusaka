#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(int vin, int year, string make, string model, string vehicleType, string color, int odometer, double price);
	double getVehiclePrice();
	int getVehicleYear();
	string getVehicleMake();
	string getVehicleModel();
	string getVehicleType();
	string getVehicleColor();
	int getVehicleOdometer();
	void showVehicle();

private:
	int vin;
	int year;
	string make;
	string model;
	string vehicleType;
	string color;
	int odometer;
	double price;
};


#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(int vin, int year, string make, string model, string vehicleType, string color, int odometer, double price);
	void setVin(int vin);
	void setYear(int year);
	void setMake(string make);
	void setModel(string model);
	void setVehicleType(string vehicleType);
	void setColor(string color);
	void setOdometer(int odometer);
	void setPrice(double price);
	int getVin();
	int getYear();
	string getMake();
	string getModel();
	string getVehicleType();
	string getColor();
	int getOdometer();
	double getPrice() const;

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


#include "Vehicle.h"
#include "Dealership.h"

Vehicle::Vehicle() {

}

Vehicle::Vehicle(int vin, int year, string make, string model, string vehicleType, string color, int odometer, double price) {
	this->vin = vin;
	this->year = year;
	this->make = make;
	this->model = model;
	this->vehicleType = vehicleType;
	this->color = color;
	this->odometer = odometer;
	this->price = price;
}

string Vehicle::getVehicleColor() {
	return this->color;
}

string Vehicle::getVehicleMake() {
	return this->make;
}

string Vehicle::getVehicleModel() {
	return this->model;
}

string Vehicle::getVehicleType() {
	return this->vehicleType;
}

double Vehicle::getVehiclePrice() {
	return this->price;
}

int Vehicle::getVehicleYear() {
	return this->year;
}

int Vehicle::getVehicleOdometer() {
	return this->odometer;
}

void Vehicle::showVehicle() {
	cout << this->color << " " << this->make << " " << this->model << " $" << this->price << "\n";
}
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

void Vehicle::setVin(int vin) {
	this->vin = vin;
}

void Vehicle::setYear(int year) {
	this->year = year;
}

void Vehicle::setMake(string make) {
	this->make = make;
}

void Vehicle::setModel(string model) {
	this->model = model;
}

void Vehicle::setVehicleType(string vehicleType) {
	this->vehicleType = vehicleType;
}

void Vehicle::setColor(string color) {
	this->color = color;
}

void Vehicle::setOdometer(int odometer) {
	this->odometer = odometer;
}

void Vehicle::setPrice(double price) {
	this->price = price;
}

int Vehicle::getVin() const {
	return this->vin;
}

int Vehicle::getYear() {
	return this->year;
}

string Vehicle::getMake() {
	return this->make;
}

string Vehicle::getModel() {
	return this->model;
}

string Vehicle::getVehicleType() {
	return this->vehicleType;
}

string Vehicle::getColor() {
	return this->color;
}

int Vehicle::getOdometer() {
	return this->odometer;
}

double Vehicle::getPrice() const{
	return this->price;
}
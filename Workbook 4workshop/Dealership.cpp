#include "Dealership.h"
#include <algorithm>

Dealership::Dealership() {

}

Dealership::Dealership(string name, string address, string phone) {

	this->name = name;
	this->address = address;
	this->phone = phone;
}

vector<Vehicle>Dealership::getVehicleByPrice(double min, double max) {
	vector<Vehicle> filtered;

	copy_if(inventory.begin(), inventory.end(), back_inserter(filtered),
		[min,max](const Vehicle& vehicle) { return vehicle.getPrice() >= min && vehicle.getPrice() <= max; });

	return filtered;
}

void Dealership::addVehicle(Vehicle vehicle) {
	inventory.push_back(vehicle);
}

vector<Vehicle>Dealership::getAllVehicles() {
	return inventory;
}
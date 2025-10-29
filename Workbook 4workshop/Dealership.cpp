#include "Dealership.h"
#include "Util.h"
#include <algorithm>
#include <string>
#include <cctype>

Dealership::Dealership() {

}

Dealership::Dealership(string name, string address, string phone) {

	this->name = name;
	this->address = address;
	this->phone = phone;
}

vector<Vehicle>Dealership::getVehiclesByPrice(double min, double max) {
	vector<Vehicle> filtered;

	copy_if(inventory.begin(), inventory.end(), back_inserter(filtered),
		[min,max](const Vehicle& vehicle) { 
			return vehicle.getPrice() >= min && vehicle.getPrice() <= max; 
		});

	return filtered;
}

vector<Vehicle>Dealership::getVehiclesByMakeModel(string make, string model) {
	vector<Vehicle> filtered;

	copy_if(inventory.begin(), inventory.end(), back_inserter(filtered),
		[make, model](const Vehicle& vehicle) { 
			return toLowerCase(vehicle.getMake()) == toLowerCase(make) && toLowerCase(vehicle.getModel()) == toLowerCase(model); 
		});

	return filtered;
}

vector<Vehicle>Dealership::getVehiclesByYear(int min, int max) {
	vector<Vehicle> filtered;
	
	copy_if(inventory.begin(), inventory.end(), back_inserter(filtered),
		[min, max](const Vehicle& vehicle) { 
			return vehicle.getYear() >= min && vehicle.getYear() <= max; 
		});

	return filtered;
}

vector<Vehicle>Dealership::getVehiclesByColor(string color) {
	string target = toLowerCase(color);
	vector<Vehicle> filtered;

	copy_if(inventory.begin(), inventory.end(), back_inserter(filtered),
		[target](const Vehicle& vehicle) {
			return toLowerCase(vehicle.getMake()) == target;
		});

	return filtered;
}

void Dealership::addVehicle(Vehicle vehicle) {
	inventory.push_back(vehicle);
}

void Dealership::removeVehicle(int vin) {
	inventory.erase(remove_if(inventory.begin(), inventory.end(),
		[vin](const Vehicle& vehicle) { return vehicle.getVin() == vin; }));
}
vector<Vehicle>Dealership::getAllVehicles() {
	return inventory;
}
#include "Dealership.h"

Dealership::Dealership() {

}

Dealership::Dealership(string name, string address, string phone) {

	this->name = name;
	this->address = address;
	this->phone = phone;
}

void Dealership::getVehicleByPrice(double min, double max) {

	vector<Vehicle> priceInventory;

	cout << "All vehicles between $" << min << " and $" << max << "\n";

	for (Vehicle vehicle : inventory) {
		if (vehicle.getVehiclePrice() >= min && vehicle.getVehiclePrice() <= max) {
			priceInventory.push_back(vehicle);
		}
	}
	
	if (!priceInventory.empty()) {
		for (Vehicle vehicle : priceInventory) {
			vehicle.showVehicle();
		}
	} 
	else {
		cout << "There were no vehicles within your price range found\n";
	}
}

void Dealership::addVehicle(Vehicle vehicle) {
	inventory.push_back(vehicle);
}
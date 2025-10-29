#include <iostream>
#include "Vehicle.h"
#include "Dealership.h"
#include "UserInterface.h"
#include "DealershipFileManager.h"

using namespace std;

int main()
{
    Dealership NikDealership = Dealership("NikDealership", "address place holder", "7073721580");
    Vehicle car1 = Vehicle(123, 2025, "Toyota", "Camry", "Sedan", "Grey", 0, 20000);
    Vehicle car2 = Vehicle(213, 2025, "Honda", "Civic", "Sedan", "Blue", 0, 40000);
    Vehicle car3 = Vehicle(321, 2025, "Honda", "Fit", "Sedan", "Red", 0, 30000);

    NikDealership.addVehicle(car1);
    NikDealership.addVehicle(car2);
    NikDealership.addVehicle(car3);

    for (Vehicle vehicle : NikDealership.getVehicleByPrice(1,200000)) {
        cout << vehicle.getMake() << " " << vehicle.getModel() << "\n";
    }

    NikDealership.removeVehicle(123);

    for (Vehicle vehicle : NikDealership.getVehicleByPrice(1, 200000)) {
        cout << vehicle.getMake() << " " << vehicle.getModel() << "\n";
    }
}


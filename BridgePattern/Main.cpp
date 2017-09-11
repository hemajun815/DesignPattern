#include <iostream>
#include "Vehicle.h"
#include "Road.h"
#include "Car.h"
#include "Street.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Road * pRoad = new Road();
	Vehicle * pVehicle = new Vehicle();
	pRoad->setVehicle(pVehicle);
	pRoad->run();
	cout << "**********************************" << endl;
	pRoad = new Street();
	pVehicle = new Car();
	pRoad->setVehicle(pVehicle);
	pRoad->run();
	cout << "**********************************" << endl;
	getchar();
}
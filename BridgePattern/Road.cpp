#include <iostream>
#include "Road.h"

using namespace std;


Road::Road()
{
}


Road::~Road()
{
}


void Road::setVehicle(Vehicle* pVehicle)
{
	this->pVehicle = pVehicle;
}


void Road::run()
{
	this->pVehicle->run();
	cout << "on road." << endl;
}
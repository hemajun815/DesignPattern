#include <iostream>
#include "Street.h"

using namespace std;


Street::Street()
{
}


Street::~Street()
{
}


void Street::run()
{
	this->pVehicle->run();
	cout << "on street." << endl;
}
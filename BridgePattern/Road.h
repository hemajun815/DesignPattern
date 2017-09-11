#pragma once
#include "Vehicle.h"
class Road
{
protected:
	Vehicle * pVehicle;
public:
	Road();
	~Road();
	void setVehicle(Vehicle*);
	virtual void run();
};
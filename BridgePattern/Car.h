#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
public:
	Car();
	~Car();
	void run() override;
};
#pragma once
#include "Road.h"
class Street :
	public Road
{
public:
	Street();
	~Street();
	void run() override;
};
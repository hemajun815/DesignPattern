#pragma once
#include "Target.h"
#include "Adaptee.h"
class Adapter : public Target, public Adaptee
{
public:
	Adapter();
	~Adapter();
	void request() override;
};
#include <iostream>
#include "Adaptee.h"

using namespace std;


Adaptee::Adaptee()
{
}


Adaptee::~Adaptee()
{
}


void Adaptee::specificRequest()
{
	cout << "Call specificRequest()." << endl;
}
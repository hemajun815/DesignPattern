#include <iostream>
#include "Singleton.h"

using namespace std;

Singleton * Singleton::p_singleton = NULL;

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
	delete this->p_singleton;
}

Singleton * Singleton::getSingleton()
{
	if (NULL == p_singleton)
		p_singleton = new Singleton();
	return p_singleton;
}

int Singleton::getNum()
{
	return this->num;
}

void Singleton::setNum(const int& num)
{
	this->num = num;
}
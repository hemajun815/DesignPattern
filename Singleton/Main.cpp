#include <iostream>
#include "Singleton.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Singleton * p_singleton = Singleton::getSingleton();
	p_singleton->setNum(1);
	cout << p_singleton->getNum() << endl;
	p_singleton->setNum(2);
	cout << p_singleton->getNum() << endl;
	getchar();
}
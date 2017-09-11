#include <iostream>
#include "Adapter.h"

using namespace std;

int main(int argc, char const *argv[])
{
	(new Adapter())->request();
	getchar();
}
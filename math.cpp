#include <iostream>
#include "Calculation.h"

int main(int argc, char* argv[])
{
	if (strcmp(argv[1], "-h") == 0) {
		std::cout << "usage: math plane-speed distance" << std::endl;
		return 0;
	}
	if (argc < 3) {
		std::cout << "Missing arguments. Type math -h for help" << std::endl;
		return 0;
	}

	Calculation numberOne;
	numberOne.setairplaneSpeed(atoi(argv[1]));
	numberOne.setobsFromPlaneDistance(atoi(argv[2]));
	std::cout << numberOne.computing() << std::endl;

}



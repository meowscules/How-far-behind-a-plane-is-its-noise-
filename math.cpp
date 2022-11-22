#include <iostream>
#include "Calculation.h"

int main(int argc, char* argv[])
{	
	switch (argc){
	case 1:{
		std::cout << "Missing arguments. Type math -h for help" << std::endl;
		break;
	}
	case 2:{
		if (strcmp(argv[1], "-h") == 0) {
			std::cout << "usage: math plane-speed distance" << std::endl;
		}
		else {
			std::cout << "Missing arguments. Type math -h for help" << std::endl;
		}
		break;
	}
	case 3:{
		Calculation numberOne;
		numberOne.setairplaneSpeed(atoi(argv[1]));
		numberOne.setobsFromPlaneDistance(atoi(argv[2]));
		std::cout << numberOne.computing() << std::endl;
		break;
	}
	default: {
		std::cout << "Type math -h for help" << std::endl;
		break;
	}
	}

}



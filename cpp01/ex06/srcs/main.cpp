#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
	Harl	harl;

	if (argc != 2) {
		std::cout << "Usage: ./harl <level>" << std::endl;
		return 1;
	}
	harl.harlFilter(argv[1]);
}

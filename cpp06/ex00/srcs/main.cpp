#include "converter.hpp"

int main(int argc, char **argv) {
	if (argc != 2){	
		std::cerr << "Usage: ./converter [string_literal]" << std::endl;
		return (EXIT_FAILURE);
	}
	convertInput(argv[1]);
}

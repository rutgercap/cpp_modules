#include "../includes/Array.hpp"
#include <iostream>

void unsignedIntConstructorTest() {
	Array<int>	toTest = Array<int>(3);
	std::cout << "---- Int constructor && subscript operator: ----" << std::endl;
	try {
		toTest[0] = 10;							// toTest[0] == 10
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << toTest[0] << std::endl;
	std::cout << "---- Copy constructor / copy assignment operator: ----" << std::endl;
	Array<int> toCompare = Array<int>(10);
	toCompare[0] = 15;							// toCompare[0] == 15
	toCompare[7] = 3;							// toCompare[7] == 3
	std::cout << toCompare[0] << std::endl;
	std::cout << toCompare[7] << std::endl;
	toCompare = toTest;							// toCompare == toTest
	try {
		std::cout << toCompare[7] << std::endl;	// Out of bounds after assignment
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << toCompare[0] << std::endl;	// toCompare[0] == toTest[0] == 10
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---- Deep copy: ----" << std::endl;
	toTest[0] = 1000;							// toCompare[0] = 1000
	std::cout << toCompare[0] << std::endl;		// toTest[0] == unchanged
}

void emptyContructorTest() {
	Array<int>	toTest = Array<int>();
	std::cout << "---- Empty constructor: ----" << std::endl;
	try {
		toTest[0] = 3;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void outOfBoundsTest() {
	Array<int>	toTest = Array<int>(3);
	std::cout << "---- Out of bounds: ----" << std::endl;
	try {
		toTest[-1] = 3;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		toTest[3] = 3;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void) {
	unsignedIntConstructorTest();
	emptyContructorTest();
	outOfBoundsTest();
	// system("leaks arrayTemplate");
}

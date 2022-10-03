#include "../includes/easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

void	vectorTest(std::vector<int> toSearch, int toFind) {
	try {
		easyfind(toSearch, toFind);	
	} catch (NotFoundException e) {
		std::cout << e.what() << std::endl;
	}
}

void	listTest(std::list<int> toSearch, int toFind) {
	try {
		easyfind(toSearch, toFind);	
	} catch (NotFoundException e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void) {
	std::vector<int>	intVector;
	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);
	intVector.push_back(4);
	intVector.push_back(5);

	std::cout << "Vector test:" << std::endl;
	// vectorTest(intVector, 3);
	// std::cout << "Success!" << std::endl;
	// vectorTest(intVector, 10);

	std::list<int>	intList;
	intList.push_back(1);
	intList.push_back(2);
	intList.push_back(3);
	intList.push_back(4);
	intList.push_back(5);

	listTest(intList, 3);
	std::cout << "Success!" << std::endl;
	listTest(intList, 10);
}

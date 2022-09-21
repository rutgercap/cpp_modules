#include "../includes/iter.hpp"
#include <cstring>


void uppercase(char c) {
	std::cout << static_cast<char>(toupper(c));
}

int main(void) {
	int intArray[] = {1, 2, 3, 4, 5};

	iter(intArray, 5, &printValue);
	std::cout << std::endl;

	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	iter(charArray, 5, &uppercase);
	std::cout << std::endl;
}

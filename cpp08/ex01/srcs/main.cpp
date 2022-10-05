#include "../includes/Span.hpp"
#include <iostream>
#include <array>

void	outOfBoundsTest() {
	Span	smallSpan = Span(1);

	try {
		smallSpan.addNumber(1);
		smallSpan.addNumber(2);
	} catch (Span::OutOfBoundsException e) {
		std::cout << e.what() << std::endl;
	}
}

void	notEnoughNumbersTest() {
	Span	smallSpan = Span(1);

	smallSpan.addNumber(3);
	try {
		smallSpan.shortestSpan();
	} catch (Span::NotEnoughNumbersException e) {
		std::cout << e.what() << std::endl;
	}
}

void	bigSpanTest() {
	Span		bigSpan = Span(10000);
	std::vector<int> storage = std::vector<int>(9998);

	std::fill(storage.begin(), storage.end(), 10);
	bigSpan.addNumber(0);
	bigSpan.addNumbers(storage.begin(), storage.end());
	bigSpan.addNumber(15);

	std::cout << bigSpan.shortestSpan() << std::endl;
	std::cout << bigSpan.longestSpan() << std::endl;
}

int main(void) {
	// outOfBoundsTest();
	// notEnoughNumbersTest();
	bigSpanTest();
}

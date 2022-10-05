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

void	subjectTest() {
	std::cout << "Subject test: " << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "----------" << std::endl;
}

int main(void) {
	subjectTest();
	// outOfBoundsTest();
	// notEnoughNumbersTest();
	bigSpanTest();
}

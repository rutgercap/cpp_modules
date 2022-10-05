#include "../includes/Span.hpp"

/**
 * 	Constructors & destructors
 */
Span::Span(): _maxNumbers(0) {}

Span::Span(Span const& original){
	*this = original;
}

Span::~Span(){}

Span::Span(unsigned int N): _maxNumbers(N) {
}

/**
 * Operators
 */
Span& Span::operator=(Span const& original) {
	_maxNumbers = original._maxNumbers;
	_numberStorage = std::vector<int>(original._numberStorage);
	return *this;
}

/**
 * 	Members functions
 */
void Span::addNumber(int n) {
	if (_numberStorage.size() + 1 > _maxNumbers) {
		throw new OutOfBoundsException();
	}
	_numberStorage.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	_numberStorage.insert(_numberStorage.end(), begin, end);
	if (_numberStorage.size() > _maxNumbers) {
		throw new OutOfBoundsException();
	}
}

double	Span::shortestSpan() {
	if (_numberStorage.size() < 2) {
		throw new NotEnoughNumbersException();
	}
	std::vector<int> copy = std::vector<int>(_numberStorage);

	std::sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), copy.begin());
	return *std::min_element(copy.begin(), copy.end());
}

double Span::longestSpan() {
	if (_numberStorage.size() < 2) {
		throw new NotEnoughNumbersException();
	}
	return *std::max_element(_numberStorage.begin(), _numberStorage.end()) - 
		*std::min_element(_numberStorage.begin(), _numberStorage.end());
}

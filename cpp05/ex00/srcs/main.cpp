#include <Bureaucrat.hpp>

void testConstructors(std::string const name, int score) {
	try {
		Bureaucrat *bc = new Bureaucrat(name, score);
		std::cout << *bc << std::endl;
		delete bc;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void testIncrementError() {
	Bureaucrat *bc = new Bureaucrat("Bart", 1);
	std::cout << *bc << std::endl;
	try {
		bc->incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *bc << std::endl;
	delete bc;
}

void testDecrementError() {
	Bureaucrat *bc = new Bureaucrat("Daan", 150);
	std::cout << *bc << std::endl;
	try {
		bc->decrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *bc << std::endl;
	delete bc;
}

int main(void) {
	testConstructors("Karel", 10);
	testConstructors("Kas", 0);
	testConstructors("Harrie", 160);
	testIncrementError();
	testDecrementError();
	// system("leaks bureaucrat");
}

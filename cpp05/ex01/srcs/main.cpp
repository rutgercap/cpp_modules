#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void) {
	Form  firstForm("first", 10, 10);
	Form  secondForm("second", 10, 10);
	Bureaucrat barrie("barrie", 10);

	std::cout << firstForm << std::endl;
	std::cout << secondForm << std::endl;
	try {
		firstForm.beSigned(barrie);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << firstForm << std::endl;
	barrie.decrementGrade();
	try {
		secondForm.beSigned(barrie);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << secondForm << std::endl;
	// system("leaks bureaucrat");
}

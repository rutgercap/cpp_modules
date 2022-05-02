#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void) {
	Form  firstForm("first", 10, 10);
	Form  secondForm("second", 10, 10);
	Bureaucrat barrie("barrie", 10);

	std::cout << firstForm << std::endl;
	std::cout << secondForm << std::endl;
	firstForm.beSigned(barrie);
	std::cout << firstForm << std::endl;
	barrie.decrementGrade();
	secondForm.beSigned(barrie);
	std::cout << secondForm << std::endl;
	// system("leaks bureaucrat");
}

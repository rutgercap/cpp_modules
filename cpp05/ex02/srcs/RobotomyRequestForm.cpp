#include <RobotomyRequestForm.hpp>

/*
	Constructors / destructors
*/
RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy request form", "None", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): 
	Form("Robotomy request form", target, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): 
	Form(other.getName(), other.getTarget(), 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

/*
	Operators
*/
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) {
	if (this != &other) {
		RobotomyRequestForm test(other);
		return test;
	}
	return *this;
}

/*
	Other functions
*/
void RobotomyRequestForm::action() const {
	std::cout << "Action done" << std::endl;
}

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
	Other functions
*/
void RobotomyRequestForm::action() const {
	if (!_isSigned) {
		return ;
	}
	std::cout << "** Drilling noises **" << std::endl;
	if (rand() % 2 == 1) {
		std::cout << getTarget() << " has been robotomized!" << std::endl;
	} else {
		std::cout << "Operator was a failure." << std::endl;
	}
}

#include <ShrubberyCreationForm.hpp>

/*
	Constructors / destructors
*/
ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery request form", "None", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): 
	Form("Shrubbery request form", target, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): 
	Form(other.getName(), other.getTarget(), 145, 137) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

/*
	Operators
*/
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) {
	if (this != &other) {
		ShrubberyCreationForm test(other);
		return test;
	}
	return *this;
}

/*
	Other functions
*/
void ShrubberyCreationForm::action() const {
	std::cout << "Action done" << std::endl;
}

#include <Intern.hpp>

/*
	Constructors / destructors
*/
Intern::Intern() {
}

Intern::Intern(Intern const &other) {
	(void)other;
}

Intern::~Intern() {
}

/*
	Operators
*/
Intern &Intern::operator=(Intern const &other) {
	(void)other;
	return *this;
}

/*
	Form functions
*/
Form    *Intern::makePresForm(std::string const &target) {
	return new PresidentialPardonForm(target);
}

Form    *Intern::makeShrubForm(std::string const &target) {
	return new ShrubberyCreationForm(target);
}

Form    *Intern::makeRoboForm(std::string const &target) {
	return new RobotomyRequestForm(target);
}

/*
	Other functions
*/
std::string	strToLower(std::string const &original) {
	std::string	lowerString = original;

	for (unsigned long i = 0; i < original.length(); i++) {
		lowerString[i] = tolower(original[i]);
	}
	return lowerString;
}

Form	*Intern::makeForm(std::string const &form, std::string const &target) const {
	std::string formLower = strToLower(form);
	for (int i = 0; i < TABLE_SIZE; i++) {
		if (table[i].key == formLower) {
			return (table[i].func)(target)
		}
	}
	std::cout << "Intern doesn't know " << form << std::endl;
}

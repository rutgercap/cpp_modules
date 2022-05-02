#include <PresidentialPardonForm.hpp>

/*
	Constructors / destructors
*/
PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential pardon form", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): 
	Form("Presidential pardon form", 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

/*
	Operators
*/
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) {
	if (this != &other) {
		this->isSigned = other.isSigned;
	}
	return *this;
}

/*
	Other functions
*/
void PresidentialPardonForm::action() const {
	// do action
}
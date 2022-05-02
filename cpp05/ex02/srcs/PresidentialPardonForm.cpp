#include <PresidentialPardonForm.hpp>

/*
	Constructors / destructors
*/
PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential pardon form", "None", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): 
	Form("Presidential pardon form", target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): 
	Form(other.getName(), other.getTarget(), 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

/*
	Other functions
*/
void PresidentialPardonForm::action() const {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

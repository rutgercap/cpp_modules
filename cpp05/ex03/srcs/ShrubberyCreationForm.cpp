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
	Other functions
*/
void ShrubberyCreationForm::action() const {
	if (!_isSigned) {
		return ;
	}
	std::ofstream	file(getTarget());
	
	file << "\n      ###\n     #o###\n   #####o###\n  #o#\\#|#/###\n   ###\\|/#o#\n    # }|{  #\n      }|{\n";
	file.close();
}

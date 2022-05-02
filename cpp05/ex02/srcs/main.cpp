#include <Bureaucrat.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>


void	signAndExecute(Bureaucrat const &bc, Form &form) {
	std::cout << "----------" << std::endl;
	form.beSigned(bc);
	try {
		bc.executeForm(form);
	} catch (std::exception &e) {
		std::cout << "Can't execute because: " << e.what() << std::endl;
	}
}

int main(void) {
	Bureaucrat	noob("Noob", 150);
	Bureaucrat	pro("Pro", 1);
	PresidentialPardonForm	pForm("Rutger");
	RobotomyRequestForm rForm("Niels");
	ShrubberyCreationForm sForm("Marineterrein");

	signAndExecute(noob, pForm);
	signAndExecute(pro, pForm);
	signAndExecute(noob, sForm);
	signAndExecute(pro, sForm);
	signAndExecute(noob, rForm);
	signAndExecute(pro, rForm);
}

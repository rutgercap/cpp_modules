#include <Bureaucrat.hpp>
#include <Intern.hpp>

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
	Intern		intern;
	Bureaucrat	noob("Noob", 150);
	Bureaucrat	pro("Pro", 1);
	Form	*null = intern.makeForm("test form", "None");
	Form	*shrub = intern.makeForm("shrubbery form", "marine terrein");
	Form	*pres = intern.makeForm("presidential pardon", "Niels");
	Form	*robo= intern.makeForm("robotomy request", "Kas");
	
	// signAndExecute(noob, null); // <--- doesn't compile with this
	(void)null;
	signAndExecute(noob, *shrub);
	signAndExecute(pro, *shrub);
	signAndExecute(noob, *pres);
	signAndExecute(pro, *pres);
	signAndExecute(noob, *robo);
	signAndExecute(pro, *robo);
	// system("leaks bureaucrat");
}

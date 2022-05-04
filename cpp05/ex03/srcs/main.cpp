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
	Intern	intern;

	
}

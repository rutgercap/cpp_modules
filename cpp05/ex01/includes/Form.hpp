#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <Bureaucrat.hpp>

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string const &name, int const toSign, int const toExec);
		Form(Form const &other);
		~Form();

		Form &operator=(Form const &other);

		std::string const getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned() const;

		void beSigned(Bureaucrat const &bc);

		/* Highest grade is 1 for some reason */
		class GradeTooHighException: public std::exception {
			public:
				char const *what() const throw() {
					return "Grade too high (max = 1)";
				}
		};

		/* Lowest grade is 150 for some reason */
		class GradeTooLowException: public std::exception {
			public:
				char const *what() const throw() {
					return "Grade too low (min = 150)";
				}
		};

	private:
		std::string const _name;
		int const _gradeToSign;
		int	const _gradeToExecute;
		bool _isSigned;

		int gradePipe(int const newGrade);
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif

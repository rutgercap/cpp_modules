#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <Bureaucrat.hpp>

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string const &name, std::string const &target,\
			int const toSign, int const toExec);
		Form(Form const &other);
		~Form();

		Form &operator=(Form const &other);

		std::string const getName() const;
		std::string const getTarget() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool isSigned() const;
		void execute(Bureaucrat const &executor) const;

		virtual void beSigned(Bureaucrat const &bc);

		/* Highest grade is 1 for some reason */
		class GradeTooHighException: public std::exception {
			public:
				char const *what() const throw() {
					return "grade too high";
				}
		};

		/* Lowest grade is 150 for some reason */
		class GradeTooLowException: public std::exception {
			public:
				char const *what() const throw() {
					return "grade too low";
				}
		};

	private:
		std::string const _name;
		std::string const _target;
		int const _gradeToSign;
		int	const _gradeToExecute;
		bool _isSigned;
		
		virtual void action() const = 0;

		int gradePipe(int const newGrade);
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif

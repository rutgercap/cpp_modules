#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

# include <Form.hpp>

class Form;

class Bureaucrat {
	public:
		Bureaucrat(std::string name, const int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat();
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &other);

		std::string const getName() const;
		int getGrade() const;
		void setGrade(int const newGrade);
		void incrementGrade();
		void decrementGrade();
		void signForm(Form const &form) const;
		void executeForm(Form const &form) const;

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
		int _grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bc);

#endif

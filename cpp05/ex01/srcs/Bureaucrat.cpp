#include <Bureaucrat.hpp>

/*
	Constructors / desctructors
*/
Bureaucrat::Bureaucrat(std::string name, const int grade):
	_name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other): 
	_name(other.getName()), _grade(other.getGrade()) {
}

Bureaucrat::~Bureaucrat() {
}

/*
	Operators
*/
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
	if (this != &other) {
		_grade = other.getGrade();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bc) {
	os << bc.getName() << ", bureaucrat grade: " << bc.getGrade();
    return os;
}

/*
	Getters / setters
*/
std::string	const Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::setGrade(int const newGrade) {
	_grade = newGrade;
}

/*
	Other functions
*/
void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1) {
		throw GradeTooHighException();
	}
	_grade -= 1;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150) {
		throw GradeTooLowException();
	}
	_grade += 1;
}

void Bureaucrat::signForm(Form const &form) {

}

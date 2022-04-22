#include <Form.hpp>
#include <iomanip>

/*
	Constructors / destructors
*/
Form::Form(): _name("None"), _gradeToSign(1), _gradeToExecute(1), _isSigned(false) {
}

Form::Form(std::string const &name, int const toSign, int const toExec):
	_name(name), _gradeToSign(gradePipe(toSign)), 
	_gradeToExecute(gradePipe(toExec)), _isSigned(false) {
}

Form::Form(Form const &other):
	_name(other._name), _gradeToSign(gradePipe(other._gradeToSign)), 
	_gradeToExecute(gradePipe(other._gradeToExecute)), 
	_isSigned(other._isSigned) {
}

Form::~Form() {
}

/*
	Operators
*/
Form &Form::operator=(Form const &other) {
	if (this != &other) {
		_isSigned = other._isSigned;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, Form const &form) {
	os << std::setw(10) << "| Form \'" << form.getName() << "\' |";
	os << std::setw(10) << "Sign grade: " << form.getSignGrade() << " |";
	os << std::setw(10) << "Exec grade: " << form.getExecGrade() << " |";
	os << std::setw(10) << "Form is ";
	if (!form.getSigned()) {
		os << "not ";
	}
	os << "signed |";
	return os;
}

/*
	Getters / setters
*/
std::string const Form::getName() const {
	return _name;
}

int Form::getSignGrade() const {
	return _gradeToSign;
}

int Form::getExecGrade() const {
	return _gradeToExecute;
}

bool Form::getSigned() const {
	return _isSigned;
}

/*
	Other functions
*/
void Form::beSigned(Bureaucrat const &bc) {
	if (bc.getGrade() > getSignGrade()) {
		throw GradeTooLowException();
	} else {
		signForm();
	}
}

void Form::signForm() {
	_isSigned = true;
	std::cout << getName() << " is signed!" << std::endl;
}

/* Throws exception if grade is too high or too low */
int	Form::gradePipe(int const newGrade) {
	if (newGrade > 150) {
		throw Form::GradeTooLowException();
	} else if (newGrade < 1) {
		throw Form::GradeTooHighException();
	}
	return newGrade;
}

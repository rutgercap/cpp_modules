#ifndef ROBOFORM
# define ROBOFORM

#include <Form.hpp>

class RobotomoyRequestForm: Form {
	public:
		RobotomoyRequestForm();
		RobotomoyRequestForm(RobotomoyRequestForm const &other);
		~RobotomoyRequestForm();

		RobotomoyRequestForm &operator=(RobotomoyRequestForm const &other);

};

#endif
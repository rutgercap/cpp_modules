#ifndef ROBOFORM
# define ROBOFORM

#include <Form.hpp>

class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	private:
		void action() const;
};

#endif

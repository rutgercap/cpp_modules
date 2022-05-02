#ifndef SHRUBFORM
# define SHRUBFORM

# include <Form.hpp>

class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		void action() const;
};

#endif

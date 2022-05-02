#ifndef SHRUBFORM
# define SHRUBFORM

# include <Form.hpp>

class ShrubberyCreationForm: Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	private:
		std::string const target;
};

#endif
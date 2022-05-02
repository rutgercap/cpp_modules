#ifndef SHRUBFORM
# define SHRUBFORM

# include <Form.hpp>
# include <fstream>

class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	private:
		void action() const;
};

#endif

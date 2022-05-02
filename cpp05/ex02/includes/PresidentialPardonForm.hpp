#ifndef PRESIDENTFORM
# define PRESIDENTFORM

# include <Form.hpp>
# include <fstream>

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void action() const;
};

#endif

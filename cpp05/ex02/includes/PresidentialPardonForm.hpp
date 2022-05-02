#ifndef PRESIDENTFORM
# define PRESIDENTFORM

# include <form.hpp>

class PresidentialPardonForm: Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void action() const;
};

#endif
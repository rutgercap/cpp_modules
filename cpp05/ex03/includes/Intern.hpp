#ifndef INTERN_HPP
# define INTERN_HPP

# include <PresidentialPardonForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <ShrubberyCreationForm.hpp>

# define TABLE_SIZE 3

class Intern {
    public:
        Intern();
        Intern(Intern const &other);
        ~Intern();

		Intern &operator=(Intern const &other);

        Form    *makeForm(std::string const &form, std::string const &target);
        Form    *makePresForm(std::string const &target);
        Form    *makeShrubForm(std::string const &target);
        Form    *makeRoboForm(std::string const &target);
};

typedef Form    *(Intern::*InternMemFn)(std::string const &target);

typedef struct s_comp
{
    std::string	key;
    InternMemFn func;
}	t_comp;

const t_comp table[3] = {
    {"robotomy request", &Intern::makeRoboForm},
    {"presidential pardon", &Intern::makePresForm},
    {"shrubbery form", &Intern::makeShrubForm},
};

#endif

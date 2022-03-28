#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
	public:
		ClapTrap	(std::string const &name);
		ClapTrap	(const ClapTrap &to_copy);
		ClapTrap	&operator=(const ClapTrap &clap);
		~ClapTrap	();

		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);


	private:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif

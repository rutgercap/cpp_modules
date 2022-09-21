#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap {
	public:
		ClapTrap	();
		ClapTrap	(const ClapTrap &to_copy);
		ClapTrap	(std::string const &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
		~ClapTrap	();
		ClapTrap	&operator=(const ClapTrap &clap);
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif

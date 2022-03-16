#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class Claptrap {
	public:
		Claptrap	Claptrap(const std::string name);
		void		attack(std::string, const Claptrap &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hitpoints = 10;
		int			_energyPoints = 10;
		int			_attackDamage = 0;
};

#endif

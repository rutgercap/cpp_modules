#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include <iostream>
# include <ClapTrap.hpp>

class ScavTrap: public ClapTrap {
	public:
		ScavTrap	();
		ScavTrap	(const ScavTrap &to_copy);
		ScavTrap	(std::string const &name);
		~ScavTrap	();
		ScavTrap	&operator=(const ScavTrap &scav);
		
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void 	guardGate();
};

#endif

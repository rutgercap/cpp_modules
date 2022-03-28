#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap		(std::string const &name);
		~DiamondTrap    ();

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		_name;
		int				_hitpoints;
		int				_energyPoints;
		int				_attackDamage;
};

#endif

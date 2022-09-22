#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap		(std::string const &name);
		DiamondTrap		(const DiamondTrap &to_copy);
		DiamondTrap		();
		~DiamondTrap    ();

		DiamondTrap	&operator=(const DiamondTrap &clap);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	whoAmI();

	private:
		std::string		_name;
		int				_hitpoints;
		int				_energyPoints;
		int				_attackDamage;
};

#endif

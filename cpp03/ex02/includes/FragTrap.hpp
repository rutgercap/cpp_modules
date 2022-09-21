#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <string>
# include <iostream>
# include <ClapTrap.hpp>

class FragTrap: public ClapTrap {
	public:
		FragTrap	(std::string const &name);
		FragTrap	();
		FragTrap	(const FragTrap &to_copy);
		~FragTrap	();

		FragTrap	&operator=(const FragTrap &clap);
		
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
        void    highFivesGuys();
};

#endif

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon  *_weapon;
		std::string  _name;

	public:
        HumanB(const std::string name);
		void    setName(const std::string name);
		std::string	getName(void);
		void	setWeapon(Weapon &weapon);
		Weapon	*getWeapon(void);
		void	attack(void);
};

#endif

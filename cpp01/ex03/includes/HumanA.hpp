#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		Weapon  &_weapon;
		std::string	_name;

	public:
        HumanA(const std::string name, Weapon &weapon);
		std::string	getName(void);
		void    setName(const std::string name);
		void	setWeapon(Weapon &weapon);
		Weapon	getWeapon(void);
		void	attack(void);
};

#endif

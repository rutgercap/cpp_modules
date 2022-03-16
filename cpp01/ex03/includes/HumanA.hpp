#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		string	_name;
		Weapon  &_weapon;

	public:
        HumanA(const string name, Weapon &weapon);
		void    setName(const string name);
		string	getName(void);
		void	setWeapon(Weapon &weapon);
		Weapon	getWeapon(void);
		void	attack(void);
};

#endif

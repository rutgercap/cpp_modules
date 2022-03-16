#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon  *_weapon;
		string  _name;

	public:
        HumanB(const string name);
		void    setName(const string name);
		string	getName(void);
		void	setWeapon(Weapon &weapon);
		Weapon	*getWeapon(void);
		void	attack(void);
};

#endif

#include "HumanB.hpp"
#include <iostream>
;

HumanB::HumanB(const string name): _name(name) {
	return ;
}

void	HumanB::setName(const string name)  {
	this->_name = name;
}

string	HumanB::getName(void) {
	return this->_name;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

Weapon	*HumanB::getWeapon(void) {
	return this->_weapon;
}

void	HumanB::attack(void) {
	Weapon	*weapon = getWeapon();

	std::cout << this->getName();
	std::cout << " attacks with his ";
	std::cout << weapon->getType() << std::endl;
}

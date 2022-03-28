#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA (const std::string name, Weapon& weapon): _name(name), _weapon(weapon) {
	return ;
}

void	HumanA::setName(std::string name) {
	this->_name = name;
}

std::string	HumanA::getName(void) {
	return this->_name;
}

void	HumanA::setWeapon(Weapon &weapon) {
	this->_weapon = weapon;
}

Weapon	HumanA::getWeapon(void) {
	return this->_weapon;
}

void	HumanA::attack(void) {
	Weapon	weapon = getWeapon();

	std::cout << this->getName();
	std::cout << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}

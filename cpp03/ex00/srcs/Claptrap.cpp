#include "ClapTrap.hpp"

void	announceClapTrap(std::string const &name) {
	std::cout << "ClapTrap " << name << " ";
}

/*
	Constructors and destructors
*/
ClapTrap::ClapTrap(std::string const &name):
	_name(name), _hitpoints(10), _energyPoints(10), _attackDamage(10) {
	announceClapTrap(_name);
	std::cout << "has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy) {
	if (this != &to_copy) {
		*this = to_copy;
	}
}

ClapTrap::~ClapTrap() {
	announceClapTrap(_name);
	std::cout << "died!" << std::endl;
}

/*
	Operators
*/
ClapTrap &ClapTrap::operator=(const ClapTrap &clap) {
	if (this != clap) {
		
	}
}

/*
	Other
*/
void	ClapTrap::attack(std::string const &target) {
	announceClapTrap(_name);
	std::cout << "attacks " << \
		target << ", causing " << _attackDamage << " damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	announceClapTrap(_name);
	std::cout << "took " << amount << " damage!" << std::endl;
	_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	announceClapTrap(_name);
	std::cout << "is repaired for " << amount << " damage!" << std::endl;
	_hitpoints += amount;
}

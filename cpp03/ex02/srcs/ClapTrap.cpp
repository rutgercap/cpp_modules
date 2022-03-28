#include <ClapTrap.hpp>

void	announceClapTrap(std::string const &name) {
	std::cout << "ClapTrap " << name << " ";
}

ClapTrap::ClapTrap(std::string const &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage):
	_name(name), _hitpoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {
	announceClapTrap(_name);
	std::cout << "has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	announceClapTrap(_name);
	std::cout << "died!" << std::endl;
}

void	ClapTrap::attack(std:: string const &target) {
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

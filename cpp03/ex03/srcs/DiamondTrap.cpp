#include <DiamondTrap.hpp>

void	announceDiamondTrap(std::string const &name) {
	std::cout << "DiamondTrap " << name << " ";
}

DiamondTrap::DiamondTrap(std::string const &name): 
    ClapTrap(name), FragTrap(name), ScavTrap(name),
    _name(name), _hitpoints(FragTrap::_hitpoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage)  {
	announceDiamondTrap(_name);
	std::cout << "has been created!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	announceDiamondTrap(_name);
	std::cout << "died!" << std::endl;
}

void	DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
	_energyPoints -= 10;
	_attackDamage -= 10;
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	announceDiamondTrap(_name);
	std::cout << "took " << amount << " damage!" << std::endl;
	_hitpoints -= amount;
}

void	DiamondTrap::beRepaired(unsigned int amount) {
	announceDiamondTrap(_name);
	std::cout << "is repaired for " << amount << " damage!" << std::endl;
	_hitpoints += amount;
}

#include <ScavTrap.hpp>

void	announceScavtrap(std::string const &name) {
	std::cout << "Scavtrap " << name << " ";
}

/**
 * 	Constructors and destructors
 */
ScavTrap::ScavTrap(): ClapTrap("nothing", 100, 50, 20) {
	announceScavtrap(_name);
	std::cout << "has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 50, 20) {
	announceScavtrap(_name);
	std::cout << "has been created!" << std::endl;
}

ScavTrap::~ScavTrap() {
	announceScavtrap(_name);
	std::cout << "died!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &to_copy) {
	if (this != &to_copy) {
		*this = to_copy;
	}
}

/*
	Operators
*/
ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	if (this == &scav) {
		return *this;
	}
	_name = scav._name;
	_hitpoints = scav._hitpoints;
	_energyPoints = scav._energyPoints;
	_attackDamage = scav._attackDamage;
	return *this;
}

/**
 * Other stuff
 */
void	ScavTrap::attack(std::string const &target) {
	announceScavtrap(_name);
	std::cout << "attacks " << \
		target << ", causing " << _attackDamage << " damage!" << std::endl;
	_energyPoints--;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	announceScavtrap(_name);
	std::cout << "took " << amount << " damage!" << std::endl;
	_hitpoints -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	announceScavtrap(_name);
	std::cout << "is repaired for " << amount << " damage!" << std::endl;
	_hitpoints += amount;
}

void	ScavTrap::guardGate() {
	announceScavtrap(_name);
	std::cout << "has entered gatekeeper mode" << std::endl;
}

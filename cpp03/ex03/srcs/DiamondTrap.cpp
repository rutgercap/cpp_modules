#include <DiamondTrap.hpp>

void	announceDiamondTrap(std::string const &name) {
	std::cout << "DiamondTrap " << name << " ";
}

/**
 * 	Constructors and destructors
 */
DiamondTrap::DiamondTrap(): ClapTrap("nothing_clap_name"), FragTrap(), ScavTrap(),
    _name("nothing"), _hitpoints(FragTrap::_hitpoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage)  {
	announceDiamondTrap(_name);
	std::cout << "has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),
    _name(name), _hitpoints(FragTrap::_hitpoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage)  {
	announceDiamondTrap(_name);
	std::cout << "has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &to_copy)
	: ClapTrap(to_copy._name + "_clap_name"), FragTrap(to_copy), ScavTrap(to_copy), _name(to_copy._name) {
	announceDiamondTrap(_name);
	std::cout << "has been created!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	announceDiamondTrap(_name);
	std::cout << "died!" << std::endl;
}

/**
 * 	Operators
 */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond) {
	if (this == &diamond) {
		return *this;
	}
	_name = diamond._name;
	ClapTrap::_name = diamond._name + "_clap_name";
	_hitpoints = diamond._hitpoints;
	_energyPoints = diamond._energyPoints;
	_attackDamage = diamond._attackDamage;
	return *this;
}

/**
 * Other
 */
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

void	DiamondTrap::whoAmI() {

	std::cout << "Diamond name: " << DiamondTrap::_name << std::endl;
	std::cout << "Clap name: " << ClapTrap::_name << std::endl;
}

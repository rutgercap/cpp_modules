#include <FragTrap.hpp>

void	announceFragTrap(std::string const &name) {
	std::cout << "FragTrap " << name << " ";
}

/**
 * 	Constructors / destructors
 */
FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30) {
	announceFragTrap(_name);
	std::cout << "has been created!" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("nothing", 100, 100, 30) {
	announceFragTrap(_name);
	std::cout << "has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &to_copy) {
	if (this != &to_copy) {
		*this = to_copy;
	}
	announceFragTrap(_name);
}

FragTrap::~FragTrap() {
	announceFragTrap(_name);
	std::cout << "died!" << std::endl;
}

/*
	Operators
*/
FragTrap &FragTrap::operator=(const FragTrap &frag) {
	if (this == &frag) {
		return *this;
	}
	_name = frag._name;
	_hitpoints = frag._hitpoints;
	_energyPoints = frag._energyPoints;
	_attackDamage = frag._attackDamage;
	return *this;
}

/**
 * Other
 */
void	FragTrap::attack(std::string const &target) {
	announceFragTrap(_name);
	std::cout << "attacks " << \
		target << ", causing " << _attackDamage << " damage!" << std::endl;
	_energyPoints--;
}

void	FragTrap::takeDamage(unsigned int amount) {
	announceFragTrap(_name);
	std::cout << "took " << amount << " damage!" << std::endl;
	_hitpoints -= amount;
}

void	FragTrap::beRepaired(unsigned int amount) {
	announceFragTrap(_name);
	std::cout << "is repaired for " << amount << " damage!" << std::endl;
	_hitpoints += amount;
}

void    FragTrap::highFivesGuys() {
    announceFragTrap(_name);
    std::cout << "wants a high five" << std::endl;
}

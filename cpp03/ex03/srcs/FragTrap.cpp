#include <FragTrap.hpp>

void	announceFragTrap(std::string const &name) {
	std::cout << "FragTrap " << name << " ";
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30) {
	announceFragTrap(_name);
	std::cout << "has been created!" << std::endl;
}

FragTrap::~FragTrap() {
	announceFragTrap(_name);
	std::cout << "died!" << std::endl;
}

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

#include <ScavTrap.hpp>

void	testScav() {
	std::cout << "----- Scavtrap: -----" << std::endl;
	ScavTrap	scav("Barrie");
	ScavTrap	secondScav("Second Barrie");
	scav.attack("Harrie");
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();

	// Copy assignment operator test
	secondScav = scav;
	secondScav.attack("Blabla");
}

int main(void) {
	testScav();
}

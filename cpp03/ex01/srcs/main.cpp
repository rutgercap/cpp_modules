#include <ScavTrap.hpp>

void	testScav() {
	std::cout << "----- Scavtrap: -----" << std::endl;
	ScavTrap	scav("Barrie");
	scav.attack("Harrie");
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();
}

int main(void) {
	testScav();
}

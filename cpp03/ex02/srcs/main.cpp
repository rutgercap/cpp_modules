#include <FragTrap.hpp>

/*
void	testClap() {
	std::cout << "----- Claptrap: -----" << std::endl;

	ClapTrap	clap("Harrie", 10, 10, 10);
	clap.attack("a tree");
	clap.takeDamage(10);
	clap.beRepaired(10);
}
*/

void	testFrag() {
	std::cout << "----- FragTrap: -----" << std::endl;

	FragTrap	frag("Barrie");
	frag.attack("Harrie");
	frag.beRepaired(10);
	frag.takeDamage(10);
	frag.highFivesGuys();
}

int main(void) {
	// testClap();

	testFrag();
}

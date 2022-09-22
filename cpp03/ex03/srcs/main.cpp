#include "DiamondTrap.hpp"

int main(){
	DiamondTrap barrie;

	barrie.attack("someone");
	barrie.whoAmI();

	std::cout << "-----" << std::endl;
	DiamondTrap Harrie("harrie");

	barrie.attack("someone");
	barrie.whoAmI();
}

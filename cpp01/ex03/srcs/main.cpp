#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

void	mytest(void)
{
		Weapon	club = Weapon("Hamer");

		HumanA	kas("Kas", club);
		kas.attack();
		club.setType("Knuppel");
		kas.attack();

		HumanB	arthur("Arthur");
		arthur.setWeapon(club);
		arthur.attack();
		club.setType("Fist");
		arthur.attack();
}

void	test_1(void)
{
	Weapon        club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void	test_2(void)
{
	Weapon        club = Weapon("crude spiked club");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int main(void) {
	std::cout << "Both:" << std::endl;
	mytest();
	std::cout << "Pointer:" << std::endl;
	test_1();
	std::cout << "Reference:" << std::endl;
	test_2();
}

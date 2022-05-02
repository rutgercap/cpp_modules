#include "Harl.hpp"
#include <iostream>

void	Harl::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Harl::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

long	Harl::hash(std:: string const& str) {
	int		p = 31; // prime number roughly equal to number of characters in string
	int		m =	10^9 + 9;	// large prime number
	long	power_of_p = 1;
	long	hash_val = 0;
	int		strlen = str.length();

	for (int i = 0; i < strlen; i++) {
		hash_val = (hash_val + \
			(str[i] - 'A' + 1) * power_of_p) % m;
		power_of_p = (power_of_p * p) % m;
	}

	// only return positive remainder
	return (hash_val % m + m) % m;
}

void	doNothing() {}

void	Harl::complain(std::string level) {
	static const t_comp table[4] = {
		{"WARNING", hash("WARNING"), &Harl::warning},
		{"ERROR", hash("ERROR"), &Harl::error},
		{"INFO", hash("INFO"), &Harl::info},
		{"DEBUG", hash("DEBUG"), &Harl::debug},
	};
	for (int i = 0; i < 4; i++) {
		HarlMemFnc fnc = (level == table[i].key) ? table[i].func : NULL;
		fnc == NULL ? doNothing() : (this->*(fnc))();
	}
}

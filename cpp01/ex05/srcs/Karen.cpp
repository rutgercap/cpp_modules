#include "Karen.hpp"
#include <iostream>

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

long	Karen::hash(std:: string const& str) {
	int		p = 31; // prime number roughly equal to number of characters in string
	int		m =	10^9 + 9;	// large prime number
	long	power_of_p = 1;
	long	hash_val = 0;

	for (int i = 0; i < str.length(); i++) {
		hash_val = (hash_val + \
			(str[i] - 'A' + 1) * power_of_p) % m;
		power_of_p = (power_of_p * p) % m;
	}

	// only return positive remainder
	return (hash_val % m + m) % m;
}

void	doNothing() {}

void	Karen::complain(std::string level) {
	static const t_comp table[4] = {
		{"WARNING", hash("WARNING"), &Karen::warning},
		{"ERROR", hash("ERROR"), &Karen::error},
		{"INFO", hash("INFO"), &Karen::info},
		{"DEBUG", hash("DEBUG"), &Karen::debug},
	};
	long index = hash(level);
	for (int i = 0; i < 4; i++) {
		KarenMemFnc fnc = (level == table[i].key) ? table[i].func : NULL;
		fnc == NULL ? doNothing() : (this->*(fnc))();
	}
}

#include "Zombie.hpp"
#include <iostream>

;
;

Zombie::Zombie(std::string name) {
    this->_name = name;
}

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " has died" << std::endl;
}

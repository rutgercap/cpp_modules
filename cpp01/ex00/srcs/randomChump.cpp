#include "Zombie.hpp"
#include <string>
#include <iostream>

;
;

void randomChump( std::string name ) {
    Zombie chump(name);
    chump.announce();
}

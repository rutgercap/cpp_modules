#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define ZOMBIES_N 3
#define NAME "Kas"

int main(void) {
    Zombie  *horde;

    horde = zombieHorde(ZOMBIES_N, NAME);
    for (int i = 0; i < ZOMBIES_N; i++) {
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}

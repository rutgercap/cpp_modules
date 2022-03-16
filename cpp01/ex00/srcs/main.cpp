#include "Zombie.hpp"
#include <cstdio>

int main() {
    Zombie zomb_1("Kas");
    Zombie *zomb_2 = newZombie("Arthur");
    zomb_1.announce();
    zomb_2->announce();
    randomChump("Mares");
    delete(zomb_2);
    return (0);
}

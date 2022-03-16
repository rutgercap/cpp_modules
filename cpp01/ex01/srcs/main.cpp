#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char **argv) {
    int     N = atoi(argv[1]);
    Zombie  *horde;
    
    if (argc != 3) {
        std::cout << "Usage: ./horde <name>" << std::endl;
        return (1);
    }
    horde = zombieHorde(N, argv[2]);
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}

#include "Harl.hpp"
#include <iostream>

int main(void) {
    Harl   harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("test");
    return 0;
}

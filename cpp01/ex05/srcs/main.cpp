#include "Karen.hpp"
#include <iostream>

int main(void) {
    Karen   karen;

    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    karen.complain("test");
    return 0;
}

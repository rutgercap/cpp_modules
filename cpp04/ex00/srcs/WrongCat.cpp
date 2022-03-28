#include <WrongCat.hpp>
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("Wrong cat") {
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!" << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << "Miaow." << std::endl;
}

#include <Animal.hpp>
#include <iostream>

Animal::Animal(std::string const &type): _type(type) {
}

Animal::Animal(): _type("Nothing") {
}

Animal::~Animal() {
}

void    Animal::makeSound() const {
    std::cout << "Silence.." << std::endl;
}

std::string const   Animal::getType() const {
    return _type;
}

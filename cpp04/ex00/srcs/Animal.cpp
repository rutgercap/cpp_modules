#include <Animal.hpp>
#include <iostream>

Animal::Animal(std::string const &type): _type(type) {
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(): _type("Nothing") {
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

void    Animal::makeSound() const {
    std::cout << "Silence.." << std::endl;
}

std::string const   Animal::getType() const {
    return _type;
}

#include <WrongAnimal.hpp>
#include <iostream>

WrongAnimal::WrongAnimal(std::string type): _type(type) {
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(): _type("Nothing, but wrong") {
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

void    WrongAnimal::makeSound() const {
    std::cout << "Silence.. but wrong" << std::endl;
}

std::string const   WrongAnimal::getType() const {
    return _type;
}

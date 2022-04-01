#include <Animal.hpp>
#include <iostream>

/*
	constructors and destructors
*/
Animal::Animal(std::string const &type): _type(type) {
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(): _type("Nothing") {
}

Animal::Animal(const Animal &animal): _type(animal.getType()) {
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

/*
	operators
*/
Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		*this = animal;
	}
	return *this;
}

/*
	Other functions
*/
void    Animal::makeSound() const {
    std::cout << "Silence.." << std::endl;
}

std::string const   Animal::getType() const {
    return _type;
}

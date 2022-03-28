#include <Animal.hpp>
#include <iostream>


/*
	Constructors and destructors
*/
Animal::Animal(std::string const &type): _type(type) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(): _type("Nothing") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

/*
	Operators
*/
Animal &Animal::operator=(const Animal &animal) {
	(void)animal;
	return *this;
}

/*
	Getters and setters
*/
std::string const   Animal::getType() const {
    return _type;
}

Brain	*Animal::getBrain() const {
	return NULL;
}

/*
	Other functions
*/
void    Animal::makeSound() const {
    std::cout << "Silence.." << std::endl;
}

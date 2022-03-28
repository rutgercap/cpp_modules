#include <Cat.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Cat::Cat(): Animal("Cat"), _brain(new Brain()) {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat constructor called" << std::endl;
	delete _brain;
}

/*
	Other
*/
void    Cat::makeSound() const {
	std::cout << "Miaow." << std::endl;
}

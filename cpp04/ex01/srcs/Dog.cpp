#include <Dog.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Dog::Dog(): Animal("Dog"), _brain(new Brain()) {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

/*
	Operators
*/
Dog &Dog::operator=(const Dog &dog) {
	getBrain()->copyBrain(*dog.getBrain());
	return *this;
}

/*
	Getters and setters
*/
Brain	*Dog::getBrain() const {
	return _brain;
}

/*
	Other
*/
void    Dog::makeSound() const {
	std::cout << "Woof." << std::endl;
}


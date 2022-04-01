#include <Dog.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Dog::Dog(): Animal("Dog"), _brain(new Brain()) {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog.getType()), _brain(new Brain(*dog.getBrain())) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

/*
	Operators
*/
Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog operator called" << std::endl;
	if (this != &dog) {
		_brain = dog._brain;
	}
	return *this;
}

Animal &Dog::operator=(const Animal &animal) {
	std::cout << "Dog operator called" << std::endl;
	if (this != &animal) {
		this->getBrain()->copyIdeas(*animal.getBrain());
	}
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

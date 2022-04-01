#include <Cat.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Cat::Cat(): Animal("Cat"), _brain(new Brain()) {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat.getType()), _brain(cat.getBrain()) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat constructor called" << std::endl;
	delete _brain;
}

/*
	operators
*/
Cat &Cat::operator=(Cat const &cat) {
	if (this != &cat) {
		_brain = cat._brain;
	}
	return *this;
}

Animal &Cat::operator=(Animal const &animal) {
	if (this != &animal) {
		this->getBrain()->copyIdeas(*animal.getBrain());
	}
	return *this;
}

/*
	Getters and setters
*/
Brain	*Cat::getBrain() const {
	return _brain;
}

/*
	Other
*/
void    Cat::makeSound() const {
	std::cout << "Miaow." << std::endl;
}

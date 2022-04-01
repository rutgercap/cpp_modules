#include <Cat.hpp>
#include <iostream>

/*
	Constructors and destructors
*/
Cat::Cat(): Animal("Cat") {
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat.getType()) {
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

/*
	Operators
*/
Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		*this = cat;
	}
	return *this;
}

/*
	Other functions
*/
void    Cat::makeSound() const {
    std::cout << "Miaow." << std::endl;
}

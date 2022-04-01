#include <Dog.hpp>
#include <iostream>

/*
	Constructors / destructors
*/

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog.getType()) {
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called!" << std::endl;
}

/*
	operators
*/
Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		*this = dog;
	}
	return *this;
}

/*
	other functions
*/
void    Dog::makeSound() const {
    std::cout << "Woof." << std::endl;
}

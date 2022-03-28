#include <Dog.hpp>
#include <iostream>

Dog::Dog(): Animal("Dog"), _brain(new Brain()) {
}

Dog::Dog(const Dog &to_copy): Animal("Dog"), _brain(new Brain()) {
}

Dog::~Dog() {
	delete _brain;
}

void    Dog::makeSound() const {
	std::cout << "Woof." << std::endl;
}

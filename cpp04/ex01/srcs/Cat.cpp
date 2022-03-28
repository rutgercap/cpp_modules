#include <Cat.hpp>
#include <iostream>

Cat::Cat(): Animal("Cat"), _brain(new Brain()) {
}

Cat::Cat(const Cat &to_copy): Animal("Cat"), _brain(new Brain()) {

}

Cat::~Cat() {
	delete _brain;
}

void    Cat::makeSound() const {
	std::cout << "Miaow." << std::endl;
}

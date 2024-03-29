#include <WrongAnimal.hpp>
#include <iostream>

/*
	constructors / destructors
*/

WrongAnimal::WrongAnimal(std::string type): _type(type) {
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(): _type("Nothing, but wrong") {
    std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong): _type(wrong.getType()) {
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

/*
	operators
*/
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong) {
	if (this != &wrong) {
		*this = wrong;
	}
	return *this;
}

void    WrongAnimal::makeSound() const {
    std::cout << "Silence.. but wrong" << std::endl;
}

std::string const   WrongAnimal::getType() const {
    return _type;
}

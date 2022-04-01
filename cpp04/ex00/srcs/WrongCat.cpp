#include <WrongCat.hpp>
#include <iostream>

/*
	Constructors / destructors
*/
WrongCat::WrongCat(): WrongAnimal("Wrong cat") {
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong): WrongAnimal(wrong.getType()) {
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!" << std::endl;
}

/*
	operators
*/
WrongCat &WrongCat::operator=(const WrongCat &wrong) {
	if (this != &wrong) {
		*this = wrong;
	}
	return *this;
}

std::string const WrongCat::getType() const {
	return _type;
}

void    WrongCat::makeSound() const {
    std::cout << "Miaow." << std::endl;
}

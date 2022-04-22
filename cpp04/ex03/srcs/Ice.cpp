#include <Ice.hpp>
#include <iostream>

/*
	Constructors / destructors
*/
Ice::Ice(): AMateria("ice") {
}

Ice::Ice(Ice const &ice): AMateria(ice._type) {
}

Ice::~Ice() {
}

/*
	Operators
*/
Ice &Ice::operator=(Ice const &ice) {
	if (this != &ice) {
		_type = ice._type;
	}
	return *this;
}

/*
	Other functions
*/
AMateria *Ice::clone() const {
	AMateria *clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

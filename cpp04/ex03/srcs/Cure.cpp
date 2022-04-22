#include <Cure.hpp>
#include <iostream>

/*
	Constructors / destructors
*/
Cure::Cure(): AMateria("cure") {
}

Cure::Cure(Cure const &cure): AMateria(cure._type) {
}

Cure::~Cure() {
}

/*
	Operators
*/
Cure &Cure::operator=(Cure const &cure) {
	if (this != &cure) {
		_type = cure._type;
	}
	return *this;
}

/*
	Other functions
*/
AMateria *Cure::clone() const {
	AMateria *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
}

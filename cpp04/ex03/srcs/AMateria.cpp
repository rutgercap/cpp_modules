#include <AMateria.hpp>
#include <iostream>

/*
	Constructors / destructors
*/
AMateria::AMateria() {
}

AMateria::AMateria(AMateria const &materia): _type(materia._type) {
}

AMateria::AMateria(std::string const &type): _type(type) {
}

AMateria::~AMateria() {
}

/*
	Operators
*/
AMateria &AMateria::operator=(AMateria const &materia) {
	setType(materia.getType());
	return *this;
}

/*
	Other functions
*/
std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::setType(std::string const &type) {
	_type = type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "* Slaps " << target.getName() << " *" << std::endl;
}

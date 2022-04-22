#include <MateriaSource.hpp>

/*
	Constructors / destructors
*/
MateriaSource::MateriaSource(): IMateriaSource() {
	nullMateria();
}

MateriaSource::MateriaSource(MateriaSource const &materia) {
	nullMateria();
	*this = materia;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 3; i++) {
		if (_materia[i]) {
			delete _materia[i];
		}
	}
}

/*
	Operators
*/
MateriaSource &MateriaSource::operator=(MateriaSource const &materia) {
	if (this == &materia) {
		return *this;
	}
	for (int i = 0; i < 3; i++) {
		if (_materia[i]) {
			delete _materia[i];
		}
	}
	return *this;
}

/*
	Other functions
*/
void MateriaSource::learnMateria(AMateria *AMateria) {
	for (int i = 0; i < 4; i++) {
		if (_materia[i] == NULL) {
			_materia[i] = AMateria;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (!_materia[i]->getType().compare(type)) {
			return _materia[i]->clone();
		}
	}
	return NULL;
}

void	MateriaSource::nullMateria() {
	for (int i = 0; i < 3; i++) {
		_materia[i] = NULL;
	}
}

#include <Character.hpp>
#include <iostream>

/*
	Constructors / destructors
*/
Character::Character(): _name("Nameless")  {
	nullInventory();
}

Character::Character(std::string const &name): _name(name) {
	nullInventory();
}

Character::Character(Character const &character) {
	nullInventory();
	for (int i = 0; i < 4; i++) {
		if (character._inventory[i]) {
			_inventory[i] = character._inventory[i]->clone();
		}
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		this->unequip(i);
	}
}

/*
	Getters / setters
*/
std::string const &Character::getName() const {
	return _name;
}

/*
	Operators
*/
Character &Character::operator=(Character const &other) {
	_name = other._name;
	for (int i = 0; i < 4; i++) {
		unequip(i);
		equip(other._inventory[i]);
	}
	return *this;
}

/*
	Other functions
*/
void	Character::equip(AMateria *m) {
	if (m == NULL) {
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		return ;
	}
	if (_inventory[idx])
	{
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL) {
		std::cout << "* does nothing * " << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}

void	Character::nullInventory() {
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

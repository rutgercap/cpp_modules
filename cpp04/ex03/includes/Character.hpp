#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <ICharacter.hpp>
# include <MateriaSource.hpp>

class Character: public ICharacter {
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &other);
		~Character();

		Character &operator=(Character const &other);

		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string 	_name;
		AMateria		*_inventory[4];

		void nullInventory();
};

#endif


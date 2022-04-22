#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <ICharacter.hpp>

class ICharacter;

class AMateria {
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &materia);
		AMateria();
		virtual ~AMateria();

		virtual AMateria &operator=(AMateria const &materia);

		std::string const & getType() const; // Returns the materia type
		void setType(std::string const &type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};

#endif

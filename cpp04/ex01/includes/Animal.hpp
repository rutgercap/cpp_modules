#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	public:
		Animal(std::string const &type);
		Animal();
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string const getType() const;

	protected:
		std::string const   _type;
};

#endif

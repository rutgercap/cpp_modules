#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <Brain.hpp>

class Animal {
	public:
		Animal(std::string const &type);
		Animal(const Animal &animal);
		Animal();
		virtual ~Animal();
		
		virtual Animal &operator=(const Animal &animal);

		virtual void makeSound() const;
		virtual Brain *getBrain() const;
		std::string const getType() const;

	protected:
		std::string const   _type;
};

#endif
